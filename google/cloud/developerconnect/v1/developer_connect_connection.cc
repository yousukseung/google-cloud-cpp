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
// source: google/cloud/developerconnect/v1/developer_connect.proto

#include "google/cloud/developerconnect/v1/developer_connect_connection.h"
#include "google/cloud/developerconnect/v1/developer_connect_options.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_connection_impl.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_option_defaults.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_stub_factory.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_tracing_connection.h"
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
namespace developerconnect_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeveloperConnectConnection::~DeveloperConnectConnection() = default;

StreamRange<google::cloud::developerconnect::v1::Connection>
DeveloperConnectConnection::ListConnections(
    google::cloud::developerconnect::v1::
        ListConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::developerconnect::v1::Connection>>();
}

StatusOr<google::cloud::developerconnect::v1::Connection>
DeveloperConnectConnection::GetConnection(
    google::cloud::developerconnect::v1::GetConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectConnection::CreateConnection(
    google::cloud::developerconnect::v1::CreateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectConnection::CreateConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::CreateConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectConnection::CreateConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectConnection::UpdateConnection(
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectConnection::UpdateConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectConnection::UpdateConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::Connection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectConnection::DeleteConnection(
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectConnection::DeleteConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectConnection::DeleteConnection(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
DeveloperConnectConnection::CreateGitRepositoryLink(
    google::cloud::developerconnect::v1::
        CreateGitRepositoryLinkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectConnection::CreateGitRepositoryLink(
    NoAwaitTag, google::cloud::developerconnect::v1::
                    CreateGitRepositoryLinkRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
DeveloperConnectConnection::CreateGitRepositoryLink(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectConnection::DeleteGitRepositoryLink(
    google::cloud::developerconnect::v1::
        DeleteGitRepositoryLinkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectConnection::DeleteGitRepositoryLink(
    NoAwaitTag, google::cloud::developerconnect::v1::
                    DeleteGitRepositoryLinkRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectConnection::DeleteGitRepositoryLink(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectConnection::ListGitRepositoryLinks(
    google::cloud::developerconnect::v1::
        ListGitRepositoryLinksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>>();
}

StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectConnection::GetGitRepositoryLink(
    google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
DeveloperConnectConnection::FetchReadWriteToken(
    google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
DeveloperConnectConnection::FetchReadToken(
    google::cloud::developerconnect::v1::FetchReadTokenRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::developerconnect::v1::LinkableGitRepository>
DeveloperConnectConnection::FetchLinkableGitRepositories(
    google::cloud::developerconnect::v1::
        FetchLinkableGitRepositoriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::developerconnect::v1::LinkableGitRepository>>();
}

StatusOr<google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
DeveloperConnectConnection::FetchGitHubInstallations(
    google::cloud::developerconnect::v1::
        FetchGitHubInstallationsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> DeveloperConnectConnection::FetchGitRefs(
    google::cloud::developerconnect::v1::
        FetchGitRefsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

std::shared_ptr<DeveloperConnectConnection> MakeDeveloperConnectConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DeveloperConnectPolicyOptionList>(options,
                                                                   __func__);
  options = developerconnect_v1_internal::DeveloperConnectDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = developerconnect_v1_internal::CreateDefaultDeveloperConnectStub(
      std::move(auth), options);
  return developerconnect_v1_internal::MakeDeveloperConnectTracingConnection(
      std::make_shared<
          developerconnect_v1_internal::DeveloperConnectConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1
}  // namespace cloud
}  // namespace google
