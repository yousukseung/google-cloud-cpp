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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/service_manager_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicemanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerClient::ServiceManagerClient(
    std::shared_ptr<ServiceManagerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ServiceManagerClient::~ServiceManagerClient() = default;

StreamRange<google::api::servicemanagement::v1::ManagedService>
ServiceManagerClient::ListServices(
    google::api::servicemanagement::v1::ListServicesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServices(std::move(request));
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerClient::GetService(std::string const& service_name,
                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::GetServiceRequest request;
  request.set_service_name(service_name);
  return connection_->GetService(request);
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerClient::GetService(
    google::api::servicemanagement::v1::GetServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetService(request);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerClient::CreateService(
    google::api::servicemanagement::v1::ManagedService const& service,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::CreateServiceRequest request;
  *request.mutable_service() = service;
  return connection_->CreateService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::CreateService(
    NoAwaitTag,
    google::api::servicemanagement::v1::ManagedService const& service,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::CreateServiceRequest request;
  *request.mutable_service() = service;
  return connection_->CreateService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerClient::CreateService(
    google::api::servicemanagement::v1::CreateServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::CreateService(
    NoAwaitTag,
    google::api::servicemanagement::v1::CreateServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerClient::CreateService(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateService(operation);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerClient::DeleteService(std::string const& service_name,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::DeleteServiceRequest request;
  request.set_service_name(service_name);
  return connection_->DeleteService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::DeleteService(
    NoAwaitTag, std::string const& service_name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::DeleteServiceRequest request;
  request.set_service_name(service_name);
  return connection_->DeleteService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerClient::DeleteService(
    google::api::servicemanagement::v1::DeleteServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::DeleteService(
    NoAwaitTag,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerClient::DeleteService(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteService(operation);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerClient::UndeleteService(std::string const& service_name,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::UndeleteServiceRequest request;
  request.set_service_name(service_name);
  return connection_->UndeleteService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::UndeleteService(
    NoAwaitTag, std::string const& service_name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::UndeleteServiceRequest request;
  request.set_service_name(service_name);
  return connection_->UndeleteService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerClient::UndeleteService(
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteService(request);
}

StatusOr<google::longrunning::Operation> ServiceManagerClient::UndeleteService(
    NoAwaitTag,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteService(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerClient::UndeleteService(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteService(operation);
}

StreamRange<google::api::Service> ServiceManagerClient::ListServiceConfigs(
    std::string const& service_name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::ListServiceConfigsRequest request;
  request.set_service_name(service_name);
  return connection_->ListServiceConfigs(request);
}

StreamRange<google::api::Service> ServiceManagerClient::ListServiceConfigs(
    google::api::servicemanagement::v1::ListServiceConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServiceConfigs(std::move(request));
}

StatusOr<google::api::Service> ServiceManagerClient::GetServiceConfig(
    std::string const& service_name, std::string const& config_id,
    google::api::servicemanagement::v1::GetServiceConfigRequest::ConfigView
        view,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::GetServiceConfigRequest request;
  request.set_service_name(service_name);
  request.set_config_id(config_id);
  request.set_view(view);
  return connection_->GetServiceConfig(request);
}

StatusOr<google::api::Service> ServiceManagerClient::GetServiceConfig(
    google::api::servicemanagement::v1::GetServiceConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetServiceConfig(request);
}

StatusOr<google::api::Service> ServiceManagerClient::CreateServiceConfig(
    std::string const& service_name, google::api::Service const& service_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::CreateServiceConfigRequest request;
  request.set_service_name(service_name);
  *request.mutable_service_config() = service_config;
  return connection_->CreateServiceConfig(request);
}

StatusOr<google::api::Service> ServiceManagerClient::CreateServiceConfig(
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServiceConfig(request);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerClient::SubmitConfigSource(
    std::string const& service_name,
    google::api::servicemanagement::v1::ConfigSource const& config_source,
    bool validate_only, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::SubmitConfigSourceRequest request;
  request.set_service_name(service_name);
  *request.mutable_config_source() = config_source;
  request.set_validate_only(validate_only);
  return connection_->SubmitConfigSource(request);
}

StatusOr<google::longrunning::Operation>
ServiceManagerClient::SubmitConfigSource(
    NoAwaitTag, std::string const& service_name,
    google::api::servicemanagement::v1::ConfigSource const& config_source,
    bool validate_only, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::SubmitConfigSourceRequest request;
  request.set_service_name(service_name);
  *request.mutable_config_source() = config_source;
  request.set_validate_only(validate_only);
  return connection_->SubmitConfigSource(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerClient::SubmitConfigSource(
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitConfigSource(request);
}

StatusOr<google::longrunning::Operation>
ServiceManagerClient::SubmitConfigSource(
    NoAwaitTag,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitConfigSource(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerClient::SubmitConfigSource(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitConfigSource(operation);
}

StreamRange<google::api::servicemanagement::v1::Rollout>
ServiceManagerClient::ListServiceRollouts(std::string const& service_name,
                                          std::string const& filter,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::ListServiceRolloutsRequest request;
  request.set_service_name(service_name);
  request.set_filter(filter);
  return connection_->ListServiceRollouts(request);
}

StreamRange<google::api::servicemanagement::v1::Rollout>
ServiceManagerClient::ListServiceRollouts(
    google::api::servicemanagement::v1::ListServiceRolloutsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListServiceRollouts(std::move(request));
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerClient::GetServiceRollout(std::string const& service_name,
                                        std::string const& rollout_id,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::GetServiceRolloutRequest request;
  request.set_service_name(service_name);
  request.set_rollout_id(rollout_id);
  return connection_->GetServiceRollout(request);
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerClient::GetServiceRollout(
    google::api::servicemanagement::v1::GetServiceRolloutRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetServiceRollout(request);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerClient::CreateServiceRollout(
    std::string const& service_name,
    google::api::servicemanagement::v1::Rollout const& rollout, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::CreateServiceRolloutRequest request;
  request.set_service_name(service_name);
  *request.mutable_rollout() = rollout;
  return connection_->CreateServiceRollout(request);
}

StatusOr<google::longrunning::Operation>
ServiceManagerClient::CreateServiceRollout(
    NoAwaitTag, std::string const& service_name,
    google::api::servicemanagement::v1::Rollout const& rollout, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::CreateServiceRolloutRequest request;
  request.set_service_name(service_name);
  *request.mutable_rollout() = rollout;
  return connection_->CreateServiceRollout(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerClient::CreateServiceRollout(
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServiceRollout(request);
}

StatusOr<google::longrunning::Operation>
ServiceManagerClient::CreateServiceRollout(
    NoAwaitTag,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServiceRollout(NoAwaitTag{}, request);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerClient::CreateServiceRollout(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateServiceRollout(operation);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerClient::GenerateConfigReport(
    google::protobuf::Any const& new_config,
    google::protobuf::Any const& old_config, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::api::servicemanagement::v1::GenerateConfigReportRequest request;
  *request.mutable_new_config() = new_config;
  *request.mutable_old_config() = old_config;
  return connection_->GenerateConfigReport(request);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerClient::GenerateConfigReport(
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateConfigReport(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1
}  // namespace cloud
}  // namespace google
