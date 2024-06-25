// Copyright 2024 Google LLC
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
// source: google/cloud/retail/v2/analytics_service.proto

#include "google/cloud/retail/v2/internal/analytics_connection_impl.h"
#include "google/cloud/retail/v2/internal/analytics_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<retail_v2::AnalyticsServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<retail_v2::AnalyticsServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<retail_v2::AnalyticsServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<retail_v2::AnalyticsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<retail_v2::AnalyticsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<retail_v2::AnalyticsServicePollingPolicyOption>()->clone();
}

}  // namespace

AnalyticsServiceConnectionImpl::AnalyticsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<retail_v2_internal::AnalyticsServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AnalyticsServiceConnection::options())) {}

future<StatusOr<google::cloud::retail::v2::ExportAnalyticsMetricsResponse>>
AnalyticsServiceConnectionImpl::ExportAnalyticsMetrics(
    google::cloud::retail::v2::ExportAnalyticsMetricsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ExportAnalyticsMetrics(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::ExportAnalyticsMetricsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::ExportAnalyticsMetricsRequest const&
              request) {
        return stub->AsyncExportAnalyticsMetrics(cq, std::move(context),
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
          google::cloud::retail::v2::ExportAnalyticsMetricsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AnalyticsServiceConnectionImpl::ExportAnalyticsMetrics(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::ExportAnalyticsMetricsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportAnalyticsMetrics(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::ExportAnalyticsMetricsRequest const&
                 request) {
        return stub_->ExportAnalyticsMetrics(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::retail::v2::ExportAnalyticsMetricsResponse>>
AnalyticsServiceConnectionImpl::ExportAnalyticsMetrics(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::retail::v2::ExportMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::retail::v2::ExportAnalyticsMetricsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ExportAnalyticsMetrics",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::retail::v2::ExportAnalyticsMetricsResponse>(
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
          google::cloud::retail::v2::ExportAnalyticsMetricsResponse>,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
