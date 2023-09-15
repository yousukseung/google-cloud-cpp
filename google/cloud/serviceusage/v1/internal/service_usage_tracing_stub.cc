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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/v1/internal/service_usage_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace serviceusage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceUsageTracingStub::ServiceUsageTracingStub(
    std::shared_ptr<ServiceUsageStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageTracingStub::AsyncEnableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::EnableServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "EnableService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncEnableService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageTracingStub::AsyncDisableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::DisableServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "DisableService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncDisableService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::serviceusage::v1::Service>
ServiceUsageTracingStub::GetService(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "GetService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetService(context, request));
}

StatusOr<google::api::serviceusage::v1::ListServicesResponse>
ServiceUsageTracingStub::ListServices(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::ListServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServices(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageTracingStub::AsyncBatchEnableServices(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::BatchEnableServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "BatchEnableServices");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, *propagator_);
  }
  auto f = child_->AsyncBatchEnableServices(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageTracingStub::BatchGetServices(
    grpc::ClientContext& context,
    google::api::serviceusage::v1::BatchGetServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.api.serviceusage.v1.ServiceUsage",
                                     "BatchGetServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->BatchGetServices(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageTracingStub::AsyncGetOperation(
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

future<Status> ServiceUsageTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ServiceUsageStub> MakeServiceUsageTracingStub(
    std::shared_ptr<ServiceUsageStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ServiceUsageTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1_internal
}  // namespace cloud
}  // namespace google
