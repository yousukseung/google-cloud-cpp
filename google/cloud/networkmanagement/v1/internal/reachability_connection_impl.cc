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
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/v1/internal/reachability_connection_impl.h"
#include "google/cloud/networkmanagement/v1/internal/reachability_option_defaults.h"
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
namespace networkmanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<networkmanagement_v1::ReachabilityServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<networkmanagement_v1::ReachabilityServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<networkmanagement_v1::ReachabilityServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    networkmanagement_v1::ReachabilityServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<networkmanagement_v1::
               ReachabilityServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<networkmanagement_v1::ReachabilityServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ReachabilityServiceConnectionImpl::ReachabilityServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<networkmanagement_v1_internal::ReachabilityServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ReachabilityServiceConnection::options())) {}

StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceConnectionImpl::ListConnectivityTests(
    google::cloud::networkmanagement::v1::ListConnectivityTestsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListConnectivityTests(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           networkmanagement_v1::ReachabilityServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::networkmanagement::v1::
                                      ListConnectivityTestsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::networkmanagement::v1::
                       ListConnectivityTestsRequest const& request) {
              return stub->ListConnectivityTests(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::networkmanagement::v1::ListConnectivityTestsResponse
             r) {
        std::vector<google::cloud::networkmanagement::v1::ConnectivityTest>
            result(r.resources().size());
        auto& messages = *r.mutable_resources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceConnectionImpl::GetConnectivityTest(
    google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnectivityTest(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkmanagement::v1::
                 GetConnectivityTestRequest const& request) {
        return stub_->GetConnectivityTest(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::CreateConnectivityTest(
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateConnectivityTest(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkmanagement::v1::
                         CreateConnectivityTestRequest const& request) {
        return stub->AsyncCreateConnectivityTest(cq, std::move(context),
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceConnectionImpl::CreateConnectivityTest(
    NoAwaitTag,
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateConnectivityTest(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkmanagement::v1::
                 CreateConnectivityTestRequest const& request) {
        return stub_->CreateConnectivityTest(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::CreateConnectivityTest(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::networkmanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateConnectivityTest",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::UpdateConnectivityTest(
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateConnectivityTest(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkmanagement::v1::
                         UpdateConnectivityTestRequest const& request) {
        return stub->AsyncUpdateConnectivityTest(cq, std::move(context),
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceConnectionImpl::UpdateConnectivityTest(
    NoAwaitTag,
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateConnectivityTest(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkmanagement::v1::
                 UpdateConnectivityTestRequest const& request) {
        return stub_->UpdateConnectivityTest(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::UpdateConnectivityTest(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::networkmanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateConnectivityTest",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::RerunConnectivityTest(
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RerunConnectivityTest(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkmanagement::v1::
                         RerunConnectivityTestRequest const& request) {
        return stub->AsyncRerunConnectivityTest(cq, std::move(context),
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceConnectionImpl::RerunConnectivityTest(
    NoAwaitTag,
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RerunConnectivityTest(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkmanagement::v1::
                 RerunConnectivityTestRequest const& request) {
        return stub_->RerunConnectivityTest(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceConnectionImpl::RerunConnectivityTest(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::networkmanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>(
        internal::InvalidArgumentError(
            "operation does not correspond to RerunConnectivityTest",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::networkmanagement::v1::ConnectivityTest>(
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
          google::cloud::networkmanagement::v1::ConnectivityTest>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
ReachabilityServiceConnectionImpl::DeleteConnectivityTest(
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteConnectivityTest(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkmanagement::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkmanagement::v1::
                         DeleteConnectivityTestRequest const& request) {
        return stub->AsyncDeleteConnectivityTest(cq, std::move(context),
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networkmanagement::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ReachabilityServiceConnectionImpl::DeleteConnectivityTest(
    NoAwaitTag,
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteConnectivityTest(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkmanagement::v1::
                 DeleteConnectivityTestRequest const& request) {
        return stub_->DeleteConnectivityTest(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
ReachabilityServiceConnectionImpl::DeleteConnectivityTest(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::networkmanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteConnectivityTest",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::networkmanagement::v1::OperationMetadata>(
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
          google::cloud::networkmanagement::v1::OperationMetadata>,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_v1_internal
}  // namespace cloud
}  // namespace google
