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
// source: google/cloud/dialogflow/cx/v3/transition_route_group.proto

#include "google/cloud/dialogflow_cx/internal/transition_route_groups_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TransitionRouteGroupsTracingStub::TransitionRouteGroupsTracingStub(
    std::shared_ptr<TransitionRouteGroupsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsResponse>
TransitionRouteGroupsTracingStub::ListTransitionRouteGroups(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.TransitionRouteGroups",
      "ListTransitionRouteGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTransitionRouteGroups(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsTracingStub::GetTransitionRouteGroup(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetTransitionRouteGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.TransitionRouteGroups",
      "GetTransitionRouteGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTransitionRouteGroup(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsTracingStub::CreateTransitionRouteGroup(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateTransitionRouteGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.TransitionRouteGroups",
      "CreateTransitionRouteGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateTransitionRouteGroup(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsTracingStub::UpdateTransitionRouteGroup(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateTransitionRouteGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.TransitionRouteGroups",
      "UpdateTransitionRouteGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateTransitionRouteGroup(context, request));
}

Status TransitionRouteGroupsTracingStub::DeleteTransitionRouteGroup(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteTransitionRouteGroupRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.TransitionRouteGroups",
      "DeleteTransitionRouteGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteTransitionRouteGroup(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TransitionRouteGroupsStub> MakeTransitionRouteGroupsTracingStub(
    std::shared_ptr<TransitionRouteGroupsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TransitionRouteGroupsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
