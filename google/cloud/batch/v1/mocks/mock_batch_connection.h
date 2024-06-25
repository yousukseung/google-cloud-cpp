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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_MOCKS_MOCK_BATCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_MOCKS_MOCK_BATCH_CONNECTION_H

#include "google/cloud/batch/v1/batch_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace batch_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BatchServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BatchServiceClient`. To do so,
 * construct an object of type `BatchServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBatchServiceConnection : public batch_v1::BatchServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::batch::v1::Job>, CreateJob,
              (google::cloud::batch::v1::CreateJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::batch::v1::Job>, GetJob,
              (google::cloud::batch::v1::GetJobRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::batch::v1::OperationMetadata>>,
              DeleteJob,
              (google::cloud::batch::v1::DeleteJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteJob,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::batch::v1::DeleteJobRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::batch::v1::OperationMetadata>>,
              DeleteJob,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::batch::v1::Job>), ListJobs,
              (google::cloud::batch::v1::ListJobsRequest request), (override));

  MOCK_METHOD(StatusOr<google::cloud::batch::v1::Task>, GetTask,
              (google::cloud::batch::v1::GetTaskRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::batch::v1::Task>), ListTasks,
              (google::cloud::batch::v1::ListTasksRequest request), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_MOCKS_MOCK_BATCH_CONNECTION_H
