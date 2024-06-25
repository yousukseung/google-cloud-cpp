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
// source: google/cloud/automl/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_PREDICTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_PREDICTION_CONNECTION_H

#include "google/cloud/automl/v1/internal/prediction_retry_traits.h"
#include "google/cloud/automl/v1/prediction_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/automl/v1/operations.pb.h>
#include <google/cloud/automl/v1/prediction_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace automl_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `PredictionServiceConnection`.
class PredictionServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<PredictionServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `PredictionServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class PredictionServiceLimitedErrorCountRetryPolicy
    : public PredictionServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit PredictionServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  PredictionServiceLimitedErrorCountRetryPolicy(
      PredictionServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : PredictionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  PredictionServiceLimitedErrorCountRetryPolicy(
      PredictionServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : PredictionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<PredictionServiceRetryPolicy> clone() const override {
    return std::make_unique<PredictionServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = PredictionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      automl_v1_internal::PredictionServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `PredictionServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class PredictionServiceLimitedTimeRetryPolicy
    : public PredictionServiceRetryPolicy {
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
  explicit PredictionServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  PredictionServiceLimitedTimeRetryPolicy(
      PredictionServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : PredictionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  PredictionServiceLimitedTimeRetryPolicy(
      PredictionServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : PredictionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<PredictionServiceRetryPolicy> clone() const override {
    return std::make_unique<PredictionServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = PredictionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      automl_v1_internal::PredictionServiceRetryTraits>
      impl_;
};

/**
 * The `PredictionServiceConnection` object for `PredictionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PredictionServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `PredictionServiceClient`.
 *
 * To create a concrete instance, see `MakePredictionServiceConnection()`.
 *
 * For mocking, see `automl_v1_mocks::MockPredictionServiceConnection`.
 */
class PredictionServiceConnection {
 public:
  virtual ~PredictionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      google::cloud::automl::v1::PredictRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
  BatchPredict(google::cloud::automl::v1::BatchPredictRequest const& request);

  virtual StatusOr<google::longrunning::Operation> BatchPredict(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::BatchPredictRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
  BatchPredict(ExperimentalTag,
               google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type
 * `PredictionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * PredictionServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PredictionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::automl_v1::PredictionServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `PredictionServiceConnection` created
 * by this function.
 */
std::shared_ptr<PredictionServiceConnection> MakePredictionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_PREDICTION_CONNECTION_H
