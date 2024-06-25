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
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_REGION_NETWORK_FIREWALL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_REGION_NETWORK_FIREWALL_POLICIES_CONNECTION_H

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_retry_traits.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RegionNetworkFirewallPoliciesConnection`.
class RegionNetworkFirewallPoliciesRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RegionNetworkFirewallPoliciesRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `RegionNetworkFirewallPoliciesConnection` based on
 * counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy
    : public RegionNetworkFirewallPoliciesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
      RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy const&
          rhs) noexcept
      : RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionNetworkFirewallPoliciesRetryPolicy> clone()
      const override {
    return std::make_unique<
        RegionNetworkFirewallPoliciesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionNetworkFirewallPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_region_network_firewall_policies_v1_internal::
          RegionNetworkFirewallPoliciesRetryTraits>
      impl_;
};

/**
 * A retry policy for `RegionNetworkFirewallPoliciesConnection` based on elapsed
 * time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy
    : public RegionNetworkFirewallPoliciesRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
      RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy&& rhs) noexcept
      : RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}
  RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
      RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy const& rhs) noexcept
      : RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
            rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionNetworkFirewallPoliciesRetryPolicy> clone()
      const override {
    return std::make_unique<
        RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionNetworkFirewallPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_region_network_firewall_policies_v1_internal::
          RegionNetworkFirewallPoliciesRetryTraits>
      impl_;
};

/**
 * The `RegionNetworkFirewallPoliciesConnection` object for
 * `RegionNetworkFirewallPoliciesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionNetworkFirewallPoliciesClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionNetworkFirewallPoliciesClient`.
 *
 * To create a concrete instance, see
 * `MakeRegionNetworkFirewallPoliciesConnection()`.
 *
 * For mocking, see
 * `compute_region_network_firewall_policies_v1_mocks::MockRegionNetworkFirewallPoliciesConnection`.
 */
class RegionNetworkFirewallPoliciesConnection {
 public:
  virtual ~RegionNetworkFirewallPoliciesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAssociation(google::cloud::cpp::compute::region_network_firewall_policies::
                     v1::AddAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddAssociation(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          AddAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAssociation(ExperimentalTag,
                 google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          AddRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          AddRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CloneRules(google::cloud::cpp::compute::region_network_firewall_policies::v1::
                 CloneRulesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> CloneRules(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          CloneRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CloneRules(ExperimentalTag,
             google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteFirewallPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
  GetFirewallPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::cpp::compute::region_network_firewall_policies::
                     v1::GetAssociationRequest const& request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::
          RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetEffectiveFirewallsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          GetRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          InsertFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertFirewallPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          InsertFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
  ListRegionNetworkFirewallPolicies(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          ListRegionNetworkFirewallPoliciesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          PatchFirewallPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchFirewallPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          PatchFirewallPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::
                PatchRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          PatchRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRule(ExperimentalTag,
            google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          RemoveAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemoveAssociation(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          RemoveAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::
                 RemoveRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          RemoveRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveRule(ExperimentalTag,
             google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      google::cloud::cpp::compute::region_network_firewall_policies::v1::
          TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_FIREWALL_POLICIES_V1_REGION_NETWORK_FIREWALL_POLICIES_CONNECTION_H
