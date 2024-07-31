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

#include "google/cloud/developerconnect/v1/developer_connect_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace developerconnect_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeveloperConnectClient::DeveloperConnectClient(
    std::shared_ptr<DeveloperConnectConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DeveloperConnectClient::~DeveloperConnectClient() = default;

StreamRange<google::cloud::developerconnect::v1::Connection>
DeveloperConnectClient::ListConnections(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::ListConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListConnections(request);
}

StreamRange<google::cloud::developerconnect::v1::Connection>
DeveloperConnectClient::ListConnections(
    google::cloud::developerconnect::v1::ListConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnections(std::move(request));
}

StatusOr<google::cloud::developerconnect::v1::Connection>
DeveloperConnectClient::GetConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::GetConnectionRequest request;
  request.set_name(name);
  return connection_->GetConnection(request);
}

StatusOr<google::cloud::developerconnect::v1::Connection>
DeveloperConnectClient::GetConnection(
    google::cloud::developerconnect::v1::GetConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnection(request);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::CreateConnection(
    std::string const& parent,
    google::cloud::developerconnect::v1::Connection const& connection,
    std::string const& connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::CreateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_connection() = connection;
  request.set_connection_id(connection_id);
  return connection_->CreateConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::CreateConnection(
    NoAwaitTag, std::string const& parent,
    google::cloud::developerconnect::v1::Connection const& connection,
    std::string const& connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::CreateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_connection() = connection;
  request.set_connection_id(connection_id);
  return connection_->CreateConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::CreateConnection(
    google::cloud::developerconnect::v1::CreateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::CreateConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::CreateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::CreateConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(operation);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::UpdateConnection(
    google::cloud::developerconnect::v1::Connection const& connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::UpdateConnectionRequest request;
  *request.mutable_connection() = connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::UpdateConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::Connection const& connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::UpdateConnectionRequest request;
  *request.mutable_connection() = connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::UpdateConnection(
    google::cloud::developerconnect::v1::UpdateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::UpdateConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::Connection>>
DeveloperConnectClient::UpdateConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(operation);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteConnection(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::DeleteConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::DeleteConnection(NoAwaitTag, std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::DeleteConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteConnection(
    google::cloud::developerconnect::v1::DeleteConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::DeleteConnection(
    NoAwaitTag,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(operation);
}

future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
DeveloperConnectClient::CreateGitRepositoryLink(
    std::string const& parent,
    google::cloud::developerconnect::v1::GitRepositoryLink const&
        git_repository_link,
    std::string const& git_repository_link_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest request;
  request.set_parent(parent);
  *request.mutable_git_repository_link() = git_repository_link;
  request.set_git_repository_link_id(git_repository_link_id);
  return connection_->CreateGitRepositoryLink(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::CreateGitRepositoryLink(
    NoAwaitTag, std::string const& parent,
    google::cloud::developerconnect::v1::GitRepositoryLink const&
        git_repository_link,
    std::string const& git_repository_link_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest request;
  request.set_parent(parent);
  *request.mutable_git_repository_link() = git_repository_link;
  request.set_git_repository_link_id(git_repository_link_id);
  return connection_->CreateGitRepositoryLink(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
DeveloperConnectClient::CreateGitRepositoryLink(
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateGitRepositoryLink(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::CreateGitRepositoryLink(
    NoAwaitTag,
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateGitRepositoryLink(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
DeveloperConnectClient::CreateGitRepositoryLink(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateGitRepositoryLink(operation);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteGitRepositoryLink(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest request;
  request.set_name(name);
  return connection_->DeleteGitRepositoryLink(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::DeleteGitRepositoryLink(NoAwaitTag,
                                                std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest request;
  request.set_name(name);
  return connection_->DeleteGitRepositoryLink(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteGitRepositoryLink(
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGitRepositoryLink(request);
}

StatusOr<google::longrunning::Operation>
DeveloperConnectClient::DeleteGitRepositoryLink(
    NoAwaitTag,
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGitRepositoryLink(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
DeveloperConnectClient::DeleteGitRepositoryLink(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGitRepositoryLink(operation);
}

StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectClient::ListGitRepositoryLinks(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest request;
  request.set_parent(parent);
  return connection_->ListGitRepositoryLinks(request);
}

StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectClient::ListGitRepositoryLinks(
    google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGitRepositoryLinks(std::move(request));
}

StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectClient::GetGitRepositoryLink(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest request;
  request.set_name(name);
  return connection_->GetGitRepositoryLink(request);
}

StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectClient::GetGitRepositoryLink(
    google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGitRepositoryLink(request);
}

StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
DeveloperConnectClient::FetchReadWriteToken(
    std::string const& git_repository_link, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::FetchReadWriteTokenRequest request;
  request.set_git_repository_link(git_repository_link);
  return connection_->FetchReadWriteToken(request);
}

StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
DeveloperConnectClient::FetchReadWriteToken(
    google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchReadWriteToken(request);
}

StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
DeveloperConnectClient::FetchReadToken(std::string const& git_repository_link,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::FetchReadTokenRequest request;
  request.set_git_repository_link(git_repository_link);
  return connection_->FetchReadToken(request);
}

StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
DeveloperConnectClient::FetchReadToken(
    google::cloud::developerconnect::v1::FetchReadTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchReadToken(request);
}

StreamRange<google::cloud::developerconnect::v1::LinkableGitRepository>
DeveloperConnectClient::FetchLinkableGitRepositories(
    std::string const& connection, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesRequest
      request;
  request.set_connection(connection);
  return connection_->FetchLinkableGitRepositories(request);
}

StreamRange<google::cloud::developerconnect::v1::LinkableGitRepository>
DeveloperConnectClient::FetchLinkableGitRepositories(
    google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchLinkableGitRepositories(std::move(request));
}

StatusOr<google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
DeveloperConnectClient::FetchGitHubInstallations(std::string const& connection,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::FetchGitHubInstallationsRequest request;
  request.set_connection(connection);
  return connection_->FetchGitHubInstallations(request);
}

StatusOr<google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
DeveloperConnectClient::FetchGitHubInstallations(
    google::cloud::developerconnect::v1::FetchGitHubInstallationsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchGitHubInstallations(request);
}

StreamRange<std::string> DeveloperConnectClient::FetchGitRefs(
    std::string const& git_repository_link,
    google::cloud::developerconnect::v1::FetchGitRefsRequest::RefType ref_type,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::developerconnect::v1::FetchGitRefsRequest request;
  request.set_git_repository_link(git_repository_link);
  request.set_ref_type(ref_type);
  return connection_->FetchGitRefs(request);
}

StreamRange<std::string> DeveloperConnectClient::FetchGitRefs(
    google::cloud::developerconnect::v1::FetchGitRefsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchGitRefs(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1
}  // namespace cloud
}  // namespace google
