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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_CONNECTION_IMPL_H

#include "google/cloud/talent/v4/internal/job_retry_traits.h"
#include "google/cloud/talent/v4/internal/job_stub.h"
#include "google/cloud/talent/v4/job_connection.h"
#include "google/cloud/talent/v4/job_connection_idempotency_policy.h"
#include "google/cloud/talent/v4/job_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobServiceConnectionImpl : public talent_v4::JobServiceConnection {
 public:
  ~JobServiceConnectionImpl() override = default;

  JobServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<talent_v4_internal::JobServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      google::cloud::talent::v4::CreateJobRequest const& request) override;

  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(google::cloud::talent::v4::BatchCreateJobsRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> BatchCreateJobs(
      NoAwaitTag,
      google::cloud::talent::v4::BatchCreateJobsRequest const& request)
      override;

  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::talent::v4::Job> GetJob(
      google::cloud::talent::v4::GetJobRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::UpdateJobRequest const& request) override;

  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(google::cloud::talent::v4::BatchUpdateJobsRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> BatchUpdateJobs(
      NoAwaitTag,
      google::cloud::talent::v4::BatchUpdateJobsRequest const& request)
      override;

  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(google::longrunning::Operation const& operation) override;

  Status DeleteJob(
      google::cloud::talent::v4::DeleteJobRequest const& request) override;

  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(google::cloud::talent::v4::BatchDeleteJobsRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> BatchDeleteJobs(
      NoAwaitTag,
      google::cloud::talent::v4::BatchDeleteJobsRequest const& request)
      override;

  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::talent::v4::Job> ListJobs(
      google::cloud::talent::v4::ListJobsRequest request) override;

  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobs(
      google::cloud::talent::v4::SearchJobsRequest const& request) override;

  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobsForAlert(
      google::cloud::talent::v4::SearchJobsRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<talent_v4_internal::JobServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_JOB_CONNECTION_IMPL_H
