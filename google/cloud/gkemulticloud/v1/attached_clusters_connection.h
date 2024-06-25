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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_ATTACHED_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_ATTACHED_CLUSTERS_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/attached_clusters_connection_idempotency_policy.h"
#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_retry_traits.h"
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
#include <google/cloud/gkemulticloud/v1/attached_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `AttachedClustersConnection`.
class AttachedClustersRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<AttachedClustersRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `AttachedClustersConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AttachedClustersLimitedErrorCountRetryPolicy
    : public AttachedClustersRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit AttachedClustersLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  AttachedClustersLimitedErrorCountRetryPolicy(
      AttachedClustersLimitedErrorCountRetryPolicy&& rhs) noexcept
      : AttachedClustersLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  AttachedClustersLimitedErrorCountRetryPolicy(
      AttachedClustersLimitedErrorCountRetryPolicy const& rhs) noexcept
      : AttachedClustersLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<AttachedClustersRetryPolicy> clone() const override {
    return std::make_unique<AttachedClustersLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AttachedClustersRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      gkemulticloud_v1_internal::AttachedClustersRetryTraits>
      impl_;
};

/**
 * A retry policy for `AttachedClustersConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class AttachedClustersLimitedTimeRetryPolicy
    : public AttachedClustersRetryPolicy {
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
  explicit AttachedClustersLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  AttachedClustersLimitedTimeRetryPolicy(
      AttachedClustersLimitedTimeRetryPolicy&& rhs) noexcept
      : AttachedClustersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  AttachedClustersLimitedTimeRetryPolicy(
      AttachedClustersLimitedTimeRetryPolicy const& rhs) noexcept
      : AttachedClustersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<AttachedClustersRetryPolicy> clone() const override {
    return std::make_unique<AttachedClustersLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AttachedClustersRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      gkemulticloud_v1_internal::AttachedClustersRetryTraits>
      impl_;
};

/**
 * The `AttachedClustersConnection` object for `AttachedClustersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AttachedClustersClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AttachedClustersClient`.
 *
 * To create a concrete instance, see `MakeAttachedClustersConnection()`.
 *
 * For mocking, see `gkemulticloud_v1_mocks::MockAttachedClustersConnection`.
 */
class AttachedClustersConnection {
 public:
  virtual ~AttachedClustersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  CreateAttachedCluster(
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateAttachedCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  CreateAttachedCluster(ExperimentalTag,
                        google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  UpdateAttachedCluster(
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateAttachedCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  UpdateAttachedCluster(ExperimentalTag,
                        google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  ImportAttachedCluster(
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ImportAttachedCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
  ImportAttachedCluster(ExperimentalTag,
                        google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
  GetAttachedCluster(
      google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
          request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
  ListAttachedClusters(
      google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAttachedCluster(
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteAttachedCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAttachedCluster(ExperimentalTag,
                        google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
  GetAttachedServerConfig(
      google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::
                       GenerateAttachedClusterInstallManifestResponse>
  GenerateAttachedClusterInstallManifest(
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterInstallManifestRequest const& request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::
                       GenerateAttachedClusterAgentTokenResponse>
  GenerateAttachedClusterAgentToken(
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterAgentTokenRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `AttachedClustersConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AttachedClustersClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AttachedClustersConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::gkemulticloud_v1::AttachedClustersPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `AttachedClustersConnection` created
 * by this function.
 */
std::shared_ptr<AttachedClustersConnection> MakeAttachedClustersConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_ATTACHED_CLUSTERS_CONNECTION_H
