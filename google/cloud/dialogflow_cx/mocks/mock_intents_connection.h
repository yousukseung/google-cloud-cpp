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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_INTENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_INTENTS_CONNECTION_H

#include "google/cloud/dialogflow_cx/intents_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_cx_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `IntentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `IntentsClient`. To do so,
 * construct an object of type `IntentsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockIntentsConnection : public dialogflow_cx::IntentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::dialogflow::cx::v3::Intent>),
              ListIntents,
              (google::cloud::dialogflow::cx::v3::ListIntentsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Intent>, GetIntent,
      (google::cloud::dialogflow::cx::v3::GetIntentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Intent>, CreateIntent,
      (google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Intent>, UpdateIntent,
      (google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteIntent,
      (google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportIntents)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ImportIntents(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>,
      ImportIntents,
      (google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportIntents,
      (NoAwaitTag,
       google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>,
      ImportIntents, (google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportIntents)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportIntents(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>,
      ExportIntents,
      (google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportIntents,
      (NoAwaitTag,
       google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>,
      ExportIntents, (google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_INTENTS_CONNECTION_H
