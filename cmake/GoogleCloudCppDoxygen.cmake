# ~~~
# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

find_package(Doxygen QUIET)

function (google_cloud_cpp_doxygen_deploy_version VAR)
    set(VERSION "${PROJECT_VERSION}")
    if ("${GOOGLE_CLOUD_CPP_USE_MASTER_FOR_REFDOC_LINKS}")
        # Match the version string used in publish-docs.sh
        set(VERSION "HEAD")
    endif ()
    set(${VAR}
        "${VERSION}"
        PARENT_SCOPE)
endfunction ()

function (google_cloud_cpp_doxygen_targets_impl library)
    if (NOT GOOGLE_CLOUD_CPP_GENERATE_DOXYGEN OR NOT DOXYGEN_FOUND)
        return()
    endif ()
    if (CMAKE_VERSION VERSION_LESS "3.12")
        # Old versions of CMake have really poor support for Doxygen generation.
        message(
            STATUS "Doxygen generation only enabled for cmake 3.12 and higher")
        return()
    endif ()

    cmake_parse_arguments(opt "RECURSIVE" "" "INPUTS;TAGFILES;DEPENDS" ${ARGN})
    set(DOXYGEN_FILE_PATTERNS "*.dox" "*.h")
    set(DOXYGEN_EXCLUDE_PATTERNS
        # We should skip internal directories to speed up the build. We do not
        # use "*/internal/*" because Doxygen breaks when we include
        # "*/internal/*.inc" from a public header. (Don't ask me why).
        "*/internal/*.h"
        "*/internal/*.cc"
        # We should skip all tests.
        "*_test.cc"
        # TODO(#9841): remove this special case when the files are removed.
        "retry_traits.h"
        # Handwritten libraries may contain the following subdirectories, which
        # are not customer-facing. We can skip them.
        "*/benchmarks/*"
        "*/integration_tests/*"
        "*/testing/*"
        "*/tests/*")
    set(DOXYGEN_EXAMPLE_RECURSIVE NO)
    set(DOXYGEN_EXCLUDE_SYMLINKS YES)
    set(DOXYGEN_QUIET YES)
    set(DOXYGEN_WARN_AS_ERROR YES)
    set(DOXYGEN_INLINE_INHERITED_MEMB YES)
    set(DOXYGEN_JAVADOC_AUTOBRIEF YES)
    set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
    set(DOXYGEN_IDL_PROPERTY_SUPPORT NO)
    set(DOXYGEN_EXTRACT_ALL YES)
    set(DOXYGEN_EXTRACT_STATIC YES)
    set(DOXYGEN_SORT_MEMBERS_CTORS_1ST YES)
    set(DOXYGEN_GENERATE_TODOLIST NO)
    set(DOXYGEN_GENERATE_BUGLIST NO)
    set(DOXYGEN_GENERATE_TESTLIST NO)
    set(DOXYGEN_CLANG_ASSISTED_PARSING YES)
    set(DOXYGEN_CLANG_OPTIONS)
    set(DOXYGEN_CLANG_DATABASE_PATH)
    set(DOXYGEN_SEARCH_INCLUDES YES)
    set(DOXYGEN_INCLUDE_PATH
        # Most of the source code is included via this path
        "${PROJECT_SOURCE_DIR}"
        # Any generated header files (we may have eliminated these) are here
        "${PROJECT_BINARY_DIR}"
        # Generated headers from proto files by each library will be found here
        "${CMAKE_CURRENT_BINARY_DIR}"
        # Generated headers from common proto files, as well as generated
        # headers from some services that precede the automated scaffold are
        # found here
        "${PROJECT_BINARY_DIR}/external/googleapis"
        # Proto files generated by the examples are found here
        "${PROJECT_BINARY_DIR}/examples"
        # Any additional includes that the library needs
        ${GOOGLE_CLOUD_CPP_DOXYGEN_EXTRA_INCLUDES})
    set(DOXYGEN_GENERATE_LATEX NO)
    set(DOXYGEN_HAVE_DOT NO)
    set(DOXYGEN_GRAPHICAL_HIERARCHY NO)
    set(DOXYGEN_DIRECTORY_GRAPH NO)
    set(DOXYGEN_CLASS_GRAPH NO)
    set(DOXYGEN_COLLABORATION_GRAPH NO)
    set(DOXYGEN_INCLUDE_GRAPH NO)
    set(DOXYGEN_INCLUDED_BY_GRAPH NO)
    set(DOXYGEN_DOT_TRANSPARENT YES)
    set(DOXYGEN_MACRO_EXPANSION YES)
    set(DOXYGEN_EXPAND_ONLY_PREDEF YES)
    # Macros confuse Doxygen. We don't use too many, so we predefine them here
    # to be noops or have simple values.
    set(DOXYGEN_PREDEFINED
        "GOOGLE_CLOUD_CPP_DEPRECATED(x)="
        "GOOGLE_CLOUD_CPP_SPANNER_ADMIN_API_DEPRECATED(x)="
        "GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN="
        "GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END=")
    set(DOXYGEN_HTML_TIMESTAMP YES)
    set(DOXYGEN_STRIP_FROM_INC_PATH "${PROJECT_SOURCE_DIR}")
    set(DOXYGEN_SHOW_USED_FILES NO)
    set(DOXYGEN_REFERENCES_LINK_SOURCE NO)
    set(DOXYGEN_SOURCE_BROWSER YES)
    set(DOXYGEN_DISTRIBUTE_GROUP_DOC YES)
    set(DOXYGEN_GENERATE_TAGFILE "${CMAKE_CURRENT_BINARY_DIR}/${library}.tag")
    set(DOXYGEN_LAYOUT_FILE
        "${PROJECT_SOURCE_DIR}/ci/etc/doxygen/DoxygenLayout.xml")
    google_cloud_cpp_doxygen_deploy_version(VERSION)
    list(
        APPEND
        DOXYGEN_ALIASES
        "googleapis_dev_link{2}=\"https://googleapis.dev/cpp/google-cloud-\\1/${VERSION}/\\2\""
    )
    set(GOOGLE_CLOUD_CPP_DOXYGEN_INPUTS ${_opt_INPUTS})
    if (opt_RECURSIVE)
        set(DOXYGEN_RECURSIVE YES)
    else ()
        set(DOXYGEN_RECURSIVE NO)
    endif ()
    set(DOXYGEN_TAGFILES ${opt_TAGFILES})
    doxygen_add_docs(
        ${library}-docs "${opt_INPUTS}"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Generate ${library} HTML documentation")
    add_dependencies(doxygen-docs ${library}-docs)

    # Extra dependencies needed by this subproject's docs target.
    if (opt_DEPENDS)
        add_dependencies(${library}-docs ${opt_DEPENDS})
    endif ()
endfunction ()

function (google_cloud_cpp_doxygen_targets library)
    google_cloud_cpp_doxygen_deploy_version(VERSION)
    set(GOOGLE_CLOUD_CPP_COMMON_TAG
        "${PROJECT_BINARY_DIR}/google/cloud/cloud.tag")
    cmake_parse_arguments(opt "" "" "INPUTS;TAGFILES;DEPS" ${ARGN})
    google_cloud_cpp_doxygen_targets_impl(
        "${library}"
        RECURSIVE
        INPUTS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        DEPENDS
        "cloud-docs"
        ${GOOGLE_CLOUD_CPP_DOXYGEN_DEPS}
        TAGFILES
        "${GOOGLE_CLOUD_CPP_COMMON_TAG}=https://googleapis.dev/cpp/google-cloud-common/${VERSION}/"
    )
endfunction ()

# TODO(#10519) - have each subproject call this directly.
# ~~~
# Find out the name of the subproject.
# ~~~
get_filename_component(GOOGLE_CLOUD_CPP_SUBPROJECT
                       "${CMAKE_CURRENT_SOURCE_DIR}" NAME)

if ("cloud" STREQUAL "${GOOGLE_CLOUD_CPP_SUBPROJECT}")
    # We cannot recurse from the google/cloud directory, because it will
    # traverse all of the libraries. So we turn off recursion and manually
    # provide the subdirectories to be traversed.
    google_cloud_cpp_doxygen_targets_impl(
        "cloud"
        INPUTS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/mocks"
        "${CMAKE_CURRENT_SOURCE_DIR}/doc"
        DEPENDS
        ${GOOGLE_CLOUD_CPP_DOXYGEN_DEPS})
else ()
    google_cloud_cpp_doxygen_targets("${GOOGLE_CLOUD_CPP_SUBPROJECT}")
endif ()
