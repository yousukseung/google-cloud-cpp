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
// source: google/cloud/dialogflow/cx/v3/changelog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CONNECTION_H

#include "google/cloud/dialogflow_cx/changelogs_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/internal/changelogs_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/changelog.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ChangelogsConnection`.
class ChangelogsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ChangelogsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ChangelogsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ChangelogsLimitedErrorCountRetryPolicy : public ChangelogsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ChangelogsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ChangelogsLimitedErrorCountRetryPolicy(
      ChangelogsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ChangelogsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ChangelogsLimitedErrorCountRetryPolicy(
      ChangelogsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ChangelogsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ChangelogsRetryPolicy> clone() const override {
    return std::make_unique<ChangelogsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ChangelogsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dialogflow_cx_internal::ChangelogsRetryTraits>
      impl_;
};

/**
 * A retry policy for `ChangelogsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ChangelogsLimitedTimeRetryPolicy : public ChangelogsRetryPolicy {
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
  explicit ChangelogsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ChangelogsLimitedTimeRetryPolicy(
      ChangelogsLimitedTimeRetryPolicy&& rhs) noexcept
      : ChangelogsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ChangelogsLimitedTimeRetryPolicy(
      ChangelogsLimitedTimeRetryPolicy const& rhs) noexcept
      : ChangelogsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<ChangelogsRetryPolicy> clone() const override {
    return std::make_unique<ChangelogsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ChangelogsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dialogflow_cx_internal::ChangelogsRetryTraits>
      impl_;
};

/**
 * The `ChangelogsConnection` object for `ChangelogsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ChangelogsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ChangelogsClient`.
 *
 * To create a concrete instance, see `MakeChangelogsConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockChangelogsConnection`.
 */
class ChangelogsConnection {
 public:
  virtual ~ChangelogsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::Changelog>
  ListChangelogs(
      google::cloud::dialogflow::cx::v3::ListChangelogsRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Changelog> GetChangelog(
      google::cloud::dialogflow::cx::v3::GetChangelogRequest const& request);
};

/**
 * A factory function to construct an object of type `ChangelogsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ChangelogsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ChangelogsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::ChangelogsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `ChangelogsConnection` created by
 * this function.
 */
std::shared_ptr<ChangelogsConnection> MakeChangelogsConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<ChangelogsConnection> MakeChangelogsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CONNECTION_H
