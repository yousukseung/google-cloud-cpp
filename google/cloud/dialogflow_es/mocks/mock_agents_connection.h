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
// source: google/cloud/dialogflow/v2/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_AGENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_AGENTS_CONNECTION_H

#include "google/cloud/dialogflow_es/agents_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AgentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AgentsClient`. To do so,
 * construct an object of type `AgentsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAgentsConnection : public dialogflow_es::AgentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::Agent>, GetAgent,
              (google::cloud::dialogflow::v2::GetAgentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::Agent>, SetAgent,
              (google::cloud::dialogflow::v2::SetAgentRequest const& request),
              (override));

  MOCK_METHOD(
      Status, DeleteAgent,
      (google::cloud::dialogflow::v2::DeleteAgentRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::dialogflow::v2::Agent>), SearchAgents,
              (google::cloud::dialogflow::v2::SearchAgentsRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, TrainAgent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, TrainAgent(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, TrainAgent,
              (google::cloud::dialogflow::v2::TrainAgentRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, TrainAgent,
              (NoAwaitTag,
               google::cloud::dialogflow::v2::TrainAgentRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, TrainAgent,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ExportAgent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ExportAgent(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>,
      ExportAgent,
      (google::cloud::dialogflow::v2::ExportAgentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportAgent,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::ExportAgentRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>,
      ExportAgent, (google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportAgent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ImportAgent(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Struct>>, ImportAgent,
      (google::cloud::dialogflow::v2::ImportAgentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportAgent,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::ImportAgentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, ImportAgent,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RestoreAgent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RestoreAgent(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Struct>>, RestoreAgent,
      (google::cloud::dialogflow::v2::RestoreAgentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RestoreAgent,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::RestoreAgentRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, RestoreAgent,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::ValidationResult>,
              GetValidationResult,
              (google::cloud::dialogflow::v2::GetValidationResultRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_AGENTS_CONNECTION_H
