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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstanceAdminTracingStub::InstanceAdminTracingStub(
    std::shared_ptr<InstanceAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminTracingStub::ListInstanceConfigs(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "ListInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstanceConfigs(context, request));
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminTracingStub::GetInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "GetInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstanceConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminTracingStub::AsyncCreateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "CreateInstanceConfig");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateInstanceConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminTracingStub::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "UpdateInstanceConfig");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUpdateInstanceConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status InstanceAdminTracingStub::DeleteInstanceConfig(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "DeleteInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteInstanceConfig(context, request));
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminTracingStub::ListInstanceConfigOperations(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.spanner.admin.instance.v1.InstanceAdmin",
                             "ListInstanceConfigOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListInstanceConfigOperations(context, request));
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "CreateInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "UpdateInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUpdateInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status InstanceAdminTracingStub::DeleteInstance(
    grpc::ClientContext& context,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteInstance(context, request));
}

StatusOr<google::iam::v1::Policy> InstanceAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> InstanceAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.spanner.admin.instance.v1.InstanceAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> InstanceAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<InstanceAdminStub> MakeInstanceAdminTracingStub(
    std::shared_ptr<InstanceAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<InstanceAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
