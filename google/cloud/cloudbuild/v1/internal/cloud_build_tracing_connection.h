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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_TRACING_CONNECTION_H

#include "google/cloud/cloudbuild/v1/cloud_build_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudBuildTracingConnection : public cloudbuild_v1::CloudBuildConnection {
 public:
  ~CloudBuildTracingConnection() override = default;

  explicit CloudBuildTracingConnection(
      std::shared_ptr<cloudbuild_v1::CloudBuildConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBuild(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      google::devtools::cloudbuild::v1::GetBuildRequest const& request)
      override;

  StreamRange<google::devtools::cloudbuild::v1::Build> ListBuilds(
      google::devtools::cloudbuild::v1::ListBuildsRequest request) override;

  StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RetryBuild(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> ApproveBuild(
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ApproveBuild(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> ApproveBuild(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> CreateBuildTrigger(
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> GetBuildTrigger(
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request)
      override;

  StreamRange<google::devtools::cloudbuild::v1::BuildTrigger> ListBuildTriggers(
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest request)
      override;

  Status DeleteBuildTrigger(
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> UpdateBuildTrigger(
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RunBuildTrigger(
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RunBuildTrigger(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RunBuildTrigger(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateWorkerPool(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request)
      override;

  future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteWorkerPool(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateWorkerPool(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  StreamRange<google::devtools::cloudbuild::v1::WorkerPool> ListWorkerPools(
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request)
      override;

 private:
  std::shared_ptr<cloudbuild_v1::CloudBuildConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<cloudbuild_v1::CloudBuildConnection>
MakeCloudBuildTracingConnection(
    std::shared_ptr<cloudbuild_v1::CloudBuildConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_TRACING_CONNECTION_H
