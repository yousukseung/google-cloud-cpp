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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_connection_impl.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_option_defaults.h"
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
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<redis_cluster_v1::CloudRedisClusterRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<redis_cluster_v1::CloudRedisClusterRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<redis_cluster_v1::CloudRedisClusterBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<redis_cluster_v1::CloudRedisClusterConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<redis_cluster_v1::
               CloudRedisClusterConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<redis_cluster_v1::CloudRedisClusterPollingPolicyOption>()
      ->clone();
}

}  // namespace

CloudRedisClusterConnectionImpl::CloudRedisClusterConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<redis_cluster_v1_internal::CloudRedisClusterStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), CloudRedisClusterConnection::options())) {}

StreamRange<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterConnectionImpl::ListClusters(
    google::cloud::redis::cluster::v1::ListClustersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListClusters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::redis::cluster::v1::Cluster>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<redis_cluster_v1::CloudRedisClusterRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::redis::cluster::v1::ListClustersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::redis::cluster::v1::ListClustersRequest const&
                       request) {
              return stub->ListClusters(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::redis::cluster::v1::ListClustersResponse r) {
        std::vector<google::cloud::redis::cluster::v1::Cluster> result(
            r.clusters().size());
        auto& messages = *r.mutable_clusters();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterConnectionImpl::GetCluster(
    google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCluster(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
        return stub_->GetCluster(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnectionImpl::UpdateCluster(
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::redis::cluster::v1::Cluster>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::redis::cluster::v1::UpdateClusterRequest const&
              request) {
        return stub->AsyncUpdateCluster(cq, std::move(context),
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
          google::cloud::redis::cluster::v1::Cluster>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnectionImpl::UpdateCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateCluster(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::redis::cluster::v1::UpdateClusterRequest const&
                 request) {
        return stub_->UpdateCluster(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnectionImpl::UpdateCluster(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata().Is<typename google::protobuf::Any>()) {
    return make_ready_future<
        StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateCluster",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::redis::cluster::v1::Cluster>(
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
          google::cloud::redis::cluster::v1::Cluster>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Any>>
CloudRedisClusterConnectionImpl::DeleteCluster(
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Any>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::redis::cluster::v1::DeleteClusterRequest const&
              request) {
        return stub->AsyncDeleteCluster(cq, std::move(context),
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
          google::protobuf::Any>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnectionImpl::DeleteCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteCluster(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::redis::cluster::v1::DeleteClusterRequest const&
                 request) {
        return stub_->DeleteCluster(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::protobuf::Any>>
CloudRedisClusterConnectionImpl::DeleteCluster(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata().Is<typename google::protobuf::Any>()) {
    return make_ready_future<StatusOr<google::protobuf::Any>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteCluster",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::protobuf::Any>(
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
          google::protobuf::Any>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnectionImpl::CreateCluster(
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::redis::cluster::v1::Cluster>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::redis::cluster::v1::CreateClusterRequest const&
              request) {
        return stub->AsyncCreateCluster(cq, std::move(context),
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
          google::cloud::redis::cluster::v1::Cluster>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnectionImpl::CreateCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateCluster(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::redis::cluster::v1::CreateClusterRequest const&
                 request) {
        return stub_->CreateCluster(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnectionImpl::CreateCluster(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata().Is<typename google::protobuf::Any>()) {
    return make_ready_future<
        StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateCluster",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::redis::cluster::v1::Cluster>(
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
          google::cloud::redis::cluster::v1::Cluster>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>
CloudRedisClusterConnectionImpl::GetClusterCertificateAuthority(
    google::cloud::redis::cluster::v1::
        GetClusterCertificateAuthorityRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetClusterCertificateAuthority(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::redis::cluster::v1::
                 GetClusterCertificateAuthorityRequest const& request) {
        return stub_->GetClusterCertificateAuthority(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google
