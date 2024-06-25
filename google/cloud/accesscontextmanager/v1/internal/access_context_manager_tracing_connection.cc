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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AccessContextManagerTracingConnection::AccessContextManagerTracingConnection(
    std::shared_ptr<accesscontextmanager_v1::AccessContextManagerConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerTracingConnection::ListAccessPolicies(
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ListAccessPolicies");
  internal::OTelScope scope(span);
  auto sr = child_->ListAccessPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::identity::accesscontextmanager::v1::AccessPolicy>(std::move(span),
                                                                std::move(sr));
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerTracingConnection::GetAccessPolicy(
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "GetAccessPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAccessPolicy(request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::CreateAccessPolicy(
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAccessPolicy(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::CreateAccessPolicy(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateAccessPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::CreateAccessPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateAccessPolicy(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::UpdateAccessPolicy(
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAccessPolicy(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::UpdateAccessPolicy(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateAccessPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::UpdateAccessPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAccessPolicy(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessPolicy(
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAccessPolicy(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::DeleteAccessPolicy(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessPolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteAccessPolicy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessPolicy(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAccessPolicy(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerTracingConnection::ListAccessLevels(
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ListAccessLevels");
  internal::OTelScope scope(span);
  auto sr = child_->ListAccessLevels(std::move(request));
  return internal::MakeTracedStreamRange<
      google::identity::accesscontextmanager::v1::AccessLevel>(std::move(span),
                                                               std::move(sr));
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerTracingConnection::GetAccessLevel(
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "GetAccessLevel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAccessLevel(request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::CreateAccessLevel(
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateAccessLevel(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::CreateAccessLevel(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessLevel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateAccessLevel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::CreateAccessLevel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateAccessLevel(ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::UpdateAccessLevel(
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAccessLevel(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::UpdateAccessLevel(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessLevel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateAccessLevel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::UpdateAccessLevel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpdateAccessLevel(ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessLevel(
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAccessLevel(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::DeleteAccessLevel(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessLevel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteAccessLevel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessLevel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteAccessLevel");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteAccessLevel(ExperimentalTag{}, operation));
}

future<StatusOr<
    google::identity::accesscontextmanager::v1::ReplaceAccessLevelsResponse>>
AccessContextManagerTracingConnection::ReplaceAccessLevels(
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceAccessLevels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReplaceAccessLevels(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::ReplaceAccessLevels(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceAccessLevels");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->ReplaceAccessLevels(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<
    google::identity::accesscontextmanager::v1::ReplaceAccessLevelsResponse>>
AccessContextManagerTracingConnection::ReplaceAccessLevels(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceAccessLevels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReplaceAccessLevels(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerTracingConnection::ListServicePerimeters(
    google::identity::accesscontextmanager::v1::ListServicePerimetersRequest
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ListServicePerimeters");
  internal::OTelScope scope(span);
  auto sr = child_->ListServicePerimeters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::identity::accesscontextmanager::v1::ServicePerimeter>(
      std::move(span), std::move(sr));
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerTracingConnection::GetServicePerimeter(
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "GetServicePerimeter");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServicePerimeter(request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::CreateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateServicePerimeter(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::CreateServicePerimeter(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateServicePerimeter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateServicePerimeter(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::CreateServicePerimeter(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateServicePerimeter(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::UpdateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateServicePerimeter(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::UpdateServicePerimeter(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateServicePerimeter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateServicePerimeter(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::UpdateServicePerimeter(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateServicePerimeter(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteServicePerimeter(
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteServicePerimeter(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::DeleteServicePerimeter(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteServicePerimeter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteServicePerimeter(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteServicePerimeter(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteServicePerimeter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteServicePerimeter(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    ReplaceServicePerimetersResponse>>
AccessContextManagerTracingConnection::ReplaceServicePerimeters(
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceServicePerimeters");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReplaceServicePerimeters(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::ReplaceServicePerimeters(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceServicePerimeters");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ReplaceServicePerimeters(ExperimentalTag{}, NoAwaitTag{},
                                              request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    ReplaceServicePerimetersResponse>>
AccessContextManagerTracingConnection::ReplaceServicePerimeters(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ReplaceServicePerimeters");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReplaceServicePerimeters(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    CommitServicePerimetersResponse>>
AccessContextManagerTracingConnection::CommitServicePerimeters(
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CommitServicePerimeters");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CommitServicePerimeters(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::CommitServicePerimeters(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CommitServicePerimeters");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CommitServicePerimeters(ExperimentalTag{}, NoAwaitTag{},
                                             request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    CommitServicePerimetersResponse>>
AccessContextManagerTracingConnection::CommitServicePerimeters(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CommitServicePerimeters");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CommitServicePerimeters(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerTracingConnection::ListGcpUserAccessBindings(
    google::identity::accesscontextmanager::v1::ListGcpUserAccessBindingsRequest
        request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "ListGcpUserAccessBindings");
  internal::OTelScope scope(span);
  auto sr = child_->ListGcpUserAccessBindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>(
      std::move(span), std::move(sr));
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerTracingConnection::GetGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "GetGcpUserAccessBinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGcpUserAccessBinding(request));
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::CreateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateGcpUserAccessBinding(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::CreateGcpUserAccessBinding(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateGcpUserAccessBinding");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateGcpUserAccessBinding(ExperimentalTag{}, NoAwaitTag{},
                                                request));
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::CreateGcpUserAccessBinding(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "CreateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateGcpUserAccessBinding(
                                                ExperimentalTag{}, operation));
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::UpdateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateGcpUserAccessBinding(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::UpdateGcpUserAccessBinding(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateGcpUserAccessBinding");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateGcpUserAccessBinding(ExperimentalTag{}, NoAwaitTag{},
                                                request));
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::UpdateGcpUserAccessBinding(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "UpdateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateGcpUserAccessBinding(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    GcpUserAccessBindingOperationMetadata>>
AccessContextManagerTracingConnection::DeleteGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteGcpUserAccessBinding(request));
}

StatusOr<google::longrunning::Operation>
AccessContextManagerTracingConnection::DeleteGcpUserAccessBinding(
    ExperimentalTag, NoAwaitTag,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteGcpUserAccessBinding");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteGcpUserAccessBinding(ExperimentalTag{}, NoAwaitTag{},
                                                request));
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    GcpUserAccessBindingOperationMetadata>>
AccessContextManagerTracingConnection::DeleteGcpUserAccessBinding(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "DeleteGcpUserAccessBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteGcpUserAccessBinding(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::iam::v1::Policy>
AccessContextManagerTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
AccessContextManagerTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "accesscontextmanager_v1::AccessContextManagerConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<accesscontextmanager_v1::AccessContextManagerConnection>
MakeAccessContextManagerTracingConnection(
    std::shared_ptr<accesscontextmanager_v1::AccessContextManagerConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AccessContextManagerTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google
