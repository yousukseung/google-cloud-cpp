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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#include "google/cloud/servicedirectory/v1/internal/registration_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegistrationServiceTracingStub::RegistrationServiceTracingStub(
    std::shared_ptr<RegistrationServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceTracingStub::CreateNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService",
      "CreateNamespace");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNamespace(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
RegistrationServiceTracingStub::ListNamespaces(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListNamespacesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "ListNamespaces");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNamespaces(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceTracingStub::GetNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetNamespaceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "GetNamespace");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNamespace(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceTracingStub::UpdateNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService",
      "UpdateNamespace");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateNamespace(context, request));
}

Status RegistrationServiceTracingStub::DeleteNamespace(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService",
      "DeleteNamespace");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteNamespace(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceTracingStub::CreateService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "CreateService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateService(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
RegistrationServiceTracingStub::ListServices(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServices(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceTracingStub::GetService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "GetService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetService(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceTracingStub::UpdateService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "UpdateService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateService(context, request));
}

Status RegistrationServiceTracingStub::DeleteService(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "DeleteService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteService(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceTracingStub::CreateEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::CreateEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "CreateEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEndpoint(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
RegistrationServiceTracingStub::ListEndpoints(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::ListEndpointsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "ListEndpoints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEndpoints(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceTracingStub::GetEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::GetEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "GetEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEndpoint(context, request));
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceTracingStub::UpdateEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "UpdateEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEndpoint(context, request));
}

Status RegistrationServiceTracingStub::DeleteEndpoint(
    grpc::ClientContext& context,
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "DeleteEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEndpoint(context, request));
}

StatusOr<google::iam::v1::Policy> RegistrationServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> RegistrationServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.servicedirectory.v1.RegistrationService",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<RegistrationServiceStub> MakeRegistrationServiceTracingStub(
    std::shared_ptr<RegistrationServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<RegistrationServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google
