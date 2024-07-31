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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#include "google/cloud/aiplatform/v1/persistent_resource_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PersistentResourceServiceClient::PersistentResourceServiceClient(
    std::shared_ptr<PersistentResourceServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PersistentResourceServiceClient::~PersistentResourceServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::CreatePersistentResource(
    std::string const& parent,
    google::cloud::aiplatform::v1::PersistentResource const&
        persistent_resource,
    std::string const& persistent_resource_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreatePersistentResourceRequest request;
  request.set_parent(parent);
  *request.mutable_persistent_resource() = persistent_resource;
  request.set_persistent_resource_id(persistent_resource_id);
  return connection_->CreatePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::CreatePersistentResource(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::PersistentResource const&
        persistent_resource,
    std::string const& persistent_resource_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreatePersistentResourceRequest request;
  request.set_parent(parent);
  *request.mutable_persistent_resource() = persistent_resource;
  request.set_persistent_resource_id(persistent_resource_id);
  return connection_->CreatePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::CreatePersistentResource(
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::CreatePersistentResource(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::CreatePersistentResource(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePersistentResource(operation);
}

StatusOr<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceClient::GetPersistentResource(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetPersistentResourceRequest request;
  request.set_name(name);
  return connection_->GetPersistentResource(request);
}

StatusOr<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceClient::GetPersistentResource(
    google::cloud::aiplatform::v1::GetPersistentResourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPersistentResource(request);
}

StreamRange<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceClient::ListPersistentResources(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListPersistentResourcesRequest request;
  request.set_parent(parent);
  return connection_->ListPersistentResources(request);
}

StreamRange<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceClient::ListPersistentResources(
    google::cloud::aiplatform::v1::ListPersistentResourcesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPersistentResources(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
PersistentResourceServiceClient::DeletePersistentResource(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeletePersistentResourceRequest request;
  request.set_name(name);
  return connection_->DeletePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::DeletePersistentResource(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeletePersistentResourceRequest request;
  request.set_name(name);
  return connection_->DeletePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
PersistentResourceServiceClient::DeletePersistentResource(
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::DeletePersistentResource(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
PersistentResourceServiceClient::DeletePersistentResource(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePersistentResource(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::UpdatePersistentResource(
    google::cloud::aiplatform::v1::PersistentResource const&
        persistent_resource,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdatePersistentResourceRequest request;
  *request.mutable_persistent_resource() = persistent_resource;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdatePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::UpdatePersistentResource(
    NoAwaitTag,
    google::cloud::aiplatform::v1::PersistentResource const&
        persistent_resource,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdatePersistentResourceRequest request;
  *request.mutable_persistent_resource() = persistent_resource;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdatePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::UpdatePersistentResource(
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::UpdatePersistentResource(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::UpdatePersistentResource(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePersistentResource(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::RebootPersistentResource(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RebootPersistentResourceRequest request;
  request.set_name(name);
  return connection_->RebootPersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::RebootPersistentResource(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RebootPersistentResourceRequest request;
  request.set_name(name);
  return connection_->RebootPersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::RebootPersistentResource(
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebootPersistentResource(request);
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceClient::RebootPersistentResource(
    NoAwaitTag,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebootPersistentResource(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
PersistentResourceServiceClient::RebootPersistentResource(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RebootPersistentResource(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
