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
// source: google/cloud/kms/inventory/v1/key_dashboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_DASHBOARD_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_DASHBOARD_TRACING_STUB_H

#include "google/cloud/kms/inventory/v1/internal/key_dashboard_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace kms_inventory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class KeyDashboardServiceTracingStub : public KeyDashboardServiceStub {
 public:
  ~KeyDashboardServiceTracingStub() override = default;

  explicit KeyDashboardServiceTracingStub(
      std::shared_ptr<KeyDashboardServiceStub> child);

  StatusOr<google::cloud::kms::inventory::v1::ListCryptoKeysResponse>
  ListCryptoKeys(grpc::ClientContext& context,
                 google::cloud::kms::inventory::v1::ListCryptoKeysRequest const&
                     request) override;

 private:
  std::shared_ptr<KeyDashboardServiceStub> child_;
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
std::shared_ptr<KeyDashboardServiceStub> MakeKeyDashboardServiceTracingStub(
    std::shared_ptr<KeyDashboardServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_DASHBOARD_TRACING_STUB_H
