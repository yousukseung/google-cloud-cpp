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
// source:
// google/cloud/compute/region_health_check_services/v1/region_health_check_services.proto

#include "google/cloud/compute/region_health_check_services/v1/region_health_check_services_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionHealthCheckServicesClient::RegionHealthCheckServicesClient(
    std::shared_ptr<RegionHealthCheckServicesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionHealthCheckServicesClient::~RegionHealthCheckServicesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::DeleteHealthCheckService(
    std::string const& project, std::string const& region,
    std::string const& health_check_service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      DeleteHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  return connection_->DeleteHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::DeleteHealthCheckService(
    NoAwaitTag, std::string const& project, std::string const& region,
    std::string const& health_check_service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      DeleteHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  return connection_->DeleteHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::DeleteHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        DeleteHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::DeleteHealthCheckService(
    NoAwaitTag,
    google::cloud::cpp::compute::region_health_check_services::v1::
        DeleteHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::DeleteHealthCheckService(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHealthCheckService(operation);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::GetHealthCheckService(
    std::string const& project, std::string const& region,
    std::string const& health_check_service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      GetHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  return connection_->GetHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::GetHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        GetHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetHealthCheckService(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::InsertHealthCheckService(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      InsertHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->InsertHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::InsertHealthCheckService(
    NoAwaitTag, std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      InsertHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->InsertHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::InsertHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        InsertHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::InsertHealthCheckService(
    NoAwaitTag,
    google::cloud::cpp::compute::region_health_check_services::v1::
        InsertHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::InsertHealthCheckService(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertHealthCheckService(operation);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::ListRegionHealthCheckServices(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      ListRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionHealthCheckServices(request);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::ListRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        ListRegionHealthCheckServicesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionHealthCheckServices(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::PatchHealthCheckService(
    std::string const& project, std::string const& region,
    std::string const& health_check_service,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      PatchHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->PatchHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::PatchHealthCheckService(
    NoAwaitTag, std::string const& project, std::string const& region,
    std::string const& health_check_service,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      PatchHealthCheckServiceRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->PatchHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::PatchHealthCheckService(
    google::cloud::cpp::compute::region_health_check_services::v1::
        PatchHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchHealthCheckService(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthCheckServicesClient::PatchHealthCheckService(
    NoAwaitTag,
    google::cloud::cpp::compute::region_health_check_services::v1::
        PatchHealthCheckServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchHealthCheckService(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::PatchHealthCheckService(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchHealthCheckService(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1
}  // namespace cloud
}  // namespace google
