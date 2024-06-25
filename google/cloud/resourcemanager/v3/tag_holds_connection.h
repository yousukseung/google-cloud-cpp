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
// source: google/cloud/resourcemanager/v3/tag_holds.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_H

#include "google/cloud/resourcemanager/v3/internal/tag_holds_retry_traits.h"
#include "google/cloud/resourcemanager/v3/tag_holds_connection_idempotency_policy.h"
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
#include <google/cloud/resourcemanager/v3/tag_holds.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TagHoldsConnection`.
class TagHoldsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TagHoldsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TagHoldsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TagHoldsLimitedErrorCountRetryPolicy : public TagHoldsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TagHoldsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TagHoldsLimitedErrorCountRetryPolicy(
      TagHoldsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TagHoldsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  TagHoldsLimitedErrorCountRetryPolicy(
      TagHoldsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TagHoldsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TagHoldsRetryPolicy> clone() const override {
    return std::make_unique<TagHoldsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TagHoldsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      resourcemanager_v3_internal::TagHoldsRetryTraits>
      impl_;
};

/**
 * A retry policy for `TagHoldsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TagHoldsLimitedTimeRetryPolicy : public TagHoldsRetryPolicy {
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
  explicit TagHoldsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TagHoldsLimitedTimeRetryPolicy(TagHoldsLimitedTimeRetryPolicy&& rhs) noexcept
      : TagHoldsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TagHoldsLimitedTimeRetryPolicy(
      TagHoldsLimitedTimeRetryPolicy const& rhs) noexcept
      : TagHoldsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<TagHoldsRetryPolicy> clone() const override {
    return std::make_unique<TagHoldsLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TagHoldsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      resourcemanager_v3_internal::TagHoldsRetryTraits>
      impl_;
};

/**
 * The `TagHoldsConnection` object for `TagHoldsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TagHoldsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TagHoldsClient`.
 *
 * To create a concrete instance, see `MakeTagHoldsConnection()`.
 *
 * For mocking, see `resourcemanager_v3_mocks::MockTagHoldsConnection`.
 */
class TagHoldsConnection {
 public:
  virtual ~TagHoldsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::resourcemanager::v3::TagHold>>
  CreateTagHold(
      google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateTagHold(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::TagHold>>
  CreateTagHold(ExperimentalTag,
                google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::resourcemanager::v3::DeleteTagHoldMetadata>>
  DeleteTagHold(
      google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteTagHold(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request);

  virtual future<
      StatusOr<google::cloud::resourcemanager::v3::DeleteTagHoldMetadata>>
  DeleteTagHold(ExperimentalTag,
                google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::resourcemanager::v3::TagHold> ListTagHolds(
      google::cloud::resourcemanager::v3::ListTagHoldsRequest request);
};

/**
 * A factory function to construct an object of type `TagHoldsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TagHoldsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TagHoldsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::resourcemanager_v3::TagHoldsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `TagHoldsConnection` created by
 * this function.
 */
std::shared_ptr<TagHoldsConnection> MakeTagHoldsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_TAG_HOLDS_CONNECTION_H
