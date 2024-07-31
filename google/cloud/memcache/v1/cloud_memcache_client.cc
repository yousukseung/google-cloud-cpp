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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#include "google/cloud/memcache/v1/cloud_memcache_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace memcache_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudMemcacheClient::CloudMemcacheClient(
    std::shared_ptr<CloudMemcacheConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudMemcacheClient::~CloudMemcacheClient() = default;

StreamRange<google::cloud::memcache::v1::Instance>
CloudMemcacheClient::ListInstances(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::memcache::v1::Instance>
CloudMemcacheClient::ListInstances(
    google::cloud::memcache::v1::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::memcache::v1::Instance>
CloudMemcacheClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::memcache::v1::Instance>
CloudMemcacheClient::GetInstance(
    google::cloud::memcache::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::CreateInstance(
    std::string const& parent,
    google::cloud::memcache::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::CreateInstance(
    NoAwaitTag, std::string const& parent,
    google::cloud::memcache::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::CreateInstance(
    google::cloud::memcache::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::CreateInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::CreateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(operation);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateInstance(
    google::cloud::memcache::v1::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::UpdateInstance(
    NoAwaitTag, google::cloud::memcache::v1::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateInstance(
    google::cloud::memcache::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::UpdateInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(operation);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateParameters(
    std::string const& name, google::protobuf::FieldMask const& update_mask,
    google::cloud::memcache::v1::MemcacheParameters const& parameters,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::UpdateParametersRequest request;
  request.set_name(name);
  *request.mutable_update_mask() = update_mask;
  *request.mutable_parameters() = parameters;
  return connection_->UpdateParameters(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::UpdateParameters(
    NoAwaitTag, std::string const& name,
    google::protobuf::FieldMask const& update_mask,
    google::cloud::memcache::v1::MemcacheParameters const& parameters,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::UpdateParametersRequest request;
  request.set_name(name);
  *request.mutable_update_mask() = update_mask;
  *request.mutable_parameters() = parameters;
  return connection_->UpdateParameters(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateParameters(
    google::cloud::memcache::v1::UpdateParametersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateParameters(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::UpdateParameters(
    NoAwaitTag,
    google::cloud::memcache::v1::UpdateParametersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateParameters(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::UpdateParameters(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateParameters(operation);
}

future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
CloudMemcacheClient::DeleteInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::DeleteInstance(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
CloudMemcacheClient::DeleteInstance(
    google::cloud::memcache::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::DeleteInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
CloudMemcacheClient::DeleteInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(operation);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::ApplyParameters(std::string const& name,
                                     std::vector<std::string> const& node_ids,
                                     bool apply_all, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::ApplyParametersRequest request;
  request.set_name(name);
  *request.mutable_node_ids() = {node_ids.begin(), node_ids.end()};
  request.set_apply_all(apply_all);
  return connection_->ApplyParameters(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::ApplyParameters(
    NoAwaitTag, std::string const& name,
    std::vector<std::string> const& node_ids, bool apply_all, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::ApplyParametersRequest request;
  request.set_name(name);
  *request.mutable_node_ids() = {node_ids.begin(), node_ids.end()};
  request.set_apply_all(apply_all);
  return connection_->ApplyParameters(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::ApplyParameters(
    google::cloud::memcache::v1::ApplyParametersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyParameters(request);
}

StatusOr<google::longrunning::Operation> CloudMemcacheClient::ApplyParameters(
    NoAwaitTag,
    google::cloud::memcache::v1::ApplyParametersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyParameters(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::ApplyParameters(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyParameters(operation);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::RescheduleMaintenance(
    std::string const& instance,
    google::cloud::memcache::v1::RescheduleMaintenanceRequest::RescheduleType
        reschedule_type,
    google::protobuf::Timestamp const& schedule_time, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::RescheduleMaintenanceRequest request;
  request.set_instance(instance);
  request.set_reschedule_type(reschedule_type);
  *request.mutable_schedule_time() = schedule_time;
  return connection_->RescheduleMaintenance(request);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheClient::RescheduleMaintenance(
    NoAwaitTag, std::string const& instance,
    google::cloud::memcache::v1::RescheduleMaintenanceRequest::RescheduleType
        reschedule_type,
    google::protobuf::Timestamp const& schedule_time, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::memcache::v1::RescheduleMaintenanceRequest request;
  request.set_instance(instance);
  request.set_reschedule_type(reschedule_type);
  *request.mutable_schedule_time() = schedule_time;
  return connection_->RescheduleMaintenance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::RescheduleMaintenance(
    google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RescheduleMaintenance(request);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheClient::RescheduleMaintenance(
    NoAwaitTag,
    google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RescheduleMaintenance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheClient::RescheduleMaintenance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RescheduleMaintenance(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_v1
}  // namespace cloud
}  // namespace google
