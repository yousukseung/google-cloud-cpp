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
// source: google/cloud/retail/v2/serving_config_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CONNECTION_H

#include "google/cloud/retail/v2/internal/serving_config_retry_traits.h"
#include "google/cloud/retail/v2/serving_config_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/retail/v2/serving_config_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ServingConfigServiceConnection`.
class ServingConfigServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ServingConfigServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ServingConfigServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ServingConfigServiceLimitedErrorCountRetryPolicy
    : public ServingConfigServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ServingConfigServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  ServingConfigServiceLimitedErrorCountRetryPolicy(
      ServingConfigServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ServingConfigServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  ServingConfigServiceLimitedErrorCountRetryPolicy(
      ServingConfigServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ServingConfigServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ServingConfigServiceRetryPolicy> clone() const override {
    return std::make_unique<ServingConfigServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ServingConfigServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      retail_v2_internal::ServingConfigServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `ServingConfigServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ServingConfigServiceLimitedTimeRetryPolicy
    : public ServingConfigServiceRetryPolicy {
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
  explicit ServingConfigServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ServingConfigServiceLimitedTimeRetryPolicy(
      ServingConfigServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : ServingConfigServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ServingConfigServiceLimitedTimeRetryPolicy(
      ServingConfigServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : ServingConfigServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ServingConfigServiceRetryPolicy> clone() const override {
    return std::make_unique<ServingConfigServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ServingConfigServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      retail_v2_internal::ServingConfigServiceRetryTraits>
      impl_;
};

/**
 * The `ServingConfigServiceConnection` object for `ServingConfigServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ServingConfigServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ServingConfigServiceClient`.
 *
 * To create a concrete instance, see `MakeServingConfigServiceConnection()`.
 *
 * For mocking, see `retail_v2_mocks::MockServingConfigServiceConnection`.
 */
class ServingConfigServiceConnection {
 public:
  virtual ~ServingConfigServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::retail::v2::ServingConfig>
  CreateServingConfig(
      google::cloud::retail::v2::CreateServingConfigRequest const& request);

  virtual Status DeleteServingConfig(
      google::cloud::retail::v2::DeleteServingConfigRequest const& request);

  virtual StatusOr<google::cloud::retail::v2::ServingConfig>
  UpdateServingConfig(
      google::cloud::retail::v2::UpdateServingConfigRequest const& request);

  virtual StatusOr<google::cloud::retail::v2::ServingConfig> GetServingConfig(
      google::cloud::retail::v2::GetServingConfigRequest const& request);

  virtual StreamRange<google::cloud::retail::v2::ServingConfig>
  ListServingConfigs(
      google::cloud::retail::v2::ListServingConfigsRequest request);

  virtual StatusOr<google::cloud::retail::v2::ServingConfig> AddControl(
      google::cloud::retail::v2::AddControlRequest const& request);

  virtual StatusOr<google::cloud::retail::v2::ServingConfig> RemoveControl(
      google::cloud::retail::v2::RemoveControlRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ServingConfigServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ServingConfigServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ServingConfigServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::retail_v2::ServingConfigServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ServingConfigServiceConnection`
 * created by this function.
 */
std::shared_ptr<ServingConfigServiceConnection>
MakeServingConfigServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CONNECTION_H
