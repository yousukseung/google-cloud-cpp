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
// source: google/cloud/edgenetwork/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_TRACING_CONNECTION_H

#include "google/cloud/edgenetwork/v1/edge_network_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EdgeNetworkTracingConnection
    : public edgenetwork_v1::EdgeNetworkConnection {
 public:
  ~EdgeNetworkTracingConnection() override = default;

  explicit EdgeNetworkTracingConnection(
      std::shared_ptr<edgenetwork_v1::EdgeNetworkConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
  InitializeZone(google::cloud::edgenetwork::v1::InitializeZoneRequest const&
                     request) override;

  StreamRange<google::cloud::edgenetwork::v1::Zone> ListZones(
      google::cloud::edgenetwork::v1::ListZonesRequest request) override;

  StatusOr<google::cloud::edgenetwork::v1::Zone> GetZone(
      google::cloud::edgenetwork::v1::GetZoneRequest const& request) override;

  StreamRange<google::cloud::edgenetwork::v1::Network> ListNetworks(
      google::cloud::edgenetwork::v1::ListNetworksRequest request) override;

  StatusOr<google::cloud::edgenetwork::v1::Network> GetNetwork(
      google::cloud::edgenetwork::v1::GetNetworkRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
  DiagnoseNetwork(google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const&
                      request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::Network>> CreateNetwork(
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateNetwork(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateNetworkRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::Network>> CreateNetwork(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteNetwork(google::cloud::edgenetwork::v1::DeleteNetworkRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteNetwork(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteNetwork(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::edgenetwork::v1::Subnet> ListSubnets(
      google::cloud::edgenetwork::v1::ListSubnetsRequest request) override;

  StatusOr<google::cloud::edgenetwork::v1::Subnet> GetSubnet(
      google::cloud::edgenetwork::v1::GetSubnetRequest const& request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> CreateSubnet(
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> CreateSubnet(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> UpdateSubnet(
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::Subnet>> UpdateSubnet(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteSubnet(google::cloud::edgenetwork::v1::DeleteSubnetRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteSubnet(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteSubnet(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::edgenetwork::v1::Interconnect> ListInterconnects(
      google::cloud::edgenetwork::v1::ListInterconnectsRequest request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::Interconnect> GetInterconnect(
      google::cloud::edgenetwork::v1::GetInterconnectRequest const& request)
      override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
  DiagnoseInterconnect(
      google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
          request) override;

  StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>
  ListInterconnectAttachments(
      google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest
          request) override;

  StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
  CreateInterconnectAttachment(
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateInterconnectAttachment(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
  CreateInterconnectAttachment(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteInterconnectAttachment(
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteInterconnectAttachment(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteInterconnectAttachment(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::edgenetwork::v1::Router> ListRouters(
      google::cloud::edgenetwork::v1::ListRoutersRequest request) override;

  StatusOr<google::cloud::edgenetwork::v1::Router> GetRouter(
      google::cloud::edgenetwork::v1::GetRouterRequest const& request) override;

  StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
  DiagnoseRouter(google::cloud::edgenetwork::v1::DiagnoseRouterRequest const&
                     request) override;

  future<StatusOr<google::cloud::edgenetwork::v1::Router>> CreateRouter(
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::CreateRouterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::Router>> CreateRouter(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::Router>> UpdateRouter(
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::UpdateRouterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::Router>> UpdateRouter(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteRouter(google::cloud::edgenetwork::v1::DeleteRouterRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteRouter(
      NoAwaitTag,
      google::cloud::edgenetwork::v1::DeleteRouterRequest const& request)
      override;

  future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
  DeleteRouter(google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<edgenetwork_v1::EdgeNetworkConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<edgenetwork_v1::EdgeNetworkConnection>
MakeEdgeNetworkTracingConnection(
    std::shared_ptr<edgenetwork_v1::EdgeNetworkConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGENETWORK_V1_INTERNAL_EDGE_NETWORK_TRACING_CONNECTION_H
