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
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_H

#include "google/cloud/compute/target_https_proxies/v1/internal/target_https_proxies_retry_traits.h"
#include "google/cloud/compute/target_https_proxies/v1/target_https_proxies_connection_idempotency_policy.h"
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
#include <google/cloud/compute/target_https_proxies/v1/target_https_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TargetHttpsProxiesConnection`.
class TargetHttpsProxiesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TargetHttpsProxiesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TargetHttpsProxiesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TargetHttpsProxiesLimitedErrorCountRetryPolicy
    : public TargetHttpsProxiesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TargetHttpsProxiesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TargetHttpsProxiesLimitedErrorCountRetryPolicy(
      TargetHttpsProxiesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TargetHttpsProxiesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }
  TargetHttpsProxiesLimitedErrorCountRetryPolicy(
      TargetHttpsProxiesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TargetHttpsProxiesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {
  }

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TargetHttpsProxiesRetryPolicy> clone() const override {
    return std::make_unique<TargetHttpsProxiesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TargetHttpsProxiesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_target_https_proxies_v1_internal::TargetHttpsProxiesRetryTraits>
      impl_;
};

/**
 * A retry policy for `TargetHttpsProxiesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TargetHttpsProxiesLimitedTimeRetryPolicy
    : public TargetHttpsProxiesRetryPolicy {
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
  explicit TargetHttpsProxiesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TargetHttpsProxiesLimitedTimeRetryPolicy(
      TargetHttpsProxiesLimitedTimeRetryPolicy&& rhs) noexcept
      : TargetHttpsProxiesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TargetHttpsProxiesLimitedTimeRetryPolicy(
      TargetHttpsProxiesLimitedTimeRetryPolicy const& rhs) noexcept
      : TargetHttpsProxiesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<TargetHttpsProxiesRetryPolicy> clone() const override {
    return std::make_unique<TargetHttpsProxiesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TargetHttpsProxiesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_target_https_proxies_v1_internal::TargetHttpsProxiesRetryTraits>
      impl_;
};

/**
 * The `TargetHttpsProxiesConnection` object for `TargetHttpsProxiesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TargetHttpsProxiesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `TargetHttpsProxiesClient`.
 *
 * To create a concrete instance, see `MakeTargetHttpsProxiesConnection()`.
 *
 * For mocking, see
 * `compute_target_https_proxies_v1_mocks::MockTargetHttpsProxiesConnection`.
 */
class TargetHttpsProxiesConnection {
 public:
  virtual ~TargetHttpsProxiesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetHttpsProxiesScopedList>>
  AggregatedListTargetHttpsProxies(
      google::cloud::cpp::compute::target_https_proxies::v1::
          AggregatedListTargetHttpsProxiesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpsProxy(google::cloud::cpp::compute::target_https_proxies::v1::
                             DeleteTargetHttpsProxyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteTargetHttpsProxy(ExperimentalTag, NoAwaitTag,
                         google::cloud::cpp::compute::target_https_proxies::v1::
                             DeleteTargetHttpsProxyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpsProxy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetTargetHttpsProxy(google::cloud::cpp::compute::target_https_proxies::v1::
                          GetTargetHttpsProxyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpsProxy(google::cloud::cpp::compute::target_https_proxies::v1::
                             InsertTargetHttpsProxyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertTargetHttpsProxy(ExperimentalTag, NoAwaitTag,
                         google::cloud::cpp::compute::target_https_proxies::v1::
                             InsertTargetHttpsProxyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpsProxy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListTargetHttpsProxies(google::cloud::cpp::compute::target_https_proxies::v1::
                             ListTargetHttpsProxiesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpsProxy(google::cloud::cpp::compute::target_https_proxies::v1::
                            PatchTargetHttpsProxyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchTargetHttpsProxy(ExperimentalTag, NoAwaitTag,
                        google::cloud::cpp::compute::target_https_proxies::v1::
                            PatchTargetHttpsProxyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpsProxy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCertificateMap(google::cloud::cpp::compute::target_https_proxies::v1::
                        SetCertificateMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetCertificateMap(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::target_https_proxies::v1::
                        SetCertificateMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCertificateMap(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetQuicOverride(google::cloud::cpp::compute::target_https_proxies::v1::
                      SetQuicOverrideRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetQuicOverride(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetQuicOverrideRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetQuicOverride(ExperimentalTag,
                  google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::target_https_proxies::v1::
                         SetSslCertificatesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetSslCertificates(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::target_https_proxies::v1::
                         SetSslCertificatesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslPolicy(google::cloud::cpp::compute::target_https_proxies::v1::
                   SetSslPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetSslPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetSslPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslPolicy(ExperimentalTag,
               google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUrlMap(google::cloud::cpp::compute::target_https_proxies::v1::
                SetUrlMapRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetUrlMap(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::target_https_proxies::v1::
          SetUrlMapRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUrlMap(ExperimentalTag,
            google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_TARGET_HTTPS_PROXIES_CONNECTION_H
