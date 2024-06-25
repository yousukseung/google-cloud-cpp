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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_CONNECTION_IMPL_H

#include "google/cloud/connectors/v1/connectors_connection.h"
#include "google/cloud/connectors/v1/connectors_connection_idempotency_policy.h"
#include "google/cloud/connectors/v1/connectors_options.h"
#include "google/cloud/connectors/v1/internal/connectors_retry_traits.h"
#include "google/cloud/connectors/v1/internal/connectors_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConnectorsConnectionImpl : public connectors_v1::ConnectorsConnection {
 public:
  ~ConnectorsConnectionImpl() override = default;

  ConnectorsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<connectors_v1_internal::ConnectorsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::connectors::v1::Connection> ListConnections(
      google::cloud::connectors::v1::ListConnectionsRequest request) override;

  StatusOr<google::cloud::connectors::v1::Connection> GetConnection(
      google::cloud::connectors::v1::GetConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> CreateConnection(
      google::cloud::connectors::v1::CreateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::connectors::v1::CreateConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> CreateConnection(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> UpdateConnection(
      google::cloud::connectors::v1::UpdateConnectionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::connectors::v1::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::Connection>> UpdateConnection(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
  DeleteConnection(google::cloud::connectors::v1::DeleteConnectionRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::connectors::v1::DeleteConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
  DeleteConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::connectors::v1::Provider> ListProviders(
      google::cloud::connectors::v1::ListProvidersRequest request) override;

  StatusOr<google::cloud::connectors::v1::Provider> GetProvider(
      google::cloud::connectors::v1::GetProviderRequest const& request)
      override;

  StreamRange<google::cloud::connectors::v1::Connector> ListConnectors(
      google::cloud::connectors::v1::ListConnectorsRequest request) override;

  StatusOr<google::cloud::connectors::v1::Connector> GetConnector(
      google::cloud::connectors::v1::GetConnectorRequest const& request)
      override;

  StreamRange<google::cloud::connectors::v1::ConnectorVersion>
  ListConnectorVersions(
      google::cloud::connectors::v1::ListConnectorVersionsRequest request)
      override;

  StatusOr<google::cloud::connectors::v1::ConnectorVersion> GetConnectorVersion(
      google::cloud::connectors::v1::GetConnectorVersionRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
  GetConnectionSchemaMetadata(
      google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
          request) override;

  future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>
  RefreshConnectionSchemaMetadata(
      google::cloud::connectors::v1::
          RefreshConnectionSchemaMetadataRequest const& request) override;

  StatusOr<google::longrunning::Operation> RefreshConnectionSchemaMetadata(
      ExperimentalTag, NoAwaitTag,
      google::cloud::connectors::v1::
          RefreshConnectionSchemaMetadataRequest const& request) override;

  future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>
  RefreshConnectionSchemaMetadata(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
  ListRuntimeEntitySchemas(
      google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request)
      override;

  StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
  ListRuntimeActionSchemas(
      google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request)
      override;

  StatusOr<google::cloud::connectors::v1::RuntimeConfig> GetRuntimeConfig(
      google::cloud::connectors::v1::GetRuntimeConfigRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::Settings> GetGlobalSettings(
      google::cloud::connectors::v1::GetGlobalSettingsRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<connectors_v1_internal::ConnectorsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_CONNECTION_IMPL_H
