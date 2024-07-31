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
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_rest_stub.h"
#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_retry_traits.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionSecurityPoliciesRestConnectionImpl
    : public compute_region_security_policies_v1::
          RegionSecurityPoliciesConnection {
 public:
  ~RegionSecurityPoliciesRestConnectionImpl() override = default;

  RegionSecurityPoliciesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_security_policies_v1_internal::
                          RegionSecurityPoliciesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::region_security_policies::v1::
          AddRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddRule(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      AddRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSecurityPolicy(
      google::cloud::cpp::compute::region_security_policies::v1::
          DeleteSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSecurityPolicy(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      DeleteSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSecurityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy> GetSecurityPolicy(
      google::cloud::cpp::compute::region_security_policies::v1::
          GetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule> GetRule(
      google::cloud::cpp::compute::region_security_policies::v1::
          GetRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSecurityPolicy(
      google::cloud::cpp::compute::region_security_policies::v1::
          InsertSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSecurityPolicy(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      InsertSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSecurityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
  ListRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          ListRegionSecurityPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSecurityPolicy(
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSecurityPolicy(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      PatchSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSecurityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRule(
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRule(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveRule(
      google::cloud::cpp::compute::region_security_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveRule(
      NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                      RemoveRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveRule(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_region_security_policies_v1::RegionSecurityPoliciesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_security_policies_v1::
                 RegionSecurityPoliciesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_security_policies_v1::
                 RegionSecurityPoliciesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_region_security_policies_v1::
                             RegionSecurityPoliciesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_security_policies_v1::
                 RegionSecurityPoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_security_policies_v1::
                 RegionSecurityPoliciesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_security_policies_v1_internal::
                      RegionSecurityPoliciesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_REST_CONNECTION_IMPL_H
