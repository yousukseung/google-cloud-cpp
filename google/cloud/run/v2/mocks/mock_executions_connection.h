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
// source: google/cloud/run/v2/execution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_EXECUTIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_EXECUTIONS_CONNECTION_H

#include "google/cloud/run/v2/executions_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace run_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ExecutionsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ExecutionsClient`. To do so,
 * construct an object of type `ExecutionsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockExecutionsConnection : public run_v2::ExecutionsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::run::v2::Execution>, GetExecution,
              (google::cloud::run::v2::GetExecutionRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::run::v2::Execution>), ListExecutions,
              (google::cloud::run::v2::ListExecutionsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>,
              DeleteExecution,
              (google::cloud::run::v2::DeleteExecutionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteExecution,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::run::v2::DeleteExecutionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>,
              DeleteExecution,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>,
              CancelExecution,
              (google::cloud::run::v2::CancelExecutionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CancelExecution,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::run::v2::CancelExecutionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Execution>>,
              CancelExecution,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_EXECUTIONS_CONNECTION_H
