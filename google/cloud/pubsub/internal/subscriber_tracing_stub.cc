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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/internal/subscriber_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SubscriberTracingStub::SubscriberTracingStub(
    std::shared_ptr<SubscriberStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriberTracingStub::CreateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::Subscription const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "CreateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSubscription(context, request));
}

StatusOr<google::pubsub::v1::Subscription>
SubscriberTracingStub::GetSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "GetSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSubscription(context, request));
}

StatusOr<google::pubsub::v1::Subscription>
SubscriberTracingStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "UpdateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSubscription(context, request));
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
SubscriberTracingStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "ListSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSubscriptions(context, request));
}

Status SubscriberTracingStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "DeleteSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSubscription(context, request));
}

StatusOr<google::pubsub::v1::PullResponse> SubscriberTracingStub::Pull(
    grpc::ClientContext& context,
    google::pubsub::v1::PullRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "Pull");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Pull(context, request));
}

std::unique_ptr<
    AsyncStreamingReadWriteRpc<google::pubsub::v1::StreamingPullRequest,
                               google::pubsub::v1::StreamingPullResponse>>
SubscriberTracingStub::AsyncStreamingPull(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "StreamingPull");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncStreamingPull(cq, context);
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::pubsub::v1::StreamingPullRequest,
      google::pubsub::v1::StreamingPullResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

Status SubscriberTracingStub::ModifyPushConfig(
    grpc::ClientContext& context,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "ModifyPushConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ModifyPushConfig(context, request));
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberTracingStub::GetSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "GetSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSnapshot(context, request));
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
SubscriberTracingStub::ListSnapshots(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "ListSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSnapshots(context, request));
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberTracingStub::CreateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "CreateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSnapshot(context, request));
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberTracingStub::UpdateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "UpdateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSnapshot(context, request));
}

Status SubscriberTracingStub::DeleteSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "DeleteSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSnapshot(context, request));
}

StatusOr<google::pubsub::v1::SeekResponse> SubscriberTracingStub::Seek(
    grpc::ClientContext& context,
    google::pubsub::v1::SeekRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "Seek");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Seek(context, request));
}

future<Status> SubscriberTracingStub::AsyncModifyAckDeadline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::pubsub::v1::ModifyAckDeadlineRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Subscriber",
                                     "ModifyAckDeadline");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncModifyAckDeadline(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> SubscriberTracingStub::AsyncAcknowledge(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::pubsub::v1::AcknowledgeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Subscriber", "Acknowledge");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncAcknowledge(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SubscriberStub> MakeSubscriberTracingStub(
    std::shared_ptr<SubscriberStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SubscriberTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
