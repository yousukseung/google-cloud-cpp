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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_MOCKS_MOCK_INTERCONNECT_ATTACHMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_MOCKS_MOCK_INTERCONNECT_ATTACHMENTS_CONNECTION_H

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InterconnectAttachmentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InterconnectAttachmentsClient`. To
 * do so, construct an object of type `InterconnectAttachmentsClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInterconnectAttachmentsConnection
    : public compute_interconnect_attachments_v1::
          InterconnectAttachmentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<std::pair<std::string,
                                     google::cloud::cpp::compute::v1::
                                         InterconnectAttachmentsScopedList>>),
              AggregatedListInterconnectAttachments,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   AggregatedListInterconnectAttachmentsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInterconnectAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInterconnectAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInterconnectAttachment,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   DeleteInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInterconnectAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::interconnect_attachments::v1::
                   DeleteInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInterconnectAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>,
              GetInterconnectAttachment,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   GetInterconnectAttachmentRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertInterconnectAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertInterconnectAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInterconnectAttachment,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   InsertInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertInterconnectAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::interconnect_attachments::v1::
                   InsertInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInterconnectAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>),
      ListInterconnectAttachments,
      (google::cloud::cpp::compute::interconnect_attachments::v1::
           ListInterconnectAttachmentsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchInterconnectAttachment)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchInterconnectAttachment(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInterconnectAttachment,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   PatchInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchInterconnectAttachment,
              (NoAwaitTag,
               google::cloud::cpp::compute::interconnect_attachments::v1::
                   PatchInterconnectAttachmentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInterconnectAttachment,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetLabels)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetLabels(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::interconnect_attachments::v1::
                   SetLabelsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
              (NoAwaitTag,
               google::cloud::cpp::compute::interconnect_attachments::v1::
                   SetLabelsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_MOCKS_MOCK_INTERCONNECT_ATTACHMENTS_CONNECTION_H
