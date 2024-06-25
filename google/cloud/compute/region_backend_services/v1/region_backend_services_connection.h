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
// google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H

#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_retry_traits.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection_idempotency_policy.h"
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
#include <google/cloud/compute/region_backend_services/v1/region_backend_services.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RegionBackendServicesConnection`.
class RegionBackendServicesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RegionBackendServicesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RegionBackendServicesConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionBackendServicesLimitedErrorCountRetryPolicy
    : public RegionBackendServicesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RegionBackendServicesLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  RegionBackendServicesLimitedErrorCountRetryPolicy(
      RegionBackendServicesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RegionBackendServicesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  RegionBackendServicesLimitedErrorCountRetryPolicy(
      RegionBackendServicesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RegionBackendServicesLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionBackendServicesRetryPolicy> clone() const override {
    return std::make_unique<RegionBackendServicesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionBackendServicesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_region_backend_services_v1_internal::
          RegionBackendServicesRetryTraits>
      impl_;
};

/**
 * A retry policy for `RegionBackendServicesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionBackendServicesLimitedTimeRetryPolicy
    : public RegionBackendServicesRetryPolicy {
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
  explicit RegionBackendServicesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RegionBackendServicesLimitedTimeRetryPolicy(
      RegionBackendServicesLimitedTimeRetryPolicy&& rhs) noexcept
      : RegionBackendServicesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RegionBackendServicesLimitedTimeRetryPolicy(
      RegionBackendServicesLimitedTimeRetryPolicy const& rhs) noexcept
      : RegionBackendServicesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<RegionBackendServicesRetryPolicy> clone() const override {
    return std::make_unique<RegionBackendServicesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionBackendServicesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_region_backend_services_v1_internal::
          RegionBackendServicesRetryTraits>
      impl_;
};

/**
 * The `RegionBackendServicesConnection` object for
 * `RegionBackendServicesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionBackendServicesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionBackendServicesClient`.
 *
 * To create a concrete instance, see `MakeRegionBackendServicesConnection()`.
 *
 * For mocking, see
 * `compute_region_backend_services_v1_mocks::MockRegionBackendServicesConnection`.
 */
class RegionBackendServicesConnection {
 public:
  virtual ~RegionBackendServicesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendService(google::cloud::cpp::compute::region_backend_services::
                           v1::DeleteBackendServiceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteBackendService(ExperimentalTag, NoAwaitTag,
                       google::cloud::cpp::compute::region_backend_services::
                           v1::DeleteBackendServiceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendService(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendService>
  GetBackendService(google::cloud::cpp::compute::region_backend_services::v1::
                        GetBackendServiceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::cpp::compute::region_backend_services::v1::
                GetHealthRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendService(google::cloud::cpp::compute::region_backend_services::
                           v1::InsertBackendServiceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertBackendService(ExperimentalTag, NoAwaitTag,
                       google::cloud::cpp::compute::region_backend_services::
                           v1::InsertBackendServiceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendService(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::BackendService>
  ListRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          ListRegionBackendServicesRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::BackendService>
  ListUsable(google::cloud::cpp::compute::region_backend_services::v1::
                 ListUsableRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendService(google::cloud::cpp::compute::region_backend_services::v1::
                          PatchBackendServiceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchBackendService(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::region_backend_services::v1::
                          PatchBackendServiceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendService(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          SetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(google::cloud::cpp::compute::region_backend_services::v1::
                        SetSecurityPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetSecurityPolicy(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::region_backend_services::v1::
                        SetSecurityPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::region_backend_services::v1::
                         TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendService(google::cloud::cpp::compute::region_backend_services::
                           v1::UpdateBackendServiceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateBackendService(ExperimentalTag, NoAwaitTag,
                       google::cloud::cpp::compute::region_backend_services::
                           v1::UpdateBackendServiceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendService(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H
