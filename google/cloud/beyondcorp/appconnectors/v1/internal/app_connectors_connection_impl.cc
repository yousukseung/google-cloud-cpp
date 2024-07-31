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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_connection_impl.h"
#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_option_defaults.h"
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
namespace beyondcorp_appconnectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<beyondcorp_appconnectors_v1::AppConnectorsServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<beyondcorp_appconnectors_v1::AppConnectorsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<beyondcorp_appconnectors_v1::
               AppConnectorsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<beyondcorp_appconnectors_v1::
                    AppConnectorsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<beyondcorp_appconnectors_v1::
               AppConnectorsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<beyondcorp_appconnectors_v1::
               AppConnectorsServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

AppConnectorsServiceConnectionImpl::AppConnectorsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        beyondcorp_appconnectors_v1_internal::AppConnectorsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AppConnectorsServiceConnection::options())) {}

StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnectionImpl::ListAppConnectors(
    google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAppConnectors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           beyondcorp_appconnectors_v1::AppConnectorsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::beyondcorp::appconnectors::v1::
                                      ListAppConnectorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::beyondcorp::appconnectors::v1::
                       ListAppConnectorsRequest const& request) {
              return stub->ListAppConnectors(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse
             r) {
        std::vector<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
            result(r.app_connectors().size());
        auto& messages = *r.mutable_app_connectors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnectionImpl::GetAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::GetAppConnectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAppConnector(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appconnectors::v1::
                 GetAppConnectorRequest const& request) {
        return stub_->GetAppConnector(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::CreateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateAppConnector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::beyondcorp::appconnectors::v1::
                         CreateAppConnectorRequest const& request) {
        return stub->AsyncCreateAppConnector(cq, std::move(context),
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AppConnectorsServiceConnectionImpl::CreateAppConnector(
    NoAwaitTag, google::cloud::beyondcorp::appconnectors::v1::
                    CreateAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAppConnector(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appconnectors::v1::
                 CreateAppConnectorRequest const& request) {
        return stub_->CreateAppConnector(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::CreateAppConnector(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::beyondcorp::appconnectors::v1::
                   AppConnectorOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateAppConnector",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::UpdateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateAppConnector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::beyondcorp::appconnectors::v1::
                         UpdateAppConnectorRequest const& request) {
        return stub->AsyncUpdateAppConnector(cq, std::move(context),
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AppConnectorsServiceConnectionImpl::UpdateAppConnector(
    NoAwaitTag, google::cloud::beyondcorp::appconnectors::v1::
                    UpdateAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAppConnector(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appconnectors::v1::
                 UpdateAppConnectorRequest const& request) {
        return stub_->UpdateAppConnector(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::UpdateAppConnector(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::beyondcorp::appconnectors::v1::
                   AppConnectorOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateAppConnector",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                    AppConnectorOperationMetadata>>
AppConnectorsServiceConnectionImpl::DeleteAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteAppConnector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::
          AppConnectorOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::beyondcorp::appconnectors::v1::
                         DeleteAppConnectorRequest const& request) {
        return stub->AsyncDeleteAppConnector(cq, std::move(context),
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
          google::cloud::beyondcorp::appconnectors::v1::
              AppConnectorOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AppConnectorsServiceConnectionImpl::DeleteAppConnector(
    NoAwaitTag, google::cloud::beyondcorp::appconnectors::v1::
                    DeleteAppConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAppConnector(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appconnectors::v1::
                 DeleteAppConnectorRequest const& request) {
        return stub_->DeleteAppConnector(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                    AppConnectorOperationMetadata>>
AppConnectorsServiceConnectionImpl::DeleteAppConnector(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::beyondcorp::appconnectors::v1::
                   AppConnectorOperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::beyondcorp::appconnectors::
                                          v1::AppConnectorOperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteAppConnector",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::
          AppConnectorOperationMetadata>(
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
          google::cloud::beyondcorp::appconnectors::v1::
              AppConnectorOperationMetadata>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::ReportStatus(
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ReportStatus(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::beyondcorp::appconnectors::v1::
                         ReportStatusRequest const& request) {
        return stub->AsyncReportStatus(cq, std::move(context),
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
AppConnectorsServiceConnectionImpl::ReportStatus(
    NoAwaitTag,
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReportStatus(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appconnectors::v1::
                 ReportStatusRequest const& request) {
        return stub_->ReportStatus(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::ReportStatus(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::beyondcorp::appconnectors::v1::
                   AppConnectorOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ReportStatus",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1_internal
}  // namespace cloud
}  // namespace google
