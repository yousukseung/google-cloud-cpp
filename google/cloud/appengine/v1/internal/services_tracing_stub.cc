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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/services_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServicesTracingStub::ServicesTracingStub(std::shared_ptr<ServicesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::appengine::v1::ListServicesResponse>
ServicesTracingStub::ListServices(
    grpc::ClientContext& context,
    google::appengine::v1::ListServicesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Services", "ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServices(context, request));
}

StatusOr<google::appengine::v1::Service> ServicesTracingStub::GetService(
    grpc::ClientContext& context,
    google::appengine::v1::GetServiceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Services", "GetService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetService(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServicesTracingStub::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::UpdateServiceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Services", "UpdateService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncUpdateService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ServicesTracingStub::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::DeleteServiceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Services", "DeleteService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDeleteService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ServicesTracingStub::AsyncGetOperation(
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

future<Status> ServicesTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ServicesStub> MakeServicesTracingStub(
    std::shared_ptr<ServicesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ServicesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
