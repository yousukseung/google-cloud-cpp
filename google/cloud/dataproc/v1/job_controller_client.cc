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
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/v1/job_controller_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobControllerClient::JobControllerClient(
    std::shared_ptr<JobControllerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
JobControllerClient::~JobControllerClient() = default;

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::SubmitJob(
    std::string const& project_id, std::string const& region,
    google::cloud::dataproc::v1::Job const& job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::SubmitJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  *request.mutable_job() = job;
  return connection_->SubmitJob(request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::SubmitJob(
    google::cloud::dataproc::v1::SubmitJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitJob(request);
}

future<StatusOr<google::cloud::dataproc::v1::Job>>
JobControllerClient::SubmitJobAsOperation(
    std::string const& project_id, std::string const& region,
    google::cloud::dataproc::v1::Job const& job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::SubmitJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  *request.mutable_job() = job;
  return connection_->SubmitJobAsOperation(request);
}

StatusOr<google::longrunning::Operation>
JobControllerClient::SubmitJobAsOperation(
    NoAwaitTag, std::string const& project_id, std::string const& region,
    google::cloud::dataproc::v1::Job const& job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::SubmitJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  *request.mutable_job() = job;
  return connection_->SubmitJobAsOperation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataproc::v1::Job>>
JobControllerClient::SubmitJobAsOperation(
    google::cloud::dataproc::v1::SubmitJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitJobAsOperation(request);
}

StatusOr<google::longrunning::Operation>
JobControllerClient::SubmitJobAsOperation(
    NoAwaitTag, google::cloud::dataproc::v1::SubmitJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitJobAsOperation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dataproc::v1::Job>>
JobControllerClient::SubmitJobAsOperation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitJobAsOperation(operation);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::GetJob(
    std::string const& project_id, std::string const& region,
    std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::GetJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_job_id(job_id);
  return connection_->GetJob(request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::GetJob(
    google::cloud::dataproc::v1::GetJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetJob(request);
}

StreamRange<google::cloud::dataproc::v1::Job> JobControllerClient::ListJobs(
    std::string const& project_id, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListJobsRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  return connection_->ListJobs(request);
}

StreamRange<google::cloud::dataproc::v1::Job> JobControllerClient::ListJobs(
    std::string const& project_id, std::string const& region,
    std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListJobsRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_filter(filter);
  return connection_->ListJobs(request);
}

StreamRange<google::cloud::dataproc::v1::Job> JobControllerClient::ListJobs(
    google::cloud::dataproc::v1::ListJobsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListJobs(std::move(request));
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::UpdateJob(
    google::cloud::dataproc::v1::UpdateJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJob(request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::CancelJob(
    std::string const& project_id, std::string const& region,
    std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::CancelJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_job_id(job_id);
  return connection_->CancelJob(request);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerClient::CancelJob(
    google::cloud::dataproc::v1::CancelJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelJob(request);
}

Status JobControllerClient::DeleteJob(std::string const& project_id,
                                      std::string const& region,
                                      std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::DeleteJobRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_job_id(job_id);
  return connection_->DeleteJob(request);
}

Status JobControllerClient::DeleteJob(
    google::cloud::dataproc::v1::DeleteJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJob(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
