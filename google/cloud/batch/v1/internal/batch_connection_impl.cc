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

#include "google/cloud/batch/v1/internal/batch_connection_impl.h"
#include "google/cloud/batch/v1/internal/batch_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<batch_v1::BatchServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<batch_v1::BatchServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<batch_v1::BatchServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<batch_v1::BatchServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<batch_v1::BatchServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<batch_v1::BatchServicePollingPolicyOption>()->clone();
}

}  // namespace

BatchServiceConnectionImpl::BatchServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<batch_v1_internal::BatchServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      BatchServiceConnection::options())) {}

StatusOr<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::CreateJob(
    google::cloud::batch::v1::CreateJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::batch::v1::CreateJobRequest const& request) {
        return stub_->CreateJob(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::GetJob(
    google::cloud::batch::v1::GetJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::batch::v1::GetJobRequest const& request) {
        return stub_->GetJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
BatchServiceConnectionImpl::DeleteJob(
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent = idempotency_policy(*current)->DeleteJob(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::batch::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::batch::v1::DeleteJobRequest const& request) {
        return stub->AsyncDeleteJob(cq, std::move(context), std::move(options),
                                    request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::batch::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> BatchServiceConnectionImpl::DeleteJob(
    ExperimentalTag, NoAwaitTag,
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::batch::v1::DeleteJobRequest const& request) {
        return stub_->DeleteJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
BatchServiceConnectionImpl::DeleteJob(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::batch::v1::OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::batch::v1::OperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteJob",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::batch::v1::OperationMetadata>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::batch::v1::OperationMetadata>,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::batch::v1::Job> BatchServiceConnectionImpl::ListJobs(
    google::cloud::batch::v1::ListJobsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::batch::v1::Job>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<batch_v1::BatchServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::batch::v1::ListJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::batch::v1::ListJobsRequest const& request) {
              return stub->ListJobs(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::batch::v1::ListJobsResponse r) {
        std::vector<google::cloud::batch::v1::Job> result(r.jobs().size());
        auto& messages = *r.mutable_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::batch::v1::Task> BatchServiceConnectionImpl::GetTask(
    google::cloud::batch::v1::GetTaskRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTask(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::batch::v1::GetTaskRequest const& request) {
        return stub_->GetTask(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::batch::v1::Task>
BatchServiceConnectionImpl::ListTasks(
    google::cloud::batch::v1::ListTasksRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTasks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::batch::v1::Task>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<batch_v1::BatchServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::batch::v1::ListTasksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::batch::v1::ListTasksRequest const& request) {
              return stub->ListTasks(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::batch::v1::ListTasksResponse r) {
        std::vector<google::cloud::batch::v1::Task> result(r.tasks().size());
        auto& messages = *r.mutable_tasks();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google
