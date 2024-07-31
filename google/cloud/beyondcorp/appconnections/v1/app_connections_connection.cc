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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/app_connections_connection.h"
#include "google/cloud/beyondcorp/appconnections/v1/app_connections_options.h"
#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_connection_impl.h"
#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_option_defaults.h"
#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_stub_factory.h"
#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_tracing_connection.h"
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
namespace beyondcorp_appconnections_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceConnection::~AppConnectionsServiceConnection() = default;

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceConnection::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>>();
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceConnection::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnection::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceConnection::CreateAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    CreateAppConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnection::CreateAppConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnection::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceConnection::UpdateAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    UpdateAppConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnection::UpdateAppConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceConnection::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::
                   AppConnectionOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceConnection::DeleteAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    DeleteAppConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceConnection::DeleteAppConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::
                   AppConnectionOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceConnection::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::beyondcorp::appconnections::v1::
                      ResolveAppConnectionsResponse::AppConnectionDetails>>();
}

std::shared_ptr<AppConnectionsServiceConnection>
MakeAppConnectionsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AppConnectionsServicePolicyOptionList>(
      options, __func__);
  options = beyondcorp_appconnections_v1_internal::
      AppConnectionsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = beyondcorp_appconnections_v1_internal::
      CreateDefaultAppConnectionsServiceStub(std::move(auth), options);
  return beyondcorp_appconnections_v1_internal::
      MakeAppConnectionsServiceTracingConnection(
          std::make_shared<beyondcorp_appconnections_v1_internal::
                               AppConnectionsServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1
}  // namespace cloud
}  // namespace google
