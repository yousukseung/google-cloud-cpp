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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/v1/service_usage_connection.h"
#include "google/cloud/serviceusage/v1/internal/service_usage_connection_impl.h"
#include "google/cloud/serviceusage/v1/internal/service_usage_option_defaults.h"
#include "google/cloud/serviceusage/v1/internal/service_usage_stub_factory.h"
#include "google/cloud/serviceusage/v1/internal/service_usage_tracing_connection.h"
#include "google/cloud/serviceusage/v1/service_usage_options.h"
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
namespace serviceusage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageConnection::~ServiceUsageConnection() = default;

future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
ServiceUsageConnection::EnableService(
    google::api::serviceusage::v1::EnableServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ServiceUsageConnection::EnableService(
    NoAwaitTag, google::api::serviceusage::v1::EnableServiceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
ServiceUsageConnection::EnableService(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
ServiceUsageConnection::DisableService(
    google::api::serviceusage::v1::DisableServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ServiceUsageConnection::DisableService(
    NoAwaitTag, google::api::serviceusage::v1::DisableServiceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
ServiceUsageConnection::DisableService(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::api::serviceusage::v1::Service>
ServiceUsageConnection::GetService(
    google::api::serviceusage::v1::GetServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::api::serviceusage::v1::Service>
ServiceUsageConnection::ListServices(
    google::api::serviceusage::v1::
        ListServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::api::serviceusage::v1::Service>>();
}

future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
ServiceUsageConnection::BatchEnableServices(
    google::api::serviceusage::v1::BatchEnableServicesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ServiceUsageConnection::BatchEnableServices(
    NoAwaitTag,
    google::api::serviceusage::v1::BatchEnableServicesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
ServiceUsageConnection::BatchEnableServices(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageConnection::BatchGetServices(
    google::api::serviceusage::v1::BatchGetServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ServiceUsageConnection> MakeServiceUsageConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ServiceUsagePolicyOptionList>(options,
                                                               __func__);
  options =
      serviceusage_v1_internal::ServiceUsageDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = serviceusage_v1_internal::CreateDefaultServiceUsageStub(
      std::move(auth), options);
  return serviceusage_v1_internal::MakeServiceUsageTracingConnection(
      std::make_shared<serviceusage_v1_internal::ServiceUsageConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1
}  // namespace cloud
}  // namespace google
