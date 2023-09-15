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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#include "google/cloud/dialogflow_es/internal/conversation_profiles_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationProfilesTracingStub::ConversationProfilesTracingStub(
    std::shared_ptr<ConversationProfilesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::ListConversationProfilesResponse>
ConversationProfilesTracingStub::ListConversationProfiles(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationProfilesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "ListConversationProfiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListConversationProfiles(context, request));
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesTracingStub::GetConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "GetConversationProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConversationProfile(context, request));
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesTracingStub::CreateConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "CreateConversationProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateConversationProfile(context, request));
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesTracingStub::UpdateConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "UpdateConversationProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateConversationProfile(context, request));
}

Status ConversationProfilesTracingStub::DeleteConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "DeleteConversationProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteConversationProfile(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesTracingStub::AsyncSetSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "SetSuggestionFeatureConfig");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncSetSuggestionFeatureConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesTracingStub::AsyncClearSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationProfiles",
                             "ClearSuggestionFeatureConfig");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncClearSuggestionFeatureConfig(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesTracingStub::AsyncGetOperation(
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

future<Status> ConversationProfilesTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ConversationProfilesStub> MakeConversationProfilesTracingStub(
    std::shared_ptr<ConversationProfilesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConversationProfilesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
