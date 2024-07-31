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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_API_GATEWAY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_API_GATEWAY_CONNECTION_H

#include "google/cloud/apigateway/v1/api_gateway_connection_idempotency_policy.h"
#include "google/cloud/apigateway/v1/internal/api_gateway_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/apigateway/v1/apigateway_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apigateway_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ApiGatewayServiceConnection`.
class ApiGatewayServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ApiGatewayServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ApiGatewayServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class ApiGatewayServiceLimitedErrorCountRetryPolicy
    : public ApiGatewayServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ApiGatewayServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ApiGatewayServiceLimitedErrorCountRetryPolicy(
      ApiGatewayServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ApiGatewayServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ApiGatewayServiceLimitedErrorCountRetryPolicy(
      ApiGatewayServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ApiGatewayServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ApiGatewayServiceRetryPolicy> clone() const override {
    return std::make_unique<ApiGatewayServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ApiGatewayServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      apigateway_v1_internal::ApiGatewayServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `ApiGatewayServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class ApiGatewayServiceLimitedTimeRetryPolicy
    : public ApiGatewayServiceRetryPolicy {
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
  explicit ApiGatewayServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ApiGatewayServiceLimitedTimeRetryPolicy(
      ApiGatewayServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : ApiGatewayServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ApiGatewayServiceLimitedTimeRetryPolicy(
      ApiGatewayServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : ApiGatewayServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ApiGatewayServiceRetryPolicy> clone() const override {
    return std::make_unique<ApiGatewayServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ApiGatewayServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      apigateway_v1_internal::ApiGatewayServiceRetryTraits>
      impl_;
};

/**
 * The `ApiGatewayServiceConnection` object for `ApiGatewayServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ApiGatewayServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ApiGatewayServiceClient`.
 *
 * To create a concrete instance, see `MakeApiGatewayServiceConnection()`.
 *
 * For mocking, see `apigateway_v1_mocks::MockApiGatewayServiceConnection`.
 */
class ApiGatewayServiceConnection {
 public:
  virtual ~ApiGatewayServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::apigateway::v1::Gateway> ListGateways(
      google::cloud::apigateway::v1::ListGatewaysRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      google::cloud::apigateway::v1::GetGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  CreateGateway(
      google::cloud::apigateway::v1::CreateGatewayRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  CreateGateway(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  UpdateGateway(
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Gateway>>
  UpdateGateway(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteGateway(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteGateway(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::apigateway::v1::Api> ListApis(
      google::cloud::apigateway::v1::ListApisRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      google::cloud::apigateway::v1::GetApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::cloud::apigateway::v1::CreateApiRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> CreateApi(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::cloud::apigateway::v1::UpdateApiRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::Api>> UpdateApi(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApi(google::cloud::apigateway::v1::DeleteApiRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteApi(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteApiRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApi(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::apigateway::v1::ApiConfig> ListApiConfigs(
      google::cloud::apigateway::v1::ListApiConfigsRequest request);

  virtual StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      google::cloud::apigateway::v1::GetApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  CreateApiConfig(
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  CreateApiConfig(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  UpdateApiConfig(
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
  UpdateApiConfig(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteApiConfig(
      NoAwaitTag,
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request);

  virtual future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
  DeleteApiConfig(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type
 * `ApiGatewayServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ApiGatewayServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ApiGatewayServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::apigateway_v1::ApiGatewayServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ApiGatewayServiceConnection` created
 * by this function.
 */
std::shared_ptr<ApiGatewayServiceConnection> MakeApiGatewayServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_API_GATEWAY_CONNECTION_H
