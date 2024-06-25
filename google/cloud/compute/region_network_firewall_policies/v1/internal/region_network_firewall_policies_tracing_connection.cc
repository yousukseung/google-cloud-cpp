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
// source:
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionNetworkFirewallPoliciesTracingConnection::
    RegionNetworkFirewallPoliciesTracingConnection(
        std::shared_ptr<compute_region_network_firewall_policies_v1::
                            RegionNetworkFirewallPoliciesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::AddAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddAssociation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddAssociation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::AddAssociation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddAssociation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->AddAssociation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::AddAssociation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddAssociation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->AddAssociation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::AddRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::AddRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddRule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->AddRule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::AddRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::AddRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddRule(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::CloneRules(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::CloneRules");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CloneRules(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::CloneRules(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::CloneRules");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CloneRules(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::CloneRules(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::CloneRules");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CloneRules(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::DeleteFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::DeleteFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteFirewallPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::DeleteFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFirewallPolicy(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesTracingConnection::GetFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::GetFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
RegionNetworkFirewallPoliciesTracingConnection::GetAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::GetAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAssociation(request));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
RegionNetworkFirewallPoliciesTracingConnection::GetEffectiveFirewalls(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetEffectiveFirewallsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::GetEffectiveFirewalls");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEffectiveFirewalls(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
RegionNetworkFirewallPoliciesTracingConnection::GetRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::GetRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::InsertFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::InsertFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->InsertFirewallPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::InsertFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertFirewallPolicy(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesTracingConnection::
    ListRegionNetworkFirewallPolicies(
        google::cloud::cpp::compute::region_network_firewall_policies::v1::
            ListRegionNetworkFirewallPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::"
      "ListRegionNetworkFirewallPolicies");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionNetworkFirewallPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::FirewallPolicy>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::PatchFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchFirewallPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::PatchFirewallPolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->PatchFirewallPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::PatchFirewallPolicy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchFirewallPolicy(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::PatchRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::PatchRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchRule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PatchRule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::PatchRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::PatchRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchRule(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::RemoveAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveAssociation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveAssociation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::RemoveAssociation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveAssociation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RemoveAssociation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::RemoveAssociation(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveAssociation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->RemoveAssociation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::RemoveRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesTracingConnection::RemoveRule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveRule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->RemoveRule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesTracingConnection::RemoveRule(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::RemoveRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveRule(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionNetworkFirewallPoliciesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_firewall_policies_v1::"
      "RegionNetworkFirewallPoliciesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_network_firewall_policies_v1::
                    RegionNetworkFirewallPoliciesConnection>
MakeRegionNetworkFirewallPoliciesTracingConnection(
    std::shared_ptr<compute_region_network_firewall_policies_v1::
                        RegionNetworkFirewallPoliciesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionNetworkFirewallPoliciesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
