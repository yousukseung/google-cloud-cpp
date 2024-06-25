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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_REGION_URL_MAPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_REGION_URL_MAPS_CONNECTION_H

#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_retry_traits.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps_connection_idempotency_policy.h"
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
#include <google/cloud/compute/region_url_maps/v1/region_url_maps.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RegionUrlMapsConnection`.
class RegionUrlMapsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RegionUrlMapsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RegionUrlMapsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionUrlMapsLimitedErrorCountRetryPolicy
    : public RegionUrlMapsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RegionUrlMapsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  RegionUrlMapsLimitedErrorCountRetryPolicy(
      RegionUrlMapsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RegionUrlMapsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  RegionUrlMapsLimitedErrorCountRetryPolicy(
      RegionUrlMapsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RegionUrlMapsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionUrlMapsRetryPolicy> clone() const override {
    return std::make_unique<RegionUrlMapsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionUrlMapsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_region_url_maps_v1_internal::RegionUrlMapsRetryTraits>
      impl_;
};

/**
 * A retry policy for `RegionUrlMapsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionUrlMapsLimitedTimeRetryPolicy : public RegionUrlMapsRetryPolicy {
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
  explicit RegionUrlMapsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RegionUrlMapsLimitedTimeRetryPolicy(
      RegionUrlMapsLimitedTimeRetryPolicy&& rhs) noexcept
      : RegionUrlMapsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RegionUrlMapsLimitedTimeRetryPolicy(
      RegionUrlMapsLimitedTimeRetryPolicy const& rhs) noexcept
      : RegionUrlMapsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<RegionUrlMapsRetryPolicy> clone() const override {
    return std::make_unique<RegionUrlMapsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionUrlMapsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_region_url_maps_v1_internal::RegionUrlMapsRetryTraits>
      impl_;
};

/**
 * The `RegionUrlMapsConnection` object for `RegionUrlMapsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionUrlMapsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RegionUrlMapsClient`.
 *
 * To create a concrete instance, see `MakeRegionUrlMapsConnection()`.
 *
 * For mocking, see
 * `compute_region_url_maps_v1_mocks::MockRegionUrlMapsConnection`.
 */
class RegionUrlMapsConnection {
 public:
  virtual ~RegionUrlMapsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteUrlMap(google::cloud::cpp::compute::region_url_maps::v1::
                   DeleteUrlMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteUrlMap(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteUrlMap(ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::GetUrlMapRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertUrlMap(google::cloud::cpp::compute::region_url_maps::v1::
                   InsertUrlMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertUrlMap(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertUrlMap(ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::UrlMap>
  ListRegionUrlMaps(
      google::cloud::cpp::compute::region_url_maps::v1::ListRegionUrlMapsRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchUrlMap(google::cloud::cpp::compute::region_url_maps::v1::
                  PatchUrlMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> PatchUrlMap(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchUrlMap(ExperimentalTag,
              google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateUrlMap(google::cloud::cpp::compute::region_url_maps::v1::
                   UpdateUrlMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateUrlMap(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateUrlMap(ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
  Validate(
      google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_REGION_URL_MAPS_CONNECTION_H
