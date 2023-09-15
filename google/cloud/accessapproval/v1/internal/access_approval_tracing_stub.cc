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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#include "google/cloud/accessapproval/v1/internal/access_approval_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace accessapproval_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AccessApprovalTracingStub::AccessApprovalTracingStub(
    std::shared_ptr<AccessApprovalStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::accessapproval::v1::ListApprovalRequestsResponse>
AccessApprovalTracingStub::ListApprovalRequests(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::ListApprovalRequestsMessage const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.accessapproval.v1.AccessApproval", "ListApprovalRequests");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApprovalRequests(context, request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingStub::GetApprovalRequest(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.accessapproval.v1.AccessApproval", "GetApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApprovalRequest(context, request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingStub::ApproveApprovalRequest(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "ApproveApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApproveApprovalRequest(context, request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingStub::DismissApprovalRequest(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "DismissApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DismissApprovalRequest(context, request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalTracingStub::InvalidateApprovalRequest(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "InvalidateApprovalRequest");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->InvalidateApprovalRequest(context, request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalTracingStub::GetAccessApprovalSettings(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "GetAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAccessApprovalSettings(context, request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalTracingStub::UpdateAccessApprovalSettings(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::
        UpdateAccessApprovalSettingsMessage const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "UpdateAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateAccessApprovalSettings(context, request));
}

Status AccessApprovalTracingStub::DeleteAccessApprovalSettings(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::
        DeleteAccessApprovalSettingsMessage const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "DeleteAccessApprovalSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteAccessApprovalSettings(context, request));
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalTracingStub::GetAccessApprovalServiceAccount(
    grpc::ClientContext& context,
    google::cloud::accessapproval::v1::
        GetAccessApprovalServiceAccountMessage const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.accessapproval.v1.AccessApproval",
                             "GetAccessApprovalServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetAccessApprovalServiceAccount(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AccessApprovalStub> MakeAccessApprovalTracingStub(
    std::shared_ptr<AccessApprovalStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AccessApprovalTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1_internal
}  // namespace cloud
}  // namespace google
