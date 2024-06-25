// Copyright 2024 Google LLC
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
// source: google/cloud/networkservices/v1/dep.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_DEP_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_DEP_CONNECTION_H

#include "google/cloud/networkservices/v1/dep_connection_idempotency_policy.h"
#include "google/cloud/networkservices/v1/internal/dep_retry_traits.h"
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
#include <google/cloud/networkservices/v1/dep.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networkservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DepServiceConnection`.
class DepServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DepServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DepServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DepServiceLimitedErrorCountRetryPolicy : public DepServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DepServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DepServiceLimitedErrorCountRetryPolicy(
      DepServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DepServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DepServiceLimitedErrorCountRetryPolicy(
      DepServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DepServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DepServiceRetryPolicy> clone() const override {
    return std::make_unique<DepServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DepServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      networkservices_v1_internal::DepServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `DepServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DepServiceLimitedTimeRetryPolicy : public DepServiceRetryPolicy {
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
  explicit DepServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DepServiceLimitedTimeRetryPolicy(
      DepServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : DepServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DepServiceLimitedTimeRetryPolicy(
      DepServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : DepServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DepServiceRetryPolicy> clone() const override {
    return std::make_unique<DepServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DepServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      networkservices_v1_internal::DepServiceRetryTraits>
      impl_;
};

/**
 * The `DepServiceConnection` object for `DepServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DepServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DepServiceClient`.
 *
 * To create a concrete instance, see `MakeDepServiceConnection()`.
 *
 * For mocking, see `networkservices_v1_mocks::MockDepServiceConnection`.
 */
class DepServiceConnection {
 public:
  virtual ~DepServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::networkservices::v1::LbTrafficExtension>
  ListLbTrafficExtensions(
      google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest
          request);

  virtual StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
  GetLbTrafficExtension(
      google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  CreateLbTrafficExtension(
      google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateLbTrafficExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  CreateLbTrafficExtension(ExperimentalTag,
                           google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  UpdateLbTrafficExtension(
      google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateLbTrafficExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  UpdateLbTrafficExtension(ExperimentalTag,
                           google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbTrafficExtension(
      google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteLbTrafficExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbTrafficExtension(ExperimentalTag,
                           google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::networkservices::v1::LbRouteExtension>
  ListLbRouteExtensions(
      google::cloud::networkservices::v1::ListLbRouteExtensionsRequest request);

  virtual StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
  GetLbRouteExtension(
      google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  CreateLbRouteExtension(
      google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateLbRouteExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  CreateLbRouteExtension(ExperimentalTag,
                         google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  UpdateLbRouteExtension(
      google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateLbRouteExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  UpdateLbRouteExtension(ExperimentalTag,
                         google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbRouteExtension(
      google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteLbRouteExtension(
      ExperimentalTag, NoAwaitTag,
      google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbRouteExtension(ExperimentalTag,
                         google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type `DepServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DepServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DepServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::networkservices_v1::DepServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DepServiceConnection` created by
 * this function.
 */
std::shared_ptr<DepServiceConnection> MakeDepServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_DEP_CONNECTION_H
