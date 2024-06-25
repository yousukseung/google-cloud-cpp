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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/network_security_connection.h"
#include "google/cloud/networksecurity/v1/internal/network_security_connection_impl.h"
#include "google/cloud/networksecurity/v1/internal/network_security_option_defaults.h"
#include "google/cloud/networksecurity/v1/internal/network_security_stub_factory.h"
#include "google/cloud/networksecurity/v1/internal/network_security_tracing_connection.h"
#include "google/cloud/networksecurity/v1/network_security_options.h"
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
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityConnection::~NetworkSecurityConnection() = default;

StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityConnection::ListAuthorizationPolicies(
    google::cloud::networksecurity::v1::
        ListAuthorizationPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>>();
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityConnection::GetAuthorizationPolicy(
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnection::CreateAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        CreateAuthorizationPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::CreateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::
        CreateAuthorizationPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnection::CreateAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnection::UpdateAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        UpdateAuthorizationPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::UpdateAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::
        UpdateAuthorizationPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnection::UpdateAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteAuthorizationPolicy(
    google::cloud::networksecurity::v1::
        DeleteAuthorizationPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::DeleteAuthorizationPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::
        DeleteAuthorizationPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteAuthorizationPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityConnection::ListServerTlsPolicies(
    google::cloud::networksecurity::v1::
        ListServerTlsPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>>();
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityConnection::GetServerTlsPolicy(
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnection::CreateServerTlsPolicy(
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::CreateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnection::CreateServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnection::UpdateServerTlsPolicy(
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::UpdateServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnection::UpdateServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteServerTlsPolicy(
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::DeleteServerTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteServerTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityConnection::ListClientTlsPolicies(
    google::cloud::networksecurity::v1::
        ListClientTlsPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>>();
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityConnection::GetClientTlsPolicy(
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnection::CreateClientTlsPolicy(
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::CreateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnection::CreateClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnection::UpdateClientTlsPolicy(
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::UpdateClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnection::UpdateClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteClientTlsPolicy(
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
NetworkSecurityConnection::DeleteClientTlsPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnection::DeleteClientTlsPolicy(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<NetworkSecurityConnection> MakeNetworkSecurityConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 NetworkSecurityPolicyOptionList>(options,
                                                                  __func__);
  options = networksecurity_v1_internal::NetworkSecurityDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = networksecurity_v1_internal::CreateDefaultNetworkSecurityStub(
      std::move(auth), options);
  return networksecurity_v1_internal::MakeNetworkSecurityTracingConnection(
      std::make_shared<
          networksecurity_v1_internal::NetworkSecurityConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google
