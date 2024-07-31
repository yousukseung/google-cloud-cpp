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
// source: google/cloud/dataproc/v1/node_groups.proto

#include "google/cloud/dataproc/v1/internal/node_group_controller_connection_impl.h"
#include "google/cloud/dataproc/v1/internal/node_group_controller_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dataproc_v1::NodeGroupControllerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dataproc_v1::NodeGroupControllerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dataproc_v1::NodeGroupControllerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<dataproc_v1::NodeGroupControllerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dataproc_v1::NodeGroupControllerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dataproc_v1::NodeGroupControllerPollingPolicyOption>()
      ->clone();
}

}  // namespace

NodeGroupControllerConnectionImpl::NodeGroupControllerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dataproc_v1_internal::NodeGroupControllerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), NodeGroupControllerConnection::options())) {}

future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>
NodeGroupControllerConnectionImpl::CreateNodeGroup(
    google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateNodeGroup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::NodeGroup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
        return stub->AsyncCreateNodeGroup(cq, std::move(context),
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
          google::cloud::dataproc::v1::NodeGroup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
NodeGroupControllerConnectionImpl::CreateNodeGroup(
    NoAwaitTag,
    google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateNodeGroup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataproc::v1::CreateNodeGroupRequest const& request) {
        return stub_->CreateNodeGroup(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>
NodeGroupControllerConnectionImpl::CreateNodeGroup(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dataproc::v1::
                   NodeGroupOperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateNodeGroup",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dataproc::v1::NodeGroup>(
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
          google::cloud::dataproc::v1::NodeGroup>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>
NodeGroupControllerConnectionImpl::ResizeNodeGroup(
    google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ResizeNodeGroup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::NodeGroup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
        return stub->AsyncResizeNodeGroup(cq, std::move(context),
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
          google::cloud::dataproc::v1::NodeGroup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
NodeGroupControllerConnectionImpl::ResizeNodeGroup(
    NoAwaitTag,
    google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResizeNodeGroup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request) {
        return stub_->ResizeNodeGroup(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>
NodeGroupControllerConnectionImpl::ResizeNodeGroup(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dataproc::v1::
                   NodeGroupOperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ResizeNodeGroup",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dataproc::v1::NodeGroup>(
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
          google::cloud::dataproc::v1::NodeGroup>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dataproc::v1::NodeGroup>
NodeGroupControllerConnectionImpl::GetNodeGroup(
    google::cloud::dataproc::v1::GetNodeGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNodeGroup(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dataproc::v1::GetNodeGroupRequest const& request) {
        return stub_->GetNodeGroup(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
