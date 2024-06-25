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
// source: google/cloud/compute/instances/v1/instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_CONNECTION_H

#include "google/cloud/compute/instances/v1/instances_connection_idempotency_policy.h"
#include "google/cloud/compute/instances/v1/internal/instances_retry_traits.h"
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
#include <google/cloud/compute/instances/v1/instances.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `InstancesConnection`.
class InstancesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<InstancesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `InstancesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstancesLimitedErrorCountRetryPolicy : public InstancesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit InstancesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  InstancesLimitedErrorCountRetryPolicy(
      InstancesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : InstancesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  InstancesLimitedErrorCountRetryPolicy(
      InstancesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : InstancesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<InstancesRetryPolicy> clone() const override {
    return std::make_unique<InstancesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstancesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_instances_v1_internal::InstancesRetryTraits>
      impl_;
};

/**
 * A retry policy for `InstancesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstancesLimitedTimeRetryPolicy : public InstancesRetryPolicy {
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
  explicit InstancesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  InstancesLimitedTimeRetryPolicy(
      InstancesLimitedTimeRetryPolicy&& rhs) noexcept
      : InstancesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  InstancesLimitedTimeRetryPolicy(
      InstancesLimitedTimeRetryPolicy const& rhs) noexcept
      : InstancesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<InstancesRetryPolicy> clone() const override {
    return std::make_unique<InstancesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstancesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_instances_v1_internal::InstancesRetryTraits>
      impl_;
};

/**
 * The `InstancesConnection` object for `InstancesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `InstancesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `InstancesClient`.
 *
 * To create a concrete instance, see `MakeInstancesConnection()`.
 *
 * For mocking, see `compute_instances_v1_mocks::MockInstancesConnection`.
 */
class InstancesConnection {
 public:
  virtual ~InstancesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAccessConfig(
      google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddAccessConfig(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAccessConfig(ExperimentalTag,
                  google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(google::cloud::cpp::compute::instances::v1::
                          AddResourcePoliciesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  AddResourcePolicies(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::instances::v1::
                          AddResourcePoliciesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::InstancesScopedList>>
  AggregatedListInstances(
      google::cloud::cpp::compute::instances::v1::AggregatedListInstancesRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachDisk(
      google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AttachDisk(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachDisk(ExperimentalTag,
             google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  BulkInsert(
      google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> BulkInsert(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  BulkInsert(ExperimentalTag,
             google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstance(
      google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstance(ExperimentalTag,
                 google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteAccessConfig(google::cloud::cpp::compute::instances::v1::
                         DeleteAccessConfigRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteAccessConfig(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::instances::v1::
                         DeleteAccessConfigRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteAccessConfig(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachDisk(
      google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> DetachDisk(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachDisk(ExperimentalTag,
             google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Instance> GetInstance(
      google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
          request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::InstancesGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(google::cloud::cpp::compute::instances::v1::
                            GetEffectiveFirewallsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::GuestAttributes>
  GetGuestAttributes(google::cloud::cpp::compute::instances::v1::
                         GetGuestAttributesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Screenshot> GetScreenshot(
      google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>
  GetSerialPortOutput(google::cloud::cpp::compute::instances::v1::
                          GetSerialPortOutputRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>
  GetShieldedInstanceIdentity(
      google::cloud::cpp::compute::instances::v1::
          GetShieldedInstanceIdentityRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstance(
      google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> InsertInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstance(ExperimentalTag,
                 google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::Instance> ListInstances(
      google::cloud::cpp::compute::instances::v1::ListInstancesRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Reference> ListReferrers(
      google::cloud::cpp::compute::instances::v1::ListReferrersRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PerformMaintenance(google::cloud::cpp::compute::instances::v1::
                         PerformMaintenanceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PerformMaintenance(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::instances::v1::
                         PerformMaintenanceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PerformMaintenance(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(google::cloud::cpp::compute::instances::v1::
                             RemoveResourcePoliciesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  RemoveResourcePolicies(ExperimentalTag, NoAwaitTag,
                         google::cloud::cpp::compute::instances::v1::
                             RemoveResourcePoliciesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Reset(
      google::cloud::cpp::compute::instances::v1::ResetRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Reset(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::ResetRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Reset(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resume(
      google::cloud::cpp::compute::instances::v1::ResumeRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Resume(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::ResumeRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resume(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual Status SendDiagnosticInterrupt(
      google::cloud::cpp::compute::instances::v1::
          SendDiagnosticInterruptRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDeletionProtection(google::cloud::cpp::compute::instances::v1::
                            SetDeletionProtectionRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetDeletionProtection(ExperimentalTag, NoAwaitTag,
                        google::cloud::cpp::compute::instances::v1::
                            SetDeletionProtectionRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDeletionProtection(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDiskAutoDelete(google::cloud::cpp::compute::instances::v1::
                        SetDiskAutoDeleteRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetDiskAutoDelete(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::instances::v1::
                        SetDiskAutoDeleteRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDiskAutoDelete(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
                request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(ExperimentalTag,
            google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineResources(google::cloud::cpp::compute::instances::v1::
                          SetMachineResourcesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetMachineResources(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::instances::v1::
                          SetMachineResourcesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineResources(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineType(
      google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetMachineType(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineType(ExperimentalTag,
                 google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMetadata(
      google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetMetadata(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMetadata(ExperimentalTag,
              google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMinCpuPlatform(google::cloud::cpp::compute::instances::v1::
                        SetMinCpuPlatformRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetMinCpuPlatform(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::instances::v1::
                        SetMinCpuPlatformRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMinCpuPlatform(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetName(
      google::cloud::cpp::compute::instances::v1::SetNameRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetName(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetNameRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetName(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetScheduling(
      google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetScheduling(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetScheduling(ExperimentalTag,
                google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(google::cloud::cpp::compute::instances::v1::
                        SetSecurityPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetSecurityPolicy(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::instances::v1::
                        SetSecurityPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetServiceAccount(google::cloud::cpp::compute::instances::v1::
                        SetServiceAccountRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetServiceAccount(ExperimentalTag, NoAwaitTag,
                    google::cloud::cpp::compute::instances::v1::
                        SetServiceAccountRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetServiceAccount(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetShieldedInstanceIntegrityPolicy(
      google::cloud::cpp::compute::instances::v1::
          SetShieldedInstanceIntegrityPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetShieldedInstanceIntegrityPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::
          SetShieldedInstanceIntegrityPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetShieldedInstanceIntegrityPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTags(
      google::cloud::cpp::compute::instances::v1::SetTagsRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetTags(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetTagsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTags(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(google::cloud::cpp::compute::instances::v1::
                               SimulateMaintenanceEventRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SimulateMaintenanceEvent(ExperimentalTag, NoAwaitTag,
                           google::cloud::cpp::compute::instances::v1::
                               SimulateMaintenanceEventRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Start(
      google::cloud::cpp::compute::instances::v1::StartRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Start(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::StartRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Start(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartWithEncryptionKey(google::cloud::cpp::compute::instances::v1::
                             StartWithEncryptionKeyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  StartWithEncryptionKey(ExperimentalTag, NoAwaitTag,
                         google::cloud::cpp::compute::instances::v1::
                             StartWithEncryptionKeyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartWithEncryptionKey(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Stop(
      google::cloud::cpp::compute::instances::v1::StopRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Stop(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::StopRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Stop(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Suspend(
      google::cloud::cpp::compute::instances::v1::SuspendRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Suspend(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SuspendRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Suspend(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::instances::v1::
                         TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateInstance(
      google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateInstance(ExperimentalTag,
                 google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateAccessConfig(google::cloud::cpp::compute::instances::v1::
                         UpdateAccessConfigRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateAccessConfig(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::instances::v1::
                         UpdateAccessConfigRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateAccessConfig(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateDisplayDevice(google::cloud::cpp::compute::instances::v1::
                          UpdateDisplayDeviceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateDisplayDevice(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::instances::v1::
                          UpdateDisplayDeviceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateDisplayDevice(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateNetworkInterface(google::cloud::cpp::compute::instances::v1::
                             UpdateNetworkInterfaceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateNetworkInterface(ExperimentalTag, NoAwaitTag,
                         google::cloud::cpp::compute::instances::v1::
                             UpdateNetworkInterfaceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateNetworkInterface(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateShieldedInstanceConfig(
      google::cloud::cpp::compute::instances::v1::
          UpdateShieldedInstanceConfigRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateShieldedInstanceConfig(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::
          UpdateShieldedInstanceConfigRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateShieldedInstanceConfig(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_CONNECTION_H
