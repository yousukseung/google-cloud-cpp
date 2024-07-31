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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#include "google/cloud/privilegedaccessmanager/v1/internal/privileged_access_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PrivilegedAccessManagerTracingConnection::
    PrivilegedAccessManagerTracingConnection(
        std::shared_ptr<
            privilegedaccessmanager_v1::PrivilegedAccessManagerConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::privilegedaccessmanager::v1::CheckOnboardingStatusResponse>
PrivilegedAccessManagerTracingConnection::CheckOnboardingStatus(
    google::cloud::privilegedaccessmanager::v1::
        CheckOnboardingStatusRequest const& request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "CheckOnboardingStatus");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CheckOnboardingStatus(request));
}

StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>
PrivilegedAccessManagerTracingConnection::ListEntitlements(
    google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "ListEntitlements");
  internal::OTelScope scope(span);
  auto sr = child_->ListEntitlements(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::privilegedaccessmanager::v1::Entitlement>(std::move(span),
                                                               std::move(sr));
}

StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>
PrivilegedAccessManagerTracingConnection::SearchEntitlements(
    google::cloud::privilegedaccessmanager::v1::SearchEntitlementsRequest
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "SearchEntitlements");
  internal::OTelScope scope(span);
  auto sr = child_->SearchEntitlements(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::privilegedaccessmanager::v1::Entitlement>(std::move(span),
                                                               std::move(sr));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>
PrivilegedAccessManagerTracingConnection::GetEntitlement(
    google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "GetEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntitlement(request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::CreateEntitlement(
    google::cloud::privilegedaccessmanager::v1::CreateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "CreateEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEntitlement(request));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingConnection::CreateEntitlement(
    NoAwaitTag,
    google::cloud::privilegedaccessmanager::v1::CreateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "CreateEntitlement");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateEntitlement(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::CreateEntitlement(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "CreateEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateEntitlement(operation));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::DeleteEntitlement(
    google::cloud::privilegedaccessmanager::v1::DeleteEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "DeleteEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEntitlement(request));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingConnection::DeleteEntitlement(
    NoAwaitTag,
    google::cloud::privilegedaccessmanager::v1::DeleteEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "DeleteEntitlement");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteEntitlement(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::DeleteEntitlement(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "DeleteEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteEntitlement(operation));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::UpdateEntitlement(
    google::cloud::privilegedaccessmanager::v1::UpdateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "UpdateEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateEntitlement(request));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingConnection::UpdateEntitlement(
    NoAwaitTag,
    google::cloud::privilegedaccessmanager::v1::UpdateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "UpdateEntitlement");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateEntitlement(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
PrivilegedAccessManagerTracingConnection::UpdateEntitlement(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "UpdateEntitlement");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateEntitlement(operation));
}

StreamRange<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::ListGrants(
    google::cloud::privilegedaccessmanager::v1::ListGrantsRequest request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "ListGrants");
  internal::OTelScope scope(span);
  auto sr = child_->ListGrants(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::privilegedaccessmanager::v1::Grant>(std::move(span),
                                                         std::move(sr));
}

StreamRange<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::SearchGrants(
    google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "SearchGrants");
  internal::OTelScope scope(span);
  auto sr = child_->SearchGrants(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::privilegedaccessmanager::v1::Grant>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::GetGrant(
    google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "GetGrant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGrant(request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::CreateGrant(
    google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "CreateGrant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateGrant(request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::ApproveGrant(
    google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "ApproveGrant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApproveGrant(request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingConnection::DenyGrant(
    google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "DenyGrant");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DenyGrant(request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>
PrivilegedAccessManagerTracingConnection::RevokeGrant(
    google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "RevokeGrant");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RevokeGrant(request));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingConnection::RevokeGrant(
    NoAwaitTag,
    google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
        request) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "RevokeGrant");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->RevokeGrant(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>
PrivilegedAccessManagerTracingConnection::RevokeGrant(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "privilegedaccessmanager_v1::PrivilegedAccessManagerConnection::"
      "RevokeGrant");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RevokeGrant(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<privilegedaccessmanager_v1::PrivilegedAccessManagerConnection>
MakePrivilegedAccessManagerTracingConnection(
    std::shared_ptr<
        privilegedaccessmanager_v1::PrivilegedAccessManagerConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PrivilegedAccessManagerTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1_internal
}  // namespace cloud
}  // namespace google
