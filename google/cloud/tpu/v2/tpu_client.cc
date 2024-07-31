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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/tpu_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuClient::TpuClient(std::shared_ptr<TpuConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TpuClient::~TpuClient() = default;

StreamRange<google::cloud::tpu::v2::Node> TpuClient::ListNodes(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::ListNodesRequest request;
  request.set_parent(parent);
  return connection_->ListNodes(request);
}

StreamRange<google::cloud::tpu::v2::Node> TpuClient::ListNodes(
    google::cloud::tpu::v2::ListNodesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNodes(std::move(request));
}

StatusOr<google::cloud::tpu::v2::Node> TpuClient::GetNode(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::GetNodeRequest request;
  request.set_name(name);
  return connection_->GetNode(request);
}

StatusOr<google::cloud::tpu::v2::Node> TpuClient::GetNode(
    google::cloud::tpu::v2::GetNodeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNode(request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::CreateNode(
    std::string const& parent, google::cloud::tpu::v2::Node const& node,
    std::string const& node_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::CreateNodeRequest request;
  request.set_parent(parent);
  *request.mutable_node() = node;
  request.set_node_id(node_id);
  return connection_->CreateNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::CreateNode(
    NoAwaitTag, std::string const& parent,
    google::cloud::tpu::v2::Node const& node, std::string const& node_id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::CreateNodeRequest request;
  request.set_parent(parent);
  *request.mutable_node() = node;
  request.set_node_id(node_id);
  return connection_->CreateNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::CreateNode(
    google::cloud::tpu::v2::CreateNodeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::CreateNode(
    NoAwaitTag, google::cloud::tpu::v2::CreateNodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::CreateNode(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNode(operation);
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuClient::DeleteNode(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::DeleteNodeRequest request;
  request.set_name(name);
  return connection_->DeleteNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::DeleteNode(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::DeleteNodeRequest request;
  request.set_name(name);
  return connection_->DeleteNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuClient::DeleteNode(google::cloud::tpu::v2::DeleteNodeRequest const& request,
                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::DeleteNode(
    NoAwaitTag, google::cloud::tpu::v2::DeleteNodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuClient::DeleteNode(google::longrunning::Operation const& operation,
                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNode(operation);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::StopNode(
    google::cloud::tpu::v2::StopNodeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::StopNode(
    NoAwaitTag, google::cloud::tpu::v2::StopNodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::StopNode(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopNode(operation);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::StartNode(
    google::cloud::tpu::v2::StartNodeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::StartNode(
    NoAwaitTag, google::cloud::tpu::v2::StartNodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::StartNode(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartNode(operation);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::UpdateNode(
    google::cloud::tpu::v2::Node const& node,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::UpdateNodeRequest request;
  *request.mutable_node() = node;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::UpdateNode(
    NoAwaitTag, google::cloud::tpu::v2::Node const& node,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::UpdateNodeRequest request;
  *request.mutable_node() = node;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::UpdateNode(
    google::cloud::tpu::v2::UpdateNodeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNode(request);
}

StatusOr<google::longrunning::Operation> TpuClient::UpdateNode(
    NoAwaitTag, google::cloud::tpu::v2::UpdateNodeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNode(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuClient::UpdateNode(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNode(operation);
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
TpuClient::GenerateServiceIdentity(
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateServiceIdentity(request);
}

StreamRange<google::cloud::tpu::v2::AcceleratorType>
TpuClient::ListAcceleratorTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::ListAcceleratorTypesRequest request;
  request.set_parent(parent);
  return connection_->ListAcceleratorTypes(request);
}

StreamRange<google::cloud::tpu::v2::AcceleratorType>
TpuClient::ListAcceleratorTypes(
    google::cloud::tpu::v2::ListAcceleratorTypesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAcceleratorTypes(std::move(request));
}

StatusOr<google::cloud::tpu::v2::AcceleratorType> TpuClient::GetAcceleratorType(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::GetAcceleratorTypeRequest request;
  request.set_name(name);
  return connection_->GetAcceleratorType(request);
}

StatusOr<google::cloud::tpu::v2::AcceleratorType> TpuClient::GetAcceleratorType(
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAcceleratorType(request);
}

StreamRange<google::cloud::tpu::v2::RuntimeVersion>
TpuClient::ListRuntimeVersions(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::ListRuntimeVersionsRequest request;
  request.set_parent(parent);
  return connection_->ListRuntimeVersions(request);
}

StreamRange<google::cloud::tpu::v2::RuntimeVersion>
TpuClient::ListRuntimeVersions(
    google::cloud::tpu::v2::ListRuntimeVersionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRuntimeVersions(std::move(request));
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion> TpuClient::GetRuntimeVersion(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::tpu::v2::GetRuntimeVersionRequest request;
  request.set_name(name);
  return connection_->GetRuntimeVersion(request);
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion> TpuClient::GetRuntimeVersion(
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRuntimeVersion(request);
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
TpuClient::GetGuestAttributes(
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGuestAttributes(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2
}  // namespace cloud
}  // namespace google
