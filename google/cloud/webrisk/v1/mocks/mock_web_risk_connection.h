// Copyright 2022 Google LLC
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
// source: google/cloud/webrisk/v1/webrisk.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_MOCKS_MOCK_WEB_RISK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_MOCKS_MOCK_WEB_RISK_CONNECTION_H

#include "google/cloud/webrisk/v1/web_risk_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace webrisk_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `WebRiskServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `WebRiskServiceClient`. To do so,
 * construct an object of type `WebRiskServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockWebRiskServiceConnection
    : public webrisk_v1::WebRiskServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>,
      ComputeThreatListDiff,
      (google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::webrisk::v1::SearchUrisResponse>,
              SearchUris,
              (google::cloud::webrisk::v1::SearchUrisRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>,
              SearchHashes,
              (google::cloud::webrisk::v1::SearchHashesRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::webrisk::v1::Submission>, CreateSubmission,
      (google::cloud::webrisk::v1::CreateSubmissionRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SubmitUri)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SubmitUri(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::webrisk::v1::Submission>>,
              SubmitUri,
              (google::cloud::webrisk::v1::SubmitUriRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, SubmitUri,
              (NoAwaitTag,
               google::cloud::webrisk::v1::SubmitUriRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::webrisk::v1::Submission>>,
              SubmitUri, (google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_MOCKS_MOCK_WEB_RISK_CONNECTION_H
