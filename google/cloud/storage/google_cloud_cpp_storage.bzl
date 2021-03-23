# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_storage - DO NOT EDIT."""

google_cloud_cpp_storage_hdrs = [
    "bucket_access_control.h",
    "bucket_metadata.h",
    "client.h",
    "client_options.h",
    "download_options.h",
    "hashing_options.h",
    "hmac_key_metadata.h",
    "iam_policy.h",
    "idempotency_policy.h",
    "internal/access_control_common.h",
    "internal/access_control_common_parser.h",
    "internal/binary_data_as_debug_string.h",
    "internal/bucket_access_control_parser.h",
    "internal/bucket_acl_requests.h",
    "internal/bucket_metadata_parser.h",
    "internal/bucket_requests.h",
    "internal/common_metadata.h",
    "internal/common_metadata_parser.h",
    "internal/complex_option.h",
    "internal/compute_engine_util.h",
    "internal/const_buffer.h",
    "internal/curl_client.h",
    "internal/curl_download_request.h",
    "internal/curl_handle.h",
    "internal/curl_handle_factory.h",
    "internal/curl_request.h",
    "internal/curl_request_builder.h",
    "internal/curl_resumable_upload_session.h",
    "internal/curl_wrappers.h",
    "internal/default_object_acl_requests.h",
    "internal/empty_response.h",
    "internal/generate_message_boundary.h",
    "internal/generic_object_request.h",
    "internal/generic_request.h",
    "internal/hash_validator.h",
    "internal/hash_validator_impl.h",
    "internal/hmac_key_metadata_parser.h",
    "internal/hmac_key_requests.h",
    "internal/http_response.h",
    "internal/lifecycle_rule_parser.h",
    "internal/logging_client.h",
    "internal/logging_resumable_upload_session.h",
    "internal/make_jwt_assertion.h",
    "internal/metadata_parser.h",
    "internal/notification_metadata_parser.h",
    "internal/notification_requests.h",
    "internal/object_access_control_parser.h",
    "internal/object_acl_requests.h",
    "internal/object_metadata_parser.h",
    "internal/object_read_source.h",
    "internal/object_requests.h",
    "internal/object_streambuf.h",
    "internal/openssl_util.h",
    "internal/parameter_pack_validation.h",
    "internal/patch_builder.h",
    "internal/policy_document_request.h",
    "internal/raw_client.h",
    "internal/raw_client_wrapper_utils.h",
    "internal/resumable_upload_session.h",
    "internal/retry_client.h",
    "internal/retry_object_read_source.h",
    "internal/retry_resumable_upload_session.h",
    "internal/self_signing_service_account_credentials.h",
    "internal/service_account_parser.h",
    "internal/service_account_requests.h",
    "internal/sha256_hash.h",
    "internal/sign_blob_requests.h",
    "internal/signed_url_requests.h",
    "internal/tuple_filter.h",
    "lifecycle_rule.h",
    "list_buckets_reader.h",
    "list_hmac_keys_reader.h",
    "list_objects_and_prefixes_reader.h",
    "list_objects_reader.h",
    "notification_event_type.h",
    "notification_metadata.h",
    "notification_payload_format.h",
    "oauth2/anonymous_credentials.h",
    "oauth2/authorized_user_credentials.h",
    "oauth2/compute_engine_credentials.h",
    "oauth2/credential_constants.h",
    "oauth2/credentials.h",
    "oauth2/google_application_default_credentials_file.h",
    "oauth2/google_credentials.h",
    "oauth2/refreshing_credentials_wrapper.h",
    "oauth2/service_account_credentials.h",
    "object_access_control.h",
    "object_metadata.h",
    "object_rewriter.h",
    "object_stream.h",
    "override_default_project.h",
    "parallel_upload.h",
    "policy_document.h",
    "retry_policy.h",
    "service_account.h",
    "signed_url_options.h",
    "storage_class.h",
    "upload_options.h",
    "version.h",
    "version_info.h",
    "well_known_headers.h",
    "well_known_parameters.h",
]

google_cloud_cpp_storage_srcs = [
    "bucket_access_control.cc",
    "bucket_metadata.cc",
    "client.cc",
    "client_options.cc",
    "hashing_options.cc",
    "hmac_key_metadata.cc",
    "iam_policy.cc",
    "idempotency_policy.cc",
    "internal/access_control_common_parser.cc",
    "internal/binary_data_as_debug_string.cc",
    "internal/bucket_access_control_parser.cc",
    "internal/bucket_acl_requests.cc",
    "internal/bucket_metadata_parser.cc",
    "internal/bucket_requests.cc",
    "internal/compute_engine_util.cc",
    "internal/const_buffer.cc",
    "internal/curl_client.cc",
    "internal/curl_download_request.cc",
    "internal/curl_handle.cc",
    "internal/curl_handle_factory.cc",
    "internal/curl_request.cc",
    "internal/curl_request_builder.cc",
    "internal/curl_resumable_upload_session.cc",
    "internal/curl_wrappers.cc",
    "internal/default_object_acl_requests.cc",
    "internal/empty_response.cc",
    "internal/hash_validator.cc",
    "internal/hash_validator_impl.cc",
    "internal/hmac_key_metadata_parser.cc",
    "internal/hmac_key_requests.cc",
    "internal/http_response.cc",
    "internal/lifecycle_rule_parser.cc",
    "internal/logging_client.cc",
    "internal/logging_resumable_upload_session.cc",
    "internal/make_jwt_assertion.cc",
    "internal/metadata_parser.cc",
    "internal/notification_metadata_parser.cc",
    "internal/notification_requests.cc",
    "internal/object_access_control_parser.cc",
    "internal/object_acl_requests.cc",
    "internal/object_metadata_parser.cc",
    "internal/object_requests.cc",
    "internal/object_streambuf.cc",
    "internal/openssl_util.cc",
    "internal/patch_builder.cc",
    "internal/policy_document_request.cc",
    "internal/resumable_upload_session.cc",
    "internal/retry_client.cc",
    "internal/retry_object_read_source.cc",
    "internal/retry_resumable_upload_session.cc",
    "internal/self_signing_service_account_credentials.cc",
    "internal/service_account_parser.cc",
    "internal/service_account_requests.cc",
    "internal/sha256_hash.cc",
    "internal/sign_blob_requests.cc",
    "internal/signed_url_requests.cc",
    "lifecycle_rule.cc",
    "list_buckets_reader.cc",
    "list_hmac_keys_reader.cc",
    "list_objects_reader.cc",
    "notification_metadata.cc",
    "oauth2/anonymous_credentials.cc",
    "oauth2/authorized_user_credentials.cc",
    "oauth2/compute_engine_credentials.cc",
    "oauth2/credentials.cc",
    "oauth2/google_application_default_credentials_file.cc",
    "oauth2/google_credentials.cc",
    "oauth2/refreshing_credentials_wrapper.cc",
    "oauth2/service_account_credentials.cc",
    "object_access_control.cc",
    "object_metadata.cc",
    "object_rewriter.cc",
    "object_stream.cc",
    "parallel_upload.cc",
    "policy_document.cc",
    "service_account.cc",
    "version.cc",
    "well_known_headers.cc",
    "well_known_parameters.cc",
]
