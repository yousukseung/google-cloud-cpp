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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_CONNECTION_IMPL_H

#include "google/cloud/run/v2/executions_connection.h"
#include "google/cloud/run/v2/executions_connection_idempotency_policy.h"
#include "google/cloud/run/v2/executions_options.h"
#include "google/cloud/run/v2/internal/executions_retry_traits.h"
#include "google/cloud/run/v2/internal/executions_stub.h"
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
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ExecutionsConnectionImpl : public run_v2::ExecutionsConnection {
 public:
  ~ExecutionsConnectionImpl() override = default;

  ExecutionsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<run_v2_internal::ExecutionsStub> stub, Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::run::v2::Execution> GetExecution(
      google::cloud::run::v2::GetExecutionRequest const& request) override;

  StreamRange<google::cloud::run::v2::Execution> ListExecutions(
      google::cloud::run::v2::ListExecutionsRequest request) override;

  future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      google::cloud::run::v2::DeleteExecutionRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteExecution(
      NoAwaitTag,
      google::cloud::run::v2::DeleteExecutionRequest const& request) override;

  future<StatusOr<google::cloud::run::v2::Execution>> DeleteExecution(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      google::cloud::run::v2::CancelExecutionRequest const& request) override;

  StatusOr<google::longrunning::Operation> CancelExecution(
      NoAwaitTag,
      google::cloud::run::v2::CancelExecutionRequest const& request) override;

  future<StatusOr<google::cloud::run::v2::Execution>> CancelExecution(
      google::longrunning::Operation const& operation) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<run_v2_internal::ExecutionsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_CONNECTION_IMPL_H
