// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source:
// google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_MOCKS_MOCK_REGION_INSTANCE_TEMPLATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_MOCKS_MOCK_REGION_INSTANCE_TEMPLATES_CONNECTION_H

#include "google/cloud/compute/region_instance_templates/v1/region_instance_templates_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_instance_templates_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionInstanceTemplatesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionInstanceTemplatesClient`. To
 * do so, construct an object of type `RegionInstanceTemplatesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionInstanceTemplatesConnection
    : public compute_region_instance_templates_v1::
          RegionInstanceTemplatesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstanceTemplate)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstanceTemplate(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceTemplate,
              (google::cloud::cpp::compute::region_instance_templates::v1::
                   DeleteInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInstanceTemplate,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_instance_templates::v1::
                   DeleteInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceTemplate,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>,
              GetInstanceTemplate,
              (google::cloud::cpp::compute::region_instance_templates::v1::
                   GetInstanceTemplateRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertInstanceTemplate)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertInstanceTemplate(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceTemplate,
              (google::cloud::cpp::compute::region_instance_templates::v1::
                   InsertInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertInstanceTemplate,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_instance_templates::v1::
                   InsertInstanceTemplateRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceTemplate,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>),
              ListRegionInstanceTemplates,
              (google::cloud::cpp::compute::region_instance_templates::v1::
                   ListRegionInstanceTemplatesRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_templates_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_MOCKS_MOCK_REGION_INSTANCE_TEMPLATES_CONNECTION_H
