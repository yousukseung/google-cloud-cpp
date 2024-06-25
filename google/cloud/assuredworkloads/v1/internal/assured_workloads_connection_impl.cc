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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_connection_impl.h"
#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_option_defaults.h"
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
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<assuredworkloads_v1::AssuredWorkloadsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    assuredworkloads_v1::AssuredWorkloadsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<assuredworkloads_v1::
               AssuredWorkloadsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<assuredworkloads_v1::AssuredWorkloadsServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

AssuredWorkloadsServiceConnectionImpl::AssuredWorkloadsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<assuredworkloads_v1_internal::AssuredWorkloadsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AssuredWorkloadsServiceConnection::options())) {}

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceConnectionImpl::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateWorkload(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::assuredworkloads::v1::Workload>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
              request) {
        return stub->AsyncCreateWorkload(cq, std::move(context),
                                         std::move(options), request);
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::assuredworkloads::v1::Workload>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AssuredWorkloadsServiceConnectionImpl::CreateWorkload(
    ExperimentalTag, NoAwaitTag,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateWorkload(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                 request) {
        return stub_->CreateWorkload(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceConnectionImpl::CreateWorkload(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::assuredworkloads::v1::
                   CreateWorkloadOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::assuredworkloads::v1::Workload>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateWorkload",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::assuredworkloads::v1::Workload>(
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::assuredworkloads::v1::Workload>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateWorkload(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
                 request) {
        return stub_->UpdateWorkload(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceConnectionImpl::RestrictAllowedResources(
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RestrictAllowedResources(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::
                 RestrictAllowedResourcesRequest const& request) {
        return stub_->RestrictAllowedResources(context, options, request);
      },
      *current, request, __func__);
}

Status AssuredWorkloadsServiceConnectionImpl::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteWorkload(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
                 request) {
        return stub_->DeleteWorkload(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetWorkload(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::GetWorkloadRequest const&
                 request) {
        return stub_->GetWorkload(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::ListWorkloads(
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListWorkloads(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Workload>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                    request) {
              return stub->ListWorkloads(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::assuredworkloads::v1::ListWorkloadsResponse r) {
        std::vector<google::cloud::assuredworkloads::v1::Workload> result(
            r.workloads().size());
        auto& messages = *r.mutable_workloads();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnectionImpl::ListViolations(
    google::cloud::assuredworkloads::v1::ListViolationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListViolations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Violation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::assuredworkloads::v1::ListViolationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::assuredworkloads::v1::
                       ListViolationsRequest const& request) {
              return stub->ListViolations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::assuredworkloads::v1::ListViolationsResponse r) {
        std::vector<google::cloud::assuredworkloads::v1::Violation> result(
            r.violations().size());
        auto& messages = *r.mutable_violations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnectionImpl::GetViolation(
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetViolation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::GetViolationRequest const&
                 request) {
        return stub_->GetViolation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceConnectionImpl::AcknowledgeViolation(
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AcknowledgeViolation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::assuredworkloads::v1::
                 AcknowledgeViolationRequest const& request) {
        return stub_->AcknowledgeViolation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
