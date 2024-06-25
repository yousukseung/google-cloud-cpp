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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#include "google/cloud/compute/subnetworks/v1/internal/subnetworks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_subnetworks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SubnetworksTracingConnection::SubnetworksTracingConnection(
    std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::SubnetworksScopedList>>
SubnetworksTracingConnection::AggregatedListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        AggregatedListSubnetworksRequest request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::"
      "AggregatedListSubnetworks");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListSubnetworks(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::SubnetworksScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::DeleteSubnetwork(
    google::cloud::cpp::compute::subnetworks::v1::DeleteSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::DeleteSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSubnetwork(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SubnetworksTracingConnection::DeleteSubnetwork(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::subnetworks::v1::DeleteSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::DeleteSubnetwork");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteSubnetwork(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::DeleteSubnetwork(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::DeleteSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteSubnetwork(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::ExpandIpCidrRange(
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::ExpandIpCidrRange");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExpandIpCidrRange(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SubnetworksTracingConnection::ExpandIpCidrRange(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::ExpandIpCidrRange");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->ExpandIpCidrRange(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::ExpandIpCidrRange(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::ExpandIpCidrRange");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->ExpandIpCidrRange(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksTracingConnection::GetSubnetwork(
    google::cloud::cpp::compute::subnetworks::v1::GetSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::GetSubnetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSubnetwork(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::InsertSubnetwork(
    google::cloud::cpp::compute::subnetworks::v1::InsertSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::InsertSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertSubnetwork(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SubnetworksTracingConnection::InsertSubnetwork(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::subnetworks::v1::InsertSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::InsertSubnetwork");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->InsertSubnetwork(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::InsertSubnetwork(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::InsertSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->InsertSubnetwork(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksTracingConnection::ListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::ListSubnetworks");
  internal::OTelScope scope(span);
  auto sr = child_->ListSubnetworks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Subnetwork>(std::move(span),
                                                   std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>
SubnetworksTracingConnection::ListUsable(
    google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::ListUsable");
  internal::OTelScope scope(span);
  auto sr = child_->ListUsable(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::UsableSubnetwork>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::PatchSubnetwork(
    google::cloud::cpp::compute::subnetworks::v1::PatchSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::PatchSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchSubnetwork(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SubnetworksTracingConnection::PatchSubnetwork(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::subnetworks::v1::PatchSubnetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::PatchSubnetwork");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PatchSubnetwork(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::PatchSubnetwork(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::PatchSubnetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->PatchSubnetwork(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::SetPrivateIpGoogleAccess(
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::"
      "SetPrivateIpGoogleAccess");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetPrivateIpGoogleAccess(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
SubnetworksTracingConnection::SetPrivateIpGoogleAccess(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::"
      "SetPrivateIpGoogleAccess");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SetPrivateIpGoogleAccess(ExperimentalTag{}, NoAwaitTag{},
                                              request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksTracingConnection::SetPrivateIpGoogleAccess(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::"
      "SetPrivateIpGoogleAccess");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetPrivateIpGoogleAccess(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
SubnetworksTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::subnetworks::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_subnetworks_v1::SubnetworksConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection>
MakeSubnetworksTracingConnection(
    std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SubnetworksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1_internal
}  // namespace cloud
}  // namespace google
