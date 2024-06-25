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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_H

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection_idempotency_policy.h"
#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_retry_traits.h"
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
#include <google/cloud/compute/backend_buckets/v1/backend_buckets.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `BackendBucketsConnection`.
class BackendBucketsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<BackendBucketsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `BackendBucketsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BackendBucketsLimitedErrorCountRetryPolicy
    : public BackendBucketsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit BackendBucketsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  BackendBucketsLimitedErrorCountRetryPolicy(
      BackendBucketsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : BackendBucketsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  BackendBucketsLimitedErrorCountRetryPolicy(
      BackendBucketsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : BackendBucketsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<BackendBucketsRetryPolicy> clone() const override {
    return std::make_unique<BackendBucketsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BackendBucketsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_backend_buckets_v1_internal::BackendBucketsRetryTraits>
      impl_;
};

/**
 * A retry policy for `BackendBucketsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BackendBucketsLimitedTimeRetryPolicy : public BackendBucketsRetryPolicy {
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
  explicit BackendBucketsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  BackendBucketsLimitedTimeRetryPolicy(
      BackendBucketsLimitedTimeRetryPolicy&& rhs) noexcept
      : BackendBucketsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  BackendBucketsLimitedTimeRetryPolicy(
      BackendBucketsLimitedTimeRetryPolicy const& rhs) noexcept
      : BackendBucketsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<BackendBucketsRetryPolicy> clone() const override {
    return std::make_unique<BackendBucketsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BackendBucketsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_backend_buckets_v1_internal::BackendBucketsRetryTraits>
      impl_;
};

/**
 * The `BackendBucketsConnection` object for `BackendBucketsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BackendBucketsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BackendBucketsClient`.
 *
 * To create a concrete instance, see `MakeBackendBucketsConnection()`.
 *
 * For mocking, see
 * `compute_backend_buckets_v1_mocks::MockBackendBucketsConnection`.
 */
class BackendBucketsConnection {
 public:
  virtual ~BackendBucketsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddSignedUrlKey(google::cloud::cpp::compute::backend_buckets::v1::
                      AddSignedUrlKeyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> AddSignedUrlKey(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::backend_buckets::v1::
          AddSignedUrlKeyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddSignedUrlKey(ExperimentalTag,
                  google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          DeleteBackendBucketRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteBackendBucket(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::backend_buckets::v1::
                          DeleteBackendBucketRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendBucket(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSignedUrlKey(google::cloud::cpp::compute::backend_buckets::v1::
                         DeleteSignedUrlKeyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteSignedUrlKey(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::backend_buckets::v1::
                         DeleteSignedUrlKeyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSignedUrlKey(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendBucket>
  GetBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                       GetBackendBucketRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          InsertBackendBucketRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertBackendBucket(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::backend_buckets::v1::
                          InsertBackendBucketRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendBucket(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
  ListBackendBuckets(google::cloud::cpp::compute::backend_buckets::v1::
                         ListBackendBucketsRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                         PatchBackendBucketRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchBackendBucket(ExperimentalTag, NoAwaitTag,
                     google::cloud::cpp::compute::backend_buckets::v1::
                         PatchBackendBucketRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendBucket(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetEdgeSecurityPolicy(google::cloud::cpp::compute::backend_buckets::v1::
                            SetEdgeSecurityPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetEdgeSecurityPolicy(ExperimentalTag, NoAwaitTag,
                        google::cloud::cpp::compute::backend_buckets::v1::
                            SetEdgeSecurityPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetEdgeSecurityPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::backend_buckets::v1::
                         TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          UpdateBackendBucketRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateBackendBucket(ExperimentalTag, NoAwaitTag,
                      google::cloud::cpp::compute::backend_buckets::v1::
                          UpdateBackendBucketRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendBucket(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_BACKEND_BUCKETS_CONNECTION_H
