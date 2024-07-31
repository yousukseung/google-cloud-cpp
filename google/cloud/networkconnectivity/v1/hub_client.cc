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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/v1/hub_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkconnectivity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HubServiceClient::HubServiceClient(
    std::shared_ptr<HubServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
HubServiceClient::~HubServiceClient() = default;

StreamRange<google::cloud::networkconnectivity::v1::Hub>
HubServiceClient::ListHubs(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListHubsRequest request;
  request.set_parent(parent);
  return connection_->ListHubs(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Hub>
HubServiceClient::ListHubs(
    google::cloud::networkconnectivity::v1::ListHubsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListHubs(std::move(request));
}

StatusOr<google::cloud::networkconnectivity::v1::Hub> HubServiceClient::GetHub(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::GetHubRequest request;
  request.set_name(name);
  return connection_->GetHub(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Hub> HubServiceClient::GetHub(
    google::cloud::networkconnectivity::v1::GetHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetHub(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::CreateHub(
    std::string const& parent,
    google::cloud::networkconnectivity::v1::Hub const& hub,
    std::string const& hub_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::CreateHubRequest request;
  request.set_parent(parent);
  *request.mutable_hub() = hub;
  request.set_hub_id(hub_id);
  return connection_->CreateHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::CreateHub(
    NoAwaitTag, std::string const& parent,
    google::cloud::networkconnectivity::v1::Hub const& hub,
    std::string const& hub_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::CreateHubRequest request;
  request.set_parent(parent);
  *request.mutable_hub() = hub;
  request.set_hub_id(hub_id);
  return connection_->CreateHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::CreateHub(
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::CreateHub(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::CreateHub(google::longrunning::Operation const& operation,
                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateHub(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::UpdateHub(
    google::cloud::networkconnectivity::v1::Hub const& hub,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::UpdateHubRequest request;
  *request.mutable_hub() = hub;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::UpdateHub(
    NoAwaitTag, google::cloud::networkconnectivity::v1::Hub const& hub,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::UpdateHubRequest request;
  *request.mutable_hub() = hub;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::UpdateHub(
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::UpdateHub(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceClient::UpdateHub(google::longrunning::Operation const& operation,
                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateHub(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteHub(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::DeleteHubRequest request;
  request.set_name(name);
  return connection_->DeleteHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::DeleteHub(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::DeleteHubRequest request;
  request.set_name(name);
  return connection_->DeleteHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteHub(
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHub(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::DeleteHub(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHub(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteHub(google::longrunning::Operation const& operation,
                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteHub(operation);
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::ListHubSpokes(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListHubSpokesRequest request;
  request.set_name(name);
  return connection_->ListHubSpokes(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::ListHubSpokes(
    google::cloud::networkconnectivity::v1::ListHubSpokesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListHubSpokes(std::move(request));
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::ListSpokes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListSpokesRequest request;
  request.set_parent(parent);
  return connection_->ListSpokes(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::ListSpokes(
    google::cloud::networkconnectivity::v1::ListSpokesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSpokes(std::move(request));
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::GetSpoke(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::GetSpokeRequest request;
  request.set_name(name);
  return connection_->GetSpoke(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceClient::GetSpoke(
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSpoke(request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::CreateSpoke(
    std::string const& parent,
    google::cloud::networkconnectivity::v1::Spoke const& spoke,
    std::string const& spoke_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::CreateSpokeRequest request;
  request.set_parent(parent);
  *request.mutable_spoke() = spoke;
  request.set_spoke_id(spoke_id);
  return connection_->CreateSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::CreateSpoke(
    NoAwaitTag, std::string const& parent,
    google::cloud::networkconnectivity::v1::Spoke const& spoke,
    std::string const& spoke_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::CreateSpokeRequest request;
  request.set_parent(parent);
  *request.mutable_spoke() = spoke;
  request.set_spoke_id(spoke_id);
  return connection_->CreateSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::CreateSpoke(
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::CreateSpoke(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::CreateSpoke(google::longrunning::Operation const& operation,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSpoke(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::UpdateSpoke(
    google::cloud::networkconnectivity::v1::Spoke const& spoke,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::UpdateSpokeRequest request;
  *request.mutable_spoke() = spoke;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::UpdateSpoke(
    NoAwaitTag, google::cloud::networkconnectivity::v1::Spoke const& spoke,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::UpdateSpokeRequest request;
  *request.mutable_spoke() = spoke;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::UpdateSpoke(
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::UpdateSpoke(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceClient::UpdateSpoke(google::longrunning::Operation const& operation,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSpoke(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
HubServiceClient::RejectHubSpoke(std::string const& name,
                                 std::string const& spoke_uri, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::RejectHubSpokeRequest request;
  request.set_name(name);
  request.set_spoke_uri(spoke_uri);
  return connection_->RejectHubSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::RejectHubSpoke(
    NoAwaitTag, std::string const& name, std::string const& spoke_uri,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::RejectHubSpokeRequest request;
  request.set_name(name);
  request.set_spoke_uri(spoke_uri);
  return connection_->RejectHubSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
HubServiceClient::RejectHubSpoke(
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RejectHubSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::RejectHubSpoke(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RejectHubSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
HubServiceClient::RejectHubSpoke(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RejectHubSpoke(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
HubServiceClient::AcceptHubSpoke(std::string const& name,
                                 std::string const& spoke_uri, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest request;
  request.set_name(name);
  request.set_spoke_uri(spoke_uri);
  return connection_->AcceptHubSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::AcceptHubSpoke(
    NoAwaitTag, std::string const& name, std::string const& spoke_uri,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest request;
  request.set_name(name);
  request.set_spoke_uri(spoke_uri);
  return connection_->AcceptHubSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
HubServiceClient::AcceptHubSpoke(
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AcceptHubSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::AcceptHubSpoke(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AcceptHubSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
HubServiceClient::AcceptHubSpoke(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AcceptHubSpoke(operation);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteSpoke(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::DeleteSpokeRequest request;
  request.set_name(name);
  return connection_->DeleteSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::DeleteSpoke(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::DeleteSpokeRequest request;
  request.set_name(name);
  return connection_->DeleteSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteSpoke(
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSpoke(request);
}

StatusOr<google::longrunning::Operation> HubServiceClient::DeleteSpoke(
    NoAwaitTag,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSpoke(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceClient::DeleteSpoke(google::longrunning::Operation const& operation,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSpoke(operation);
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceClient::GetRouteTable(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::GetRouteTableRequest request;
  request.set_name(name);
  return connection_->GetRouteTable(request);
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceClient::GetRouteTable(
    google::cloud::networkconnectivity::v1::GetRouteTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRouteTable(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceClient::GetRoute(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::GetRouteRequest request;
  request.set_name(name);
  return connection_->GetRoute(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceClient::GetRoute(
    google::cloud::networkconnectivity::v1::GetRouteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRoute(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Route>
HubServiceClient::ListRoutes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListRoutesRequest request;
  request.set_parent(parent);
  return connection_->ListRoutes(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Route>
HubServiceClient::ListRoutes(
    google::cloud::networkconnectivity::v1::ListRoutesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRoutes(std::move(request));
}

StreamRange<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceClient::ListRouteTables(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListRouteTablesRequest request;
  request.set_parent(parent);
  return connection_->ListRouteTables(request);
}

StreamRange<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceClient::ListRouteTables(
    google::cloud::networkconnectivity::v1::ListRouteTablesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRouteTables(std::move(request));
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceClient::GetGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::GetGroupRequest request;
  request.set_name(name);
  return connection_->GetGroup(request);
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceClient::GetGroup(
    google::cloud::networkconnectivity::v1::GetGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGroup(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Group>
HubServiceClient::ListGroups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::networkconnectivity::v1::ListGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListGroups(request);
}

StreamRange<google::cloud::networkconnectivity::v1::Group>
HubServiceClient::ListGroups(
    google::cloud::networkconnectivity::v1::ListGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGroups(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1
}  // namespace cloud
}  // namespace google
