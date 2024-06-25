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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#include "google/cloud/gkemulticloud/v1/aws_clusters_connection.h"
#include "google/cloud/gkemulticloud/v1/aws_clusters_options.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_connection_impl.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_option_defaults.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_stub_factory.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AwsClustersConnection::~AwsClustersConnection() = default;

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnection::CreateAwsCluster(
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::CreateAwsCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnection::CreateAwsCluster(ExperimentalTag,
                                        google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnection::UpdateAwsCluster(
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::UpdateAwsCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnection::UpdateAwsCluster(ExperimentalTag,
                                        google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersConnection::GetAwsCluster(
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersConnection::ListAwsClusters(
    google::cloud::gkemulticloud::v1::
        ListAwsClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>>();
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnection::DeleteAwsCluster(
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::DeleteAwsCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnection::DeleteAwsCluster(ExperimentalTag,
                                        google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
AwsClustersConnection::GenerateAwsClusterAgentToken(
    google::cloud::gkemulticloud::v1::
        GenerateAwsClusterAgentTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersConnection::GenerateAwsAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::CreateAwsNodePool(
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::CreateAwsNodePool(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::CreateAwsNodePool(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::UpdateAwsNodePool(
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::UpdateAwsNodePool(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::UpdateAwsNodePool(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::RollbackAwsNodePoolUpdate(
    google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::RollbackAwsNodePoolUpdate(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnection::RollbackAwsNodePoolUpdate(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersConnection::GetAwsNodePool(
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersConnection::ListAwsNodePools(
    google::cloud::gkemulticloud::v1::
        ListAwsNodePoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>>();
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnection::DeleteAwsNodePool(
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AwsClustersConnection::DeleteAwsNodePool(
    ExperimentalTag, NoAwaitTag,
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnection::DeleteAwsNodePool(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
AwsClustersConnection::GetAwsOpenIdConfig(
    google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys>
AwsClustersConnection::GetAwsJsonWebKeys(
    google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersConnection::GetAwsServerConfig(
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AwsClustersConnection> MakeAwsClustersConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AwsClustersPolicyOptionList>(options,
                                                              __func__);
  options = gkemulticloud_v1_internal::AwsClustersDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = gkemulticloud_v1_internal::CreateDefaultAwsClustersStub(
      std::move(auth), options);
  return gkemulticloud_v1_internal::MakeAwsClustersTracingConnection(
      std::make_shared<gkemulticloud_v1_internal::AwsClustersConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google
