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
// source: google/bigtable/v2/bigtable.proto

#include "google/cloud/bigtable/internal/bigtable_tracing_stub.h"
#include "google/cloud/internal/async_streaming_read_rpc_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/internal/streaming_read_rpc_tracing.h"

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableTracingStub::BigtableTracingStub(std::shared_ptr<BigtableStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableTracingStub::ReadRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "ReadRows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->ReadRows(context, request);
  return std::make_unique<internal::StreamingReadRpcTracing<
      google::bigtable::v2::ReadRowsResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableTracingStub::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "SampleRowKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->SampleRowKeys(context, request);
  return std::make_unique<internal::StreamingReadRpcTracing<
      google::bigtable::v2::SampleRowKeysResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

StatusOr<google::bigtable::v2::MutateRowResponse>
BigtableTracingStub::MutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::MutateRowRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "MutateRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->MutateRow(context, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableTracingStub::MutateRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "MutateRows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->MutateRows(context, request);
  return std::make_unique<internal::StreamingReadRpcTracing<
      google::bigtable::v2::MutateRowsResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableTracingStub::CheckAndMutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "CheckAndMutateRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CheckAndMutateRow(context, request));
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
BigtableTracingStub::PingAndWarm(
    grpc::ClientContext& context,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "PingAndWarm");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PingAndWarm(context, request));
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableTracingStub::ReadModifyWriteRow(
    grpc::ClientContext& context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "ReadModifyWriteRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ReadModifyWriteRow(context, request));
}

std::unique_ptr<
    internal::AsyncStreamingReadRpc<google::bigtable::v2::ReadRowsResponse>>
BigtableTracingStub::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "ReadRows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncReadRows(cq, context, request);
  return std::make_unique<internal::AsyncStreamingReadRpcTracing<
      google::bigtable::v2::ReadRowsResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableTracingStub::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "SampleRowKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncSampleRowKeys(cq, context, request);
  return std::make_unique<internal::AsyncStreamingReadRpcTracing<
      google::bigtable::v2::SampleRowKeysResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableTracingStub::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "MutateRow");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncMutateRow(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

std::unique_ptr<
    internal::AsyncStreamingReadRpc<google::bigtable::v2::MutateRowsResponse>>
BigtableTracingStub::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "MutateRows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncMutateRows(cq, context, request);
  return std::make_unique<internal::AsyncStreamingReadRpcTracing<
      google::bigtable::v2::MutateRowsResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableTracingStub::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "CheckAndMutateRow");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCheckAndMutateRow(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableTracingStub::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "ReadModifyWriteRow");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncReadModifyWriteRow(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigtableStub> MakeBigtableTracingStub(
    std::shared_ptr<BigtableStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigtableTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
