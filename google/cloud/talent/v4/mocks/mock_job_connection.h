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
// source: google/cloud/talent/v4/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_JOB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_JOB_CONNECTION_H

#include "google/cloud/talent/v4/job_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace talent_v4_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `JobServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `JobServiceClient`. To do so,
 * construct an object of type `JobServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockJobServiceConnection : public talent_v4::JobServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Job>, CreateJob,
              (google::cloud::talent::v4::CreateJobRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchCreateJobs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchCreateJobs(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>,
      BatchCreateJobs,
      (google::cloud::talent::v4::BatchCreateJobsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchCreateJobs,
      (NoAwaitTag,
       google::cloud::talent::v4::BatchCreateJobsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>,
      BatchCreateJobs, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Job>, GetJob,
              (google::cloud::talent::v4::GetJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Job>, UpdateJob,
              (google::cloud::talent::v4::UpdateJobRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchUpdateJobs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchUpdateJobs(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>,
      BatchUpdateJobs,
      (google::cloud::talent::v4::BatchUpdateJobsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchUpdateJobs,
      (NoAwaitTag,
       google::cloud::talent::v4::BatchUpdateJobsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>,
      BatchUpdateJobs, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(Status, DeleteJob,
              (google::cloud::talent::v4::DeleteJobRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchDeleteJobs)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchDeleteJobs(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>,
      BatchDeleteJobs,
      (google::cloud::talent::v4::BatchDeleteJobsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchDeleteJobs,
      (NoAwaitTag,
       google::cloud::talent::v4::BatchDeleteJobsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>,
      BatchDeleteJobs, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::talent::v4::Job>), ListJobs,
              (google::cloud::talent::v4::ListJobsRequest request), (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::SearchJobsResponse>,
              SearchJobs,
              (google::cloud::talent::v4::SearchJobsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::SearchJobsResponse>,
              SearchJobsForAlert,
              (google::cloud::talent::v4::SearchJobsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_JOB_CONNECTION_H
