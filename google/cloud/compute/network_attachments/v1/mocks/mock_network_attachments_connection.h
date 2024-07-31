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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_MOCKS_MOCK_NETWORK_ATTACHMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_MOCKS_MOCK_NETWORK_ATTACHMENTS_CONNECTION_H

#include "google/cloud/compute/network_attachments/v1/network_attachments_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_network_attachments_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworkAttachmentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworkAttachmentsClient`. To do
 * so, construct an object of type `NetworkAttachmentsClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworkAttachmentsConnection
    : public compute_network_attachments_v1::NetworkAttachmentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                              NetworkAttachmentsScopedList>>),
      AggregatedListNetworkAttachments,
      (google::cloud::cpp::compute::network_attachments::v1::
           AggregatedListNetworkAttachmentsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteNetworkAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteNetworkAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNetworkAttachment,
              (google::cloud::cpp::compute::network_attachments::v1::
                   DeleteNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteNetworkAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_attachments::v1::
                   DeleteNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNetworkAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>,
              GetNetworkAttachment,
              (google::cloud::cpp::compute::network_attachments::v1::
                   GetNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
              (google::cloud::cpp::compute::network_attachments::v1::
                   GetIamPolicyRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertNetworkAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertNetworkAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertNetworkAttachment,
              (google::cloud::cpp::compute::network_attachments::v1::
                   InsertNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertNetworkAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_attachments::v1::
                   InsertNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertNetworkAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>),
              ListNetworkAttachments,
              (google::cloud::cpp::compute::network_attachments::v1::
                   ListNetworkAttachmentsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchNetworkAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchNetworkAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchNetworkAttachment,
              (google::cloud::cpp::compute::network_attachments::v1::
                   PatchNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchNetworkAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_attachments::v1::
                   PatchNetworkAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchNetworkAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
              (google::cloud::cpp::compute::network_attachments::v1::
                   SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::network_attachments::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_MOCKS_MOCK_NETWORK_ATTACHMENTS_CONNECTION_H
