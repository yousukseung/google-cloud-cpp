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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H

#include "google/cloud/vmwareengine/v1/vmware_engine_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmwareengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VmwareEngineTracingConnection
    : public vmwareengine_v1::VmwareEngineConnection {
 public:
  ~VmwareEngineTracingConnection() override = default;

  explicit VmwareEngineTracingConnection(
      std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::vmwareengine::v1::PrivateCloud> ListPrivateClouds(
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::PrivateCloud> GetPrivateCloud(
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  CreatePrivateCloud(
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreatePrivateCloud(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  CreatePrivateCloud(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UpdatePrivateCloud(
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdatePrivateCloud(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UpdatePrivateCloud(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  DeletePrivateCloud(
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeletePrivateCloud(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  DeletePrivateCloud(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UndeletePrivateCloud(
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UndeletePrivateCloud(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UndeletePrivateCloud(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::Cluster> ListClusters(
      google::cloud::vmwareengine::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::Cluster> GetCluster(
      google::cloud::vmwareengine::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> CreateCluster(
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> CreateCluster(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> UpdateCluster(
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> UpdateCluster(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteCluster(google::cloud::vmwareengine::v1::DeleteClusterRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteCluster(ExperimentalTag,
                google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::Node> ListNodes(
      google::cloud::vmwareengine::v1::ListNodesRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::Node> GetNode(
      google::cloud::vmwareengine::v1::GetNodeRequest const& request) override;

  StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
  ListExternalAddresses(
      google::cloud::vmwareengine::v1::ListExternalAddressesRequest request)
      override;

  StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
  FetchNetworkPolicyExternalAddresses(
      google::cloud::vmwareengine::v1::
          FetchNetworkPolicyExternalAddressesRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::ExternalAddress> GetExternalAddress(
      google::cloud::vmwareengine::v1::GetExternalAddressRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  CreateExternalAddress(
      google::cloud::vmwareengine::v1::CreateExternalAddressRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateExternalAddress(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateExternalAddressRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  CreateExternalAddress(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  UpdateExternalAddress(
      google::cloud::vmwareengine::v1::UpdateExternalAddressRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateExternalAddress(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateExternalAddressRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  UpdateExternalAddress(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAddress(
      google::cloud::vmwareengine::v1::DeleteExternalAddressRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteExternalAddress(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteExternalAddressRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAddress(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::Subnet> ListSubnets(
      google::cloud::vmwareengine::v1::ListSubnetsRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::Subnet> GetSubnet(
      google::cloud::vmwareengine::v1::GetSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Subnet>> UpdateSubnet(
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSubnet(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Subnet>> UpdateSubnet(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::ExternalAccessRule>
  ListExternalAccessRules(
      google::cloud::vmwareengine::v1::ListExternalAccessRulesRequest request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>
  GetExternalAccessRule(
      google::cloud::vmwareengine::v1::GetExternalAccessRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  CreateExternalAccessRule(
      google::cloud::vmwareengine::v1::CreateExternalAccessRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateExternalAccessRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateExternalAccessRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  CreateExternalAccessRule(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  UpdateExternalAccessRule(
      google::cloud::vmwareengine::v1::UpdateExternalAccessRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateExternalAccessRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateExternalAccessRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  UpdateExternalAccessRule(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAccessRule(
      google::cloud::vmwareengine::v1::DeleteExternalAccessRuleRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteExternalAccessRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteExternalAccessRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAccessRule(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::LoggingServer>
  ListLoggingServers(google::cloud::vmwareengine::v1::ListLoggingServersRequest
                         request) override;

  StatusOr<google::cloud::vmwareengine::v1::LoggingServer> GetLoggingServer(
      google::cloud::vmwareengine::v1::GetLoggingServerRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  CreateLoggingServer(
      google::cloud::vmwareengine::v1::CreateLoggingServerRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateLoggingServer(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateLoggingServerRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  CreateLoggingServer(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  UpdateLoggingServer(
      google::cloud::vmwareengine::v1::UpdateLoggingServerRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateLoggingServer(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateLoggingServerRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  UpdateLoggingServer(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteLoggingServer(
      google::cloud::vmwareengine::v1::DeleteLoggingServerRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteLoggingServer(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteLoggingServerRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteLoggingServer(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::NodeType> ListNodeTypes(
      google::cloud::vmwareengine::v1::ListNodeTypesRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::NodeType> GetNodeType(
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowNsxCredentials(
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowVcenterCredentials(
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetNsxCredentials(
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ResetNsxCredentials(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetNsxCredentials(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetVcenterCredentials(
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ResetVcenterCredentials(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetVcenterCredentials(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::vmwareengine::v1::DnsForwarding> GetDnsForwarding(
      google::cloud::vmwareengine::v1::GetDnsForwardingRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>>
  UpdateDnsForwarding(
      google::cloud::vmwareengine::v1::UpdateDnsForwardingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDnsForwarding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateDnsForwardingRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>>
  UpdateDnsForwarding(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::vmwareengine::v1::NetworkPeering> GetNetworkPeering(
      google::cloud::vmwareengine::v1::GetNetworkPeeringRequest const& request)
      override;

  StreamRange<google::cloud::vmwareengine::v1::NetworkPeering>
  ListNetworkPeerings(
      google::cloud::vmwareengine::v1::ListNetworkPeeringsRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  CreateNetworkPeering(
      google::cloud::vmwareengine::v1::CreateNetworkPeeringRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateNetworkPeering(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateNetworkPeeringRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  CreateNetworkPeering(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPeering(
      google::cloud::vmwareengine::v1::DeleteNetworkPeeringRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteNetworkPeering(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteNetworkPeeringRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPeering(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  UpdateNetworkPeering(
      google::cloud::vmwareengine::v1::UpdateNetworkPeeringRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateNetworkPeering(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateNetworkPeeringRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  UpdateNetworkPeering(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::PeeringRoute> ListPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPeeringRoutesRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
  CreateHcxActivationKey(
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateHcxActivationKey(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
  CreateHcxActivationKey(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
  ListHcxActivationKeys(
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
  GetHcxActivationKey(
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy> GetNetworkPolicy(
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request)
      override;

  StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
  ListNetworkPolicies(
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  CreateNetworkPolicy(
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateNetworkPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  CreateNetworkPolicy(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  UpdateNetworkPolicy(
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateNetworkPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  UpdateNetworkPolicy(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPolicy(
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteNetworkPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPolicy(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
  ListManagementDnsZoneBindings(
      google::cloud::vmwareengine::v1::ListManagementDnsZoneBindingsRequest
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
  GetManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::GetManagementDnsZoneBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  CreateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          CreateManagementDnsZoneBindingRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateManagementDnsZoneBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::
          CreateManagementDnsZoneBindingRequest const& request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  CreateManagementDnsZoneBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  UpdateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          UpdateManagementDnsZoneBindingRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateManagementDnsZoneBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::
          UpdateManagementDnsZoneBindingRequest const& request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  UpdateManagementDnsZoneBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          DeleteManagementDnsZoneBindingRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteManagementDnsZoneBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::
          DeleteManagementDnsZoneBindingRequest const& request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteManagementDnsZoneBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  RepairManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          RepairManagementDnsZoneBindingRequest const& request) override;

  StatusOr<google::longrunning::Operation> RepairManagementDnsZoneBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::
          RepairManagementDnsZoneBindingRequest const& request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  RepairManagementDnsZoneBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  CreateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateVmwareEngineNetwork(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  CreateVmwareEngineNetwork(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  UpdateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateVmwareEngineNetwork(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  UpdateVmwareEngineNetwork(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteVmwareEngineNetwork(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteVmwareEngineNetwork(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  GetVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  ListVmwareEngineNetworks(
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreatePrivateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  CreatePrivateConnection(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  UpdatePrivateConnection(
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdatePrivateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  UpdatePrivateConnection(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeletePrivateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeletePrivateConnection(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
  ListPrivateConnectionPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  GrantDnsBindPermission(
      google::cloud::vmwareengine::v1::GrantDnsBindPermissionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> GrantDnsBindPermission(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::GrantDnsBindPermissionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  GrantDnsBindPermission(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>
  GetDnsBindPermission(
      google::cloud::vmwareengine::v1::GetDnsBindPermissionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  RevokeDnsBindPermission(
      google::cloud::vmwareengine::v1::RevokeDnsBindPermissionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RevokeDnsBindPermission(
      ExperimentalTag, NoAwaitTag,
      google::cloud::vmwareengine::v1::RevokeDnsBindPermissionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  RevokeDnsBindPermission(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<vmwareengine_v1::VmwareEngineConnection>
MakeVmwareEngineTracingConnection(
    std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H
