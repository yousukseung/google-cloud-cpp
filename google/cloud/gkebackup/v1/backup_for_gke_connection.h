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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_BACKUP_FOR_GKE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_BACKUP_FOR_GKE_CONNECTION_H

#include "google/cloud/gkebackup/v1/backup_for_gke_connection_idempotency_policy.h"
#include "google/cloud/gkebackup/v1/internal/backup_for_gke_retry_traits.h"
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
#include <google/cloud/gkebackup/v1/gkebackup.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkebackup_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `BackupForGKEConnection`.
class BackupForGKERetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<BackupForGKERetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `BackupForGKEConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BackupForGKELimitedErrorCountRetryPolicy
    : public BackupForGKERetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit BackupForGKELimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  BackupForGKELimitedErrorCountRetryPolicy(
      BackupForGKELimitedErrorCountRetryPolicy&& rhs) noexcept
      : BackupForGKELimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  BackupForGKELimitedErrorCountRetryPolicy(
      BackupForGKELimitedErrorCountRetryPolicy const& rhs) noexcept
      : BackupForGKELimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<BackupForGKERetryPolicy> clone() const override {
    return std::make_unique<BackupForGKELimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BackupForGKERetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      gkebackup_v1_internal::BackupForGKERetryTraits>
      impl_;
};

/**
 * A retry policy for `BackupForGKEConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BackupForGKELimitedTimeRetryPolicy : public BackupForGKERetryPolicy {
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
  explicit BackupForGKELimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  BackupForGKELimitedTimeRetryPolicy(
      BackupForGKELimitedTimeRetryPolicy&& rhs) noexcept
      : BackupForGKELimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  BackupForGKELimitedTimeRetryPolicy(
      BackupForGKELimitedTimeRetryPolicy const& rhs) noexcept
      : BackupForGKELimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<BackupForGKERetryPolicy> clone() const override {
    return std::make_unique<BackupForGKELimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BackupForGKERetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      gkebackup_v1_internal::BackupForGKERetryTraits>
      impl_;
};

/**
 * The `BackupForGKEConnection` object for `BackupForGKEClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BackupForGKEClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BackupForGKEClient`.
 *
 * To create a concrete instance, see `MakeBackupForGKEConnection()`.
 *
 * For mocking, see `gkebackup_v1_mocks::MockBackupForGKEConnection`.
 */
class BackupForGKEConnection {
 public:
  virtual ~BackupForGKEConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
  CreateBackupPlan(
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateBackupPlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
  CreateBackupPlan(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::BackupPlan> ListBackupPlans(
      google::cloud::gkebackup::v1::ListBackupPlansRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::BackupPlan> GetBackupPlan(
      google::cloud::gkebackup::v1::GetBackupPlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
  UpdateBackupPlan(
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateBackupPlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
  UpdateBackupPlan(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackupPlan(
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteBackupPlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackupPlan(ExperimentalTag,
                   google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Backup>> CreateBackup(
      google::cloud::gkebackup::v1::CreateBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateBackup(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::CreateBackupRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Backup>> CreateBackup(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::Backup> ListBackups(
      google::cloud::gkebackup::v1::ListBackupsRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::Backup> GetBackup(
      google::cloud::gkebackup::v1::GetBackupRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Backup>> UpdateBackup(
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateBackup(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Backup>> UpdateBackup(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackup(
      google::cloud::gkebackup::v1::DeleteBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteBackup(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::DeleteBackupRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteBackup(ExperimentalTag,
               google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::VolumeBackup>
  ListVolumeBackups(
      google::cloud::gkebackup::v1::ListVolumeBackupsRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::VolumeBackup> GetVolumeBackup(
      google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
  CreateRestorePlan(
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRestorePlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
  CreateRestorePlan(ExperimentalTag,
                    google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::RestorePlan>
  ListRestorePlans(
      google::cloud::gkebackup::v1::ListRestorePlansRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::RestorePlan> GetRestorePlan(
      google::cloud::gkebackup::v1::GetRestorePlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
  UpdateRestorePlan(
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateRestorePlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
  UpdateRestorePlan(ExperimentalTag,
                    google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestorePlan(
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRestorePlan(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestorePlan(ExperimentalTag,
                    google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Restore>> CreateRestore(
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRestore(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Restore>> CreateRestore(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::Restore> ListRestores(
      google::cloud::gkebackup::v1::ListRestoresRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::Restore> GetRestore(
      google::cloud::gkebackup::v1::GetRestoreRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Restore>> UpdateRestore(
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateRestore(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::Restore>> UpdateRestore(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestore(
      google::cloud::gkebackup::v1::DeleteRestoreRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRestore(
      ExperimentalTag, NoAwaitTag,
      google::cloud::gkebackup::v1::DeleteRestoreRequest const& request);

  virtual future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
  DeleteRestore(ExperimentalTag,
                google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::gkebackup::v1::VolumeRestore>
  ListVolumeRestores(
      google::cloud::gkebackup::v1::ListVolumeRestoresRequest request);

  virtual StatusOr<google::cloud::gkebackup::v1::VolumeRestore>
  GetVolumeRestore(
      google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request);

  virtual StatusOr<
      google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse>
  GetBackupIndexDownloadUrl(
      google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlRequest const&
          request);
};

/**
 * A factory function to construct an object of type `BackupForGKEConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of BackupForGKEClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BackupForGKEConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::gkebackup_v1::BackupForGKEPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BackupForGKEConnection` created by
 * this function.
 */
std::shared_ptr<BackupForGKEConnection> MakeBackupForGKEConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_BACKUP_FOR_GKE_CONNECTION_H
