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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_TRACING_STUB_H

#include "google/cloud/dataproc/v1/internal/autoscaling_policy_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AutoscalingPolicyServiceTracingStub
    : public AutoscalingPolicyServiceStub {
 public:
  ~AutoscalingPolicyServiceTracingStub() override = default;

  explicit AutoscalingPolicyServiceTracingStub(
      std::shared_ptr<AutoscalingPolicyServiceStub> child);

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request) override;

  StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy> GetAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::ListAutoscalingPoliciesResponse>
  ListAutoscalingPolicies(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest const&
          request) override;

  Status DeleteAutoscalingPolicy(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request) override;

 private:
  std::shared_ptr<AutoscalingPolicyServiceStub> child_;
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
std::shared_ptr<AutoscalingPolicyServiceStub>
MakeAutoscalingPolicyServiceTracingStub(
    std::shared_ptr<AutoscalingPolicyServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_AUTOSCALING_POLICY_TRACING_STUB_H
