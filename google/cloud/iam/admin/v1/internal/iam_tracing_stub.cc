// Copyright 2021 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/admin/v1/internal/iam_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace iam_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IAMTracingStub::IAMTracingStub(std::shared_ptr<IAMStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
IAMTracingStub::ListServiceAccounts(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListServiceAccountsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "ListServiceAccounts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceAccounts(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingStub::GetServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "GetServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServiceAccount(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingStub::CreateServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "CreateServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateServiceAccount(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMTracingStub::PatchServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "PatchServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PatchServiceAccount(context, request));
}

Status IAMTracingStub::DeleteServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "DeleteServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteServiceAccount(context, request));
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMTracingStub::UndeleteServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "UndeleteServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UndeleteServiceAccount(context, request));
}

Status IAMTracingStub::EnableServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "EnableServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->EnableServiceAccount(context, request));
}

Status IAMTracingStub::DisableServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "DisableServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DisableServiceAccount(context, request));
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMTracingStub::ListServiceAccountKeys(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "ListServiceAccountKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceAccountKeys(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingStub::GetServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "GetServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServiceAccountKey(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingStub::CreateServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "CreateServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateServiceAccountKey(context, request));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMTracingStub::UploadServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "UploadServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UploadServiceAccountKey(context, request));
}

Status IAMTracingStub::DeleteServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "DeleteServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteServiceAccountKey(context, request));
}

Status IAMTracingStub::DisableServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::DisableServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "DisableServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DisableServiceAccountKey(context, request));
}

Status IAMTracingStub::EnableServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::EnableServiceAccountKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "EnableServiceAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->EnableServiceAccountKey(context, request));
}

StatusOr<google::iam::v1::Policy> IAMTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> IAMTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
IAMTracingStub::QueryGrantableRoles(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryGrantableRolesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "QueryGrantableRoles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->QueryGrantableRoles(context, request));
}

StatusOr<google::iam::admin::v1::ListRolesResponse> IAMTracingStub::ListRoles(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListRolesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "ListRoles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListRoles(context, request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingStub::GetRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetRoleRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "GetRole");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetRole(context, request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingStub::CreateRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateRoleRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "CreateRole");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateRole(context, request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingStub::UpdateRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "UpdateRole");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateRole(context, request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingStub::DeleteRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "DeleteRole");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteRole(context, request));
}

StatusOr<google::iam::admin::v1::Role> IAMTracingStub::UndeleteRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "UndeleteRole");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UndeleteRole(context, request));
}

StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
IAMTracingStub::QueryTestablePermissions(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryTestablePermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "QueryTestablePermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->QueryTestablePermissions(context, request));
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMTracingStub::QueryAuditableServices(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM",
                                     "QueryAuditableServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->QueryAuditableServices(context, request));
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> IAMTracingStub::LintPolicy(
    grpc::ClientContext& context,
    google::iam::admin::v1::LintPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.iam.admin.v1.IAM", "LintPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->LintPolicy(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<IAMStub> MakeIAMTracingStub(std::shared_ptr<IAMStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<IAMTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_admin_v1_internal
}  // namespace cloud
}  // namespace google
