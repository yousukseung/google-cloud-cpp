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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/internal/identity_aware_proxy_o_auth_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IdentityAwareProxyOAuthServiceTracingStub::
    IdentityAwareProxyOAuthServiceTracingStub(
        std::shared_ptr<IdentityAwareProxyOAuthServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::iap::v1::ListBrandsResponse>
IdentityAwareProxyOAuthServiceTracingStub::ListBrands(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ListBrandsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService", "ListBrands");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBrands(context, request));
}

StatusOr<google::cloud::iap::v1::Brand>
IdentityAwareProxyOAuthServiceTracingStub::CreateBrand(
    grpc::ClientContext& context,
    google::cloud::iap::v1::CreateBrandRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService", "CreateBrand");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateBrand(context, request));
}

StatusOr<google::cloud::iap::v1::Brand>
IdentityAwareProxyOAuthServiceTracingStub::GetBrand(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetBrandRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService", "GetBrand");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetBrand(context, request));
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingStub::CreateIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService",
      "CreateIdentityAwareProxyClient");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateIdentityAwareProxyClient(context, request));
}

StatusOr<google::cloud::iap::v1::ListIdentityAwareProxyClientsResponse>
IdentityAwareProxyOAuthServiceTracingStub::ListIdentityAwareProxyClients(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService",
      "ListIdentityAwareProxyClients");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListIdentityAwareProxyClients(context, request));
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingStub::GetIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService",
      "GetIdentityAwareProxyClient");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetIdentityAwareProxyClient(context, request));
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
IdentityAwareProxyOAuthServiceTracingStub::ResetIdentityAwareProxyClientSecret(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService",
      "ResetIdentityAwareProxyClientSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ResetIdentityAwareProxyClientSecret(context, request));
}

Status
IdentityAwareProxyOAuthServiceTracingStub::DeleteIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyOAuthService",
      "DeleteIdentityAwareProxyClient");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteIdentityAwareProxyClient(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<IdentityAwareProxyOAuthServiceStub>
MakeIdentityAwareProxyOAuthServiceTracingStub(
    std::shared_ptr<IdentityAwareProxyOAuthServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<IdentityAwareProxyOAuthServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google
