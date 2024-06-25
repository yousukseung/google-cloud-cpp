// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H

#include "google/cloud/spanner/admin/database_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/internal/database_admin_retry_traits.h"
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
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/database/v1/spanner_database_admin.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DatabaseAdminConnection`.
class DatabaseAdminRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DatabaseAdminRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DatabaseAdminConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatabaseAdminLimitedErrorCountRetryPolicy
    : public DatabaseAdminRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DatabaseAdminLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DatabaseAdminLimitedErrorCountRetryPolicy(
      DatabaseAdminLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DatabaseAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DatabaseAdminLimitedErrorCountRetryPolicy(
      DatabaseAdminLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DatabaseAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DatabaseAdminRetryPolicy> clone() const override {
    return std::make_unique<DatabaseAdminLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatabaseAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      spanner_admin_internal::DatabaseAdminRetryTraits>
      impl_;
};

/**
 * A retry policy for `DatabaseAdminConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatabaseAdminLimitedTimeRetryPolicy : public DatabaseAdminRetryPolicy {
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
  explicit DatabaseAdminLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DatabaseAdminLimitedTimeRetryPolicy(
      DatabaseAdminLimitedTimeRetryPolicy&& rhs) noexcept
      : DatabaseAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DatabaseAdminLimitedTimeRetryPolicy(
      DatabaseAdminLimitedTimeRetryPolicy const& rhs) noexcept
      : DatabaseAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DatabaseAdminRetryPolicy> clone() const override {
    return std::make_unique<DatabaseAdminLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatabaseAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      spanner_admin_internal::DatabaseAdminRetryTraits>
      impl_;
};

/**
 * The `DatabaseAdminConnection` object for `DatabaseAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DatabaseAdminClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DatabaseAdminClient`.
 *
 * To create a concrete instance, see `MakeDatabaseAdminConnection()`.
 *
 * For mocking, see `spanner_admin_mocks::MockDatabaseAdminConnection`.
 */
class DatabaseAdminConnection {
 public:
  virtual ~DatabaseAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::spanner::admin::database::v1::Database>
  ListDatabases(
      google::spanner::admin::database::v1::ListDatabasesRequest request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateDatabase(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(ExperimentalTag,
                 google::longrunning::Operation const& operation);

  virtual StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      google::spanner::admin::database::v1::GetDatabaseRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  UpdateDatabase(
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateDatabase(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::UpdateDatabaseRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  UpdateDatabase(ExperimentalTag,
                 google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateDatabaseDdl(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request);

  virtual future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(ExperimentalTag,
                    google::longrunning::Operation const& operation);

  virtual Status DropDatabase(
      google::spanner::admin::database::v1::DropDatabaseRequest const& request);

  virtual StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CreateBackup(
      google::spanner::admin::database::v1::CreateBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateBackup(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::CreateBackupRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CreateBackup(ExperimentalTag,
               google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CopyBackup(
      google::spanner::admin::database::v1::CopyBackupRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CopyBackup(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::CopyBackupRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CopyBackup(ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      google::spanner::admin::database::v1::GetBackupRequest const& request);

  virtual StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      google::spanner::admin::database::v1::UpdateBackupRequest const& request);

  virtual Status DeleteBackup(
      google::spanner::admin::database::v1::DeleteBackupRequest const& request);

  virtual StreamRange<google::spanner::admin::database::v1::Backup> ListBackups(
      google::spanner::admin::database::v1::ListBackupsRequest request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> RestoreDatabase(
      ExperimentalTag, NoAwaitTag,
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(ExperimentalTag,
                  google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation> ListDatabaseOperations(
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest
          request);

  virtual StreamRange<google::longrunning::Operation> ListBackupOperations(
      google::spanner::admin::database::v1::ListBackupOperationsRequest
          request);

  virtual StreamRange<google::spanner::admin::database::v1::DatabaseRole>
  ListDatabaseRoles(
      google::spanner::admin::database::v1::ListDatabaseRolesRequest request);
};

/**
 * A factory function to construct an object of type `DatabaseAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DatabaseAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DatabaseAdminConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::spanner_admin::DatabaseAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DatabaseAdminConnection` created by
 * this function.
 */
std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H
