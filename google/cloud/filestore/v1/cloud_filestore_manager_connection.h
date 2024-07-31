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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_CLOUD_FILESTORE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_CLOUD_FILESTORE_MANAGER_CONNECTION_H

#include "google/cloud/filestore/v1/cloud_filestore_manager_connection_idempotency_policy.h"
#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/filestore/v1/cloud_filestore_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace filestore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudFilestoreManagerConnection`.
class CloudFilestoreManagerRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudFilestoreManagerRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudFilestoreManagerConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudFilestoreManagerLimitedErrorCountRetryPolicy
    : public CloudFilestoreManagerRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudFilestoreManagerLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  CloudFilestoreManagerLimitedErrorCountRetryPolicy(
      CloudFilestoreManagerLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudFilestoreManagerLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  CloudFilestoreManagerLimitedErrorCountRetryPolicy(
      CloudFilestoreManagerLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudFilestoreManagerLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudFilestoreManagerRetryPolicy> clone() const override {
    return std::make_unique<CloudFilestoreManagerLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudFilestoreManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      filestore_v1_internal::CloudFilestoreManagerRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudFilestoreManagerConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudFilestoreManagerLimitedTimeRetryPolicy
    : public CloudFilestoreManagerRetryPolicy {
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
  explicit CloudFilestoreManagerLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudFilestoreManagerLimitedTimeRetryPolicy(
      CloudFilestoreManagerLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudFilestoreManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudFilestoreManagerLimitedTimeRetryPolicy(
      CloudFilestoreManagerLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudFilestoreManagerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudFilestoreManagerRetryPolicy> clone() const override {
    return std::make_unique<CloudFilestoreManagerLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudFilestoreManagerRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      filestore_v1_internal::CloudFilestoreManagerRetryTraits>
      impl_;
};

/**
 * The `CloudFilestoreManagerConnection` object for
 * `CloudFilestoreManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudFilestoreManagerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CloudFilestoreManagerClient`.
 *
 * To create a concrete instance, see `MakeCloudFilestoreManagerConnection()`.
 *
 * For mocking, see `filestore_v1_mocks::MockCloudFilestoreManagerConnection`.
 */
class CloudFilestoreManagerConnection {
 public:
  virtual ~CloudFilestoreManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::filestore::v1::Instance> ListInstances(
      google::cloud::filestore::v1::ListInstancesRequest request);

  virtual StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      google::cloud::filestore::v1::GetInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  CreateInstance(
      google::cloud::filestore::v1::CreateInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateInstance(
      NoAwaitTag,
      google::cloud::filestore::v1::CreateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  CreateInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  UpdateInstance(
      google::cloud::filestore::v1::UpdateInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstance(
      NoAwaitTag,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  UpdateInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  RestoreInstance(
      google::cloud::filestore::v1::RestoreInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RestoreInstance(
      NoAwaitTag,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  RestoreInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  RevertInstance(
      google::cloud::filestore::v1::RevertInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RevertInstance(
      NoAwaitTag,
      google::cloud::filestore::v1::RevertInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Instance>>
  RevertInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteInstance(
      google::cloud::filestore::v1::DeleteInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteInstance(
      NoAwaitTag,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteInstance(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::filestore::v1::Snapshot> ListSnapshots(
      google::cloud::filestore::v1::ListSnapshotsRequest request);

  virtual StatusOr<google::cloud::filestore::v1::Snapshot> GetSnapshot(
      google::cloud::filestore::v1::GetSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Snapshot>>
  CreateSnapshot(
      google::cloud::filestore::v1::CreateSnapshotRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateSnapshot(
      NoAwaitTag,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Snapshot>>
  CreateSnapshot(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteSnapshot(
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteSnapshot(
      NoAwaitTag,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteSnapshot(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::filestore::v1::Snapshot>>
  UpdateSnapshot(
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateSnapshot(
      NoAwaitTag,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Snapshot>>
  UpdateSnapshot(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::filestore::v1::Backup> ListBackups(
      google::cloud::filestore::v1::ListBackupsRequest request);

  virtual StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      google::cloud::filestore::v1::GetBackupRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Backup>> CreateBackup(
      google::cloud::filestore::v1::CreateBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateBackup(
      NoAwaitTag,
      google::cloud::filestore::v1::CreateBackupRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Backup>> CreateBackup(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteBackup(
      google::cloud::filestore::v1::DeleteBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteBackup(
      NoAwaitTag,
      google::cloud::filestore::v1::DeleteBackupRequest const& request);

  virtual future<StatusOr<google::cloud::common::OperationMetadata>>
  DeleteBackup(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::filestore::v1::Backup>> UpdateBackup(
      google::cloud::filestore::v1::UpdateBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateBackup(
      NoAwaitTag,
      google::cloud::filestore::v1::UpdateBackupRequest const& request);

  virtual future<StatusOr<google::cloud::filestore::v1::Backup>> UpdateBackup(
      google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type
 * `CloudFilestoreManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CloudFilestoreManagerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudFilestoreManagerConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::filestore_v1::CloudFilestoreManagerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudFilestoreManagerConnection`
 * created by this function.
 */
std::shared_ptr<CloudFilestoreManagerConnection>
MakeCloudFilestoreManagerConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_CLOUD_FILESTORE_MANAGER_CONNECTION_H
