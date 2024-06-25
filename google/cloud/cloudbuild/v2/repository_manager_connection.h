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
// source: google/devtools/cloudbuild/v2/repositories.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_REPOSITORY_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_REPOSITORY_MANAGER_CONNECTION_H

#include "google/cloud/cloudbuild/v2/internal/repository_manager_retry_traits.h"
#include "google/cloud/cloudbuild/v2/repository_manager_connection_idempotency_policy.h"
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
#include <google/devtools/cloudbuild/v2/cloudbuild.pb.h>
#include <google/devtools/cloudbuild/v2/repositories.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RepositoryManagerConnection`.
class RepositoryManagerRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RepositoryManagerRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RepositoryManagerConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RepositoryManagerLimitedErrorCountRetryPolicy
    : public RepositoryManagerRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RepositoryManagerLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  RepositoryManagerLimitedErrorCountRetryPolicy(
      RepositoryManagerLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RepositoryManagerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  RepositoryManagerLimitedErrorCountRetryPolicy(
      RepositoryManagerLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RepositoryManagerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RepositoryManagerRetryPolicy> clone() const override {
    return std::make_unique<RepositoryManagerLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RepositoryManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      cloudbuild_v2_internal::RepositoryManagerRetryTraits>
      impl_;
};

/**
 * A retry policy for `RepositoryManagerConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RepositoryManagerLimitedTimeRetryPolicy
    : public RepositoryManagerRetryPolicy {
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
  explicit RepositoryManagerLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RepositoryManagerLimitedTimeRetryPolicy(
      RepositoryManagerLimitedTimeRetryPolicy&& rhs) noexcept
      : RepositoryManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RepositoryManagerLimitedTimeRetryPolicy(
      RepositoryManagerLimitedTimeRetryPolicy const& rhs) noexcept
      : RepositoryManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<RepositoryManagerRetryPolicy> clone() const override {
    return std::make_unique<RepositoryManagerLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RepositoryManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      cloudbuild_v2_internal::RepositoryManagerRetryTraits>
      impl_;
};

/**
 * The `RepositoryManagerConnection` object for `RepositoryManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RepositoryManagerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RepositoryManagerClient`.
 *
 * To create a concrete instance, see `MakeRepositoryManagerConnection()`.
 *
 * For mocking, see `cloudbuild_v2_mocks::MockRepositoryManagerConnection`.
 */
class RepositoryManagerConnection {
 public:
  virtual ~RepositoryManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
  CreateConnection(
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateConnection(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::CreateConnectionRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
  CreateConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual StatusOr<google::devtools::cloudbuild::v2::Connection> GetConnection(
      google::devtools::cloudbuild::v2::GetConnectionRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v2::Connection>
  ListConnections(
      google::devtools::cloudbuild::v2::ListConnectionsRequest request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
  UpdateConnection(
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateConnection(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
  UpdateConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
  DeleteConnection(
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteConnection(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
  DeleteConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Repository>>
  CreateRepository(
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRepository(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::Repository>>
  CreateRepository(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual future<StatusOr<
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>
  BatchCreateRepositories(
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> BatchCreateRepositories(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
          request);

  virtual future<StatusOr<
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>
  BatchCreateRepositories(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual StatusOr<google::devtools::cloudbuild::v2::Repository> GetRepository(
      google::devtools::cloudbuild::v2::GetRepositoryRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v2::Repository>
  ListRepositories(
      google::devtools::cloudbuild::v2::ListRepositoriesRequest request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
  DeleteRepository(
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRepository(
      ExperimentalTag, NoAwaitTag,
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
  DeleteRepository(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual StatusOr<
      google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
          request);

  virtual StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
  FetchReadToken(
      google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v2::Repository>
  FetchLinkableRepositories(
      google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest
          request);

  virtual StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
  FetchGitRefs(
      google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `RepositoryManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * RepositoryManagerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `RepositoryManagerConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::cloudbuild_v2::RepositoryManagerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `RepositoryManagerConnection` created
 * by this function.
 */
std::shared_ptr<RepositoryManagerConnection> MakeRepositoryManagerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_REPOSITORY_MANAGER_CONNECTION_H
