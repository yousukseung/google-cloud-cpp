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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/azure_clusters_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AzureClustersClient::AzureClustersClient(
    std::shared_ptr<AzureClustersConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AzureClustersClient::~AzureClustersClient() = default;

future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
AzureClustersClient::CreateAzureClient(
    std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureClient const& azure_client,
    std::string const& azure_client_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureClientRequest request;
  request.set_parent(parent);
  *request.mutable_azure_client() = azure_client;
  request.set_azure_client_id(azure_client_id);
  return connection_->CreateAzureClient(request);
}

StatusOr<google::longrunning::Operation> AzureClustersClient::CreateAzureClient(
    NoAwaitTag, std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureClient const& azure_client,
    std::string const& azure_client_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureClientRequest request;
  request.set_parent(parent);
  *request.mutable_azure_client() = azure_client;
  request.set_azure_client_id(azure_client_id);
  return connection_->CreateAzureClient(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
AzureClustersClient::CreateAzureClient(
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureClient(request);
}

StatusOr<google::longrunning::Operation> AzureClustersClient::CreateAzureClient(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureClient(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
AzureClustersClient::CreateAzureClient(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureClient(operation);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersClient::GetAzureClient(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureClientRequest request;
  request.set_name(name);
  return connection_->GetAzureClient(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersClient::GetAzureClient(
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureClient(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersClient::ListAzureClients(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::ListAzureClientsRequest request;
  request.set_parent(parent);
  return connection_->ListAzureClients(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersClient::ListAzureClients(
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAzureClients(std::move(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureClient(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureClientRequest request;
  request.set_name(name);
  return connection_->DeleteAzureClient(request);
}

StatusOr<google::longrunning::Operation> AzureClustersClient::DeleteAzureClient(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureClientRequest request;
  request.set_name(name);
  return connection_->DeleteAzureClient(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureClient(
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureClient(request);
}

StatusOr<google::longrunning::Operation> AzureClustersClient::DeleteAzureClient(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureClient(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureClient(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureClient(operation);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::CreateAzureCluster(
    std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureCluster const& azure_cluster,
    std::string const& azure_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureClusterRequest request;
  request.set_parent(parent);
  *request.mutable_azure_cluster() = azure_cluster;
  request.set_azure_cluster_id(azure_cluster_id);
  return connection_->CreateAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::CreateAzureCluster(
    NoAwaitTag, std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureCluster const& azure_cluster,
    std::string const& azure_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureClusterRequest request;
  request.set_parent(parent);
  *request.mutable_azure_cluster() = azure_cluster;
  request.set_azure_cluster_id(azure_cluster_id);
  return connection_->CreateAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::CreateAzureCluster(
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::CreateAzureCluster(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::CreateAzureCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureCluster(operation);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::UpdateAzureCluster(
    google::cloud::gkemulticloud::v1::AzureCluster const& azure_cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest request;
  *request.mutable_azure_cluster() = azure_cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::UpdateAzureCluster(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::AzureCluster const& azure_cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest request;
  *request.mutable_azure_cluster() = azure_cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::UpdateAzureCluster(
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::UpdateAzureCluster(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
AzureClustersClient::UpdateAzureCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureCluster(operation);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersClient::GetAzureCluster(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureClusterRequest request;
  request.set_name(name);
  return connection_->GetAzureCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersClient::GetAzureCluster(
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureCluster(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersClient::ListAzureClusters(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::ListAzureClustersRequest request;
  request.set_parent(parent);
  return connection_->ListAzureClusters(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersClient::ListAzureClusters(
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAzureClusters(std::move(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureCluster(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest request;
  request.set_name(name);
  return connection_->DeleteAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::DeleteAzureCluster(NoAwaitTag, std::string const& name,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest request;
  request.set_name(name);
  return connection_->DeleteAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureCluster(
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureCluster(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::DeleteAzureCluster(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureCluster(operation);
}

StatusOr<
    google::cloud::gkemulticloud::v1::GenerateAzureClusterAgentTokenResponse>
AzureClustersClient::GenerateAzureClusterAgentToken(
    google::cloud::gkemulticloud::v1::
        GenerateAzureClusterAgentTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateAzureClusterAgentToken(request);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
AzureClustersClient::GenerateAzureAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateAzureAccessToken(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::CreateAzureNodePool(
    std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureNodePool const& azure_node_pool,
    std::string const& azure_node_pool_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest request;
  request.set_parent(parent);
  *request.mutable_azure_node_pool() = azure_node_pool;
  request.set_azure_node_pool_id(azure_node_pool_id);
  return connection_->CreateAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::CreateAzureNodePool(
    NoAwaitTag, std::string const& parent,
    google::cloud::gkemulticloud::v1::AzureNodePool const& azure_node_pool,
    std::string const& azure_node_pool_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest request;
  request.set_parent(parent);
  *request.mutable_azure_node_pool() = azure_node_pool;
  request.set_azure_node_pool_id(azure_node_pool_id);
  return connection_->CreateAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::CreateAzureNodePool(
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::CreateAzureNodePool(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::CreateAzureNodePool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAzureNodePool(operation);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::UpdateAzureNodePool(
    google::cloud::gkemulticloud::v1::AzureNodePool const& azure_node_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest request;
  *request.mutable_azure_node_pool() = azure_node_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::UpdateAzureNodePool(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::AzureNodePool const& azure_node_pool,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest request;
  *request.mutable_azure_node_pool() = azure_node_pool;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::UpdateAzureNodePool(
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::UpdateAzureNodePool(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
AzureClustersClient::UpdateAzureNodePool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAzureNodePool(operation);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersClient::GetAzureNodePool(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest request;
  request.set_name(name);
  return connection_->GetAzureNodePool(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersClient::GetAzureNodePool(
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureNodePool(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersClient::ListAzureNodePools(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest request;
  request.set_parent(parent);
  return connection_->ListAzureNodePools(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersClient::ListAzureNodePools(
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAzureNodePools(std::move(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureNodePool(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest request;
  request.set_name(name);
  return connection_->DeleteAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::DeleteAzureNodePool(NoAwaitTag, std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest request;
  request.set_name(name);
  return connection_->DeleteAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureNodePool(
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureNodePool(request);
}

StatusOr<google::longrunning::Operation>
AzureClustersClient::DeleteAzureNodePool(
    NoAwaitTag,
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureNodePool(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AzureClustersClient::DeleteAzureNodePool(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAzureNodePool(operation);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureOpenIdConfig>
AzureClustersClient::GetAzureOpenIdConfig(std::string const& azure_cluster,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureOpenIdConfigRequest request;
  request.set_azure_cluster(azure_cluster);
  return connection_->GetAzureOpenIdConfig(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureOpenIdConfig>
AzureClustersClient::GetAzureOpenIdConfig(
    google::cloud::gkemulticloud::v1::GetAzureOpenIdConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureOpenIdConfig(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureJsonWebKeys>
AzureClustersClient::GetAzureJsonWebKeys(std::string const& azure_cluster,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureJsonWebKeysRequest request;
  request.set_azure_cluster(azure_cluster);
  return connection_->GetAzureJsonWebKeys(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureJsonWebKeys>
AzureClustersClient::GetAzureJsonWebKeys(
    google::cloud::gkemulticloud::v1::GetAzureJsonWebKeysRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureJsonWebKeys(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersClient::GetAzureServerConfig(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest request;
  request.set_name(name);
  return connection_->GetAzureServerConfig(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersClient::GetAzureServerConfig(
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAzureServerConfig(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google
