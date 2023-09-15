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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_TRACING_STUB_H

#include "google/cloud/talent/v4/internal/tenant_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TenantServiceTracingStub : public TenantServiceStub {
 public:
  ~TenantServiceTracingStub() override = default;

  explicit TenantServiceTracingStub(std::shared_ptr<TenantServiceStub> child);

  StatusOr<google::cloud::talent::v4::Tenant> CreateTenant(
      grpc::ClientContext& context,
      google::cloud::talent::v4::CreateTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> GetTenant(
      grpc::ClientContext& context,
      google::cloud::talent::v4::GetTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Tenant> UpdateTenant(
      grpc::ClientContext& context,
      google::cloud::talent::v4::UpdateTenantRequest const& request) override;

  Status DeleteTenant(
      grpc::ClientContext& context,
      google::cloud::talent::v4::DeleteTenantRequest const& request) override;

  StatusOr<google::cloud::talent::v4::ListTenantsResponse> ListTenants(
      grpc::ClientContext& context,
      google::cloud::talent::v4::ListTenantsRequest const& request) override;

 private:
  std::shared_ptr<TenantServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TenantServiceStub> MakeTenantServiceTracingStub(
    std::shared_ptr<TenantServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_TENANT_TRACING_STUB_H
