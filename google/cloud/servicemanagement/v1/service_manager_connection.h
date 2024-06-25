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
// source: google/api/servicemanagement/v1/servicemanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_H

#include "google/cloud/servicemanagement/v1/internal/service_manager_retry_traits.h"
#include "google/cloud/servicemanagement/v1/service_manager_connection_idempotency_policy.h"
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
#include <google/api/servicemanagement/v1/servicemanager.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ServiceManagerConnection`.
class ServiceManagerRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ServiceManagerRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ServiceManagerConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ServiceManagerLimitedErrorCountRetryPolicy
    : public ServiceManagerRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ServiceManagerLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ServiceManagerLimitedErrorCountRetryPolicy(
      ServiceManagerLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ServiceManagerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ServiceManagerLimitedErrorCountRetryPolicy(
      ServiceManagerLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ServiceManagerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ServiceManagerRetryPolicy> clone() const override {
    return std::make_unique<ServiceManagerLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ServiceManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      servicemanagement_v1_internal::ServiceManagerRetryTraits>
      impl_;
};

/**
 * A retry policy for `ServiceManagerConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ServiceManagerLimitedTimeRetryPolicy : public ServiceManagerRetryPolicy {
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
  explicit ServiceManagerLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ServiceManagerLimitedTimeRetryPolicy(
      ServiceManagerLimitedTimeRetryPolicy&& rhs) noexcept
      : ServiceManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ServiceManagerLimitedTimeRetryPolicy(
      ServiceManagerLimitedTimeRetryPolicy const& rhs) noexcept
      : ServiceManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ServiceManagerRetryPolicy> clone() const override {
    return std::make_unique<ServiceManagerLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ServiceManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      servicemanagement_v1_internal::ServiceManagerRetryTraits>
      impl_;
};

/**
 * The `ServiceManagerConnection` object for `ServiceManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ServiceManagerClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ServiceManagerClient`.
 *
 * To create a concrete instance, see `MakeServiceManagerConnection()`.
 *
 * For mocking, see `servicemanagement_v1_mocks::MockServiceManagerConnection`.
 */
class ServiceManagerConnection {
 public:
  virtual ~ServiceManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::api::servicemanagement::v1::ManagedService>
  ListServices(google::api::servicemanagement::v1::ListServicesRequest request);

  virtual StatusOr<google::api::servicemanagement::v1::ManagedService>
  GetService(
      google::api::servicemanagement::v1::GetServiceRequest const& request);

  virtual future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
  CreateService(
      google::api::servicemanagement::v1::CreateServiceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateService(
      ExperimentalTag, NoAwaitTag,
      google::api::servicemanagement::v1::CreateServiceRequest const& request);

  virtual future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
  CreateService(ExperimentalTag,
                google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
  DeleteService(
      google::api::servicemanagement::v1::DeleteServiceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteService(
      ExperimentalTag, NoAwaitTag,
      google::api::servicemanagement::v1::DeleteServiceRequest const& request);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
  DeleteService(ExperimentalTag,
                google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
  UndeleteService(
      google::api::servicemanagement::v1::UndeleteServiceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UndeleteService(
      ExperimentalTag, NoAwaitTag,
      google::api::servicemanagement::v1::UndeleteServiceRequest const&
          request);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
  UndeleteService(ExperimentalTag,
                  google::longrunning::Operation const& operation);

  virtual StreamRange<google::api::Service> ListServiceConfigs(
      google::api::servicemanagement::v1::ListServiceConfigsRequest request);

  virtual StatusOr<google::api::Service> GetServiceConfig(
      google::api::servicemanagement::v1::GetServiceConfigRequest const&
          request);

  virtual StatusOr<google::api::Service> CreateServiceConfig(
      google::api::servicemanagement::v1::CreateServiceConfigRequest const&
          request);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
  SubmitConfigSource(
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> SubmitConfigSource(
      ExperimentalTag, NoAwaitTag,
      google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
          request);

  virtual future<
      StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
  SubmitConfigSource(ExperimentalTag,
                     google::longrunning::Operation const& operation);

  virtual StreamRange<google::api::servicemanagement::v1::Rollout>
  ListServiceRollouts(
      google::api::servicemanagement::v1::ListServiceRolloutsRequest request);

  virtual StatusOr<google::api::servicemanagement::v1::Rollout>
  GetServiceRollout(
      google::api::servicemanagement::v1::GetServiceRolloutRequest const&
          request);

  virtual future<StatusOr<google::api::servicemanagement::v1::Rollout>>
  CreateServiceRollout(
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateServiceRollout(
      ExperimentalTag, NoAwaitTag,
      google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
          request);

  virtual future<StatusOr<google::api::servicemanagement::v1::Rollout>>
  CreateServiceRollout(ExperimentalTag,
                       google::longrunning::Operation const& operation);

  virtual StatusOr<
      google::api::servicemanagement::v1::GenerateConfigReportResponse>
  GenerateConfigReport(
      google::api::servicemanagement::v1::GenerateConfigReportRequest const&
          request);
};

/**
 * A factory function to construct an object of type `ServiceManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ServiceManagerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ServiceManagerConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::servicemanagement_v1::ServiceManagerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ServiceManagerConnection` created by
 * this function.
 */
std::shared_ptr<ServiceManagerConnection> MakeServiceManagerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_V1_SERVICE_MANAGER_CONNECTION_H
