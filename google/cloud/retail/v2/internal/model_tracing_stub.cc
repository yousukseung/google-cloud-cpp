// Copyright 2023 Google LLC
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
// source: google/cloud/retail/v2/model_service.proto

#include "google/cloud/retail/v2/internal/model_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ModelServiceTracingStub::ModelServiceTracingStub(
    std::shared_ptr<ModelServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::CreateModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "CreateModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncCreateModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceTracingStub::GetModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService", "GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetModel(context, request));
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceTracingStub::PauseModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::PauseModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "PauseModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PauseModel(context, request));
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceTracingStub::ResumeModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ResumeModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "ResumeModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ResumeModel(context, request));
}

Status ModelServiceTracingStub::DeleteModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "DeleteModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteModel(context, request));
}

StatusOr<google::cloud::retail::v2::ListModelsResponse>
ModelServiceTracingStub::ListModels(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListModelsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "ListModels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListModels(context, request));
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceTracingStub::UpdateModel(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateModel(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncTuneModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::TuneModelRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ModelService",
                                     "TuneModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncTuneModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ModelServiceTracingStub::AsyncGetOperation(
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

future<Status> ModelServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ModelServiceStub> MakeModelServiceTracingStub(
    std::shared_ptr<ModelServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ModelServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
