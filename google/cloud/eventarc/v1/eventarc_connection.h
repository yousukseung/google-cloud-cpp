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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_H

#include "google/cloud/eventarc/v1/eventarc_connection_idempotency_policy.h"
#include "google/cloud/eventarc/v1/internal/eventarc_retry_traits.h"
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
#include <google/cloud/eventarc/v1/eventarc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `EventarcConnection`.
class EventarcRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<EventarcRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `EventarcConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class EventarcLimitedErrorCountRetryPolicy : public EventarcRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit EventarcLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  EventarcLimitedErrorCountRetryPolicy(
      EventarcLimitedErrorCountRetryPolicy&& rhs) noexcept
      : EventarcLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  EventarcLimitedErrorCountRetryPolicy(
      EventarcLimitedErrorCountRetryPolicy const& rhs) noexcept
      : EventarcLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EventarcRetryPolicy> clone() const override {
    return std::make_unique<EventarcLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EventarcRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      eventarc_v1_internal::EventarcRetryTraits>
      impl_;
};

/**
 * A retry policy for `EventarcConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kUnknown`](@ref google::cloud::StatusCode)
 */
class EventarcLimitedTimeRetryPolicy : public EventarcRetryPolicy {
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
  explicit EventarcLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  EventarcLimitedTimeRetryPolicy(EventarcLimitedTimeRetryPolicy&& rhs) noexcept
      : EventarcLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  EventarcLimitedTimeRetryPolicy(
      EventarcLimitedTimeRetryPolicy const& rhs) noexcept
      : EventarcLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<EventarcRetryPolicy> clone() const override {
    return std::make_unique<EventarcLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EventarcRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      eventarc_v1_internal::EventarcRetryTraits>
      impl_;
};

/**
 * The `EventarcConnection` object for `EventarcClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EventarcClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EventarcClient`.
 *
 * To create a concrete instance, see `MakeEventarcConnection()`.
 *
 * For mocking, see `eventarc_v1_mocks::MockEventarcConnection`.
 */
class EventarcConnection {
 public:
  virtual ~EventarcConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::eventarc::v1::Trigger> GetTrigger(
      google::cloud::eventarc::v1::GetTriggerRequest const& request);

  virtual StreamRange<google::cloud::eventarc::v1::Trigger> ListTriggers(
      google::cloud::eventarc::v1::ListTriggersRequest request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> CreateTrigger(
      google::cloud::eventarc::v1::CreateTriggerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateTrigger(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::CreateTriggerRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> CreateTrigger(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> UpdateTrigger(
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateTrigger(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> UpdateTrigger(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> DeleteTrigger(
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteTrigger(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Trigger>> DeleteTrigger(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::eventarc::v1::Channel> GetChannel(
      google::cloud::eventarc::v1::GetChannelRequest const& request);

  virtual StreamRange<google::cloud::eventarc::v1::Channel> ListChannels(
      google::cloud::eventarc::v1::ListChannelsRequest request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> CreateChannel(
      google::cloud::eventarc::v1::CreateChannelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateChannel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::CreateChannelRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> CreateChannel(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> UpdateChannel(
      google::cloud::eventarc::v1::UpdateChannelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateChannel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::UpdateChannelRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> UpdateChannel(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> DeleteChannel(
      google::cloud::eventarc::v1::DeleteChannelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteChannel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::DeleteChannelRequest const& request);

  virtual future<StatusOr<google::cloud::eventarc::v1::Channel>> DeleteChannel(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::eventarc::v1::Provider> GetProvider(
      google::cloud::eventarc::v1::GetProviderRequest const& request);

  virtual StreamRange<google::cloud::eventarc::v1::Provider> ListProviders(
      google::cloud::eventarc::v1::ListProvidersRequest request);

  virtual StatusOr<google::cloud::eventarc::v1::ChannelConnection>
  GetChannelConnection(
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request);

  virtual StreamRange<google::cloud::eventarc::v1::ChannelConnection>
  ListChannelConnections(
      google::cloud::eventarc::v1::ListChannelConnectionsRequest request);

  virtual future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  CreateChannelConnection(
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateChannelConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  CreateChannelConnection(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  DeleteChannelConnection(
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteChannelConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>
  DeleteChannelConnection(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  GetGoogleChannelConfig(
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&
          request);

  virtual StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
  UpdateGoogleChannelConfig(
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request);
};

/**
 * A factory function to construct an object of type `EventarcConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EventarcClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EventarcConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::eventarc_v1::EventarcPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `EventarcConnection` created by
 * this function.
 */
std::shared_ptr<EventarcConnection> MakeEventarcConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_H
