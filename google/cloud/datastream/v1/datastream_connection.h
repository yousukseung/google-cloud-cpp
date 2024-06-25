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
// source: google/cloud/datastream/v1/datastream.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_DATASTREAM_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_DATASTREAM_CONNECTION_H

#include "google/cloud/datastream/v1/datastream_connection_idempotency_policy.h"
#include "google/cloud/datastream/v1/internal/datastream_retry_traits.h"
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
#include <google/cloud/datastream/v1/datastream.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datastream_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DatastreamConnection`.
class DatastreamRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DatastreamRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DatastreamConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatastreamLimitedErrorCountRetryPolicy : public DatastreamRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DatastreamLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DatastreamLimitedErrorCountRetryPolicy(
      DatastreamLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DatastreamLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DatastreamLimitedErrorCountRetryPolicy(
      DatastreamLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DatastreamLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DatastreamRetryPolicy> clone() const override {
    return std::make_unique<DatastreamLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatastreamRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      datastream_v1_internal::DatastreamRetryTraits>
      impl_;
};

/**
 * A retry policy for `DatastreamConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatastreamLimitedTimeRetryPolicy : public DatastreamRetryPolicy {
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
  explicit DatastreamLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DatastreamLimitedTimeRetryPolicy(
      DatastreamLimitedTimeRetryPolicy&& rhs) noexcept
      : DatastreamLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DatastreamLimitedTimeRetryPolicy(
      DatastreamLimitedTimeRetryPolicy const& rhs) noexcept
      : DatastreamLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DatastreamRetryPolicy> clone() const override {
    return std::make_unique<DatastreamLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatastreamRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      datastream_v1_internal::DatastreamRetryTraits>
      impl_;
};

/**
 * The `DatastreamConnection` object for `DatastreamClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DatastreamClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DatastreamClient`.
 *
 * To create a concrete instance, see `MakeDatastreamConnection()`.
 *
 * For mocking, see `datastream_v1_mocks::MockDatastreamConnection`.
 */
class DatastreamConnection {
 public:
  virtual ~DatastreamConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::datastream::v1::ConnectionProfile>
  ListConnectionProfiles(
      google::cloud::datastream::v1::ListConnectionProfilesRequest request);

  virtual StatusOr<google::cloud::datastream::v1::ConnectionProfile>
  GetConnectionProfile(
      google::cloud::datastream::v1::GetConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  CreateConnectionProfile(
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateConnectionProfile(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  CreateConnectionProfile(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  UpdateConnectionProfile(
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateConnectionProfile(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  UpdateConnectionProfile(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteConnectionProfile(
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteConnectionProfile(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteConnectionProfile(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual StatusOr<
      google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
  DiscoverConnectionProfile(
      google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
          request);

  virtual StreamRange<google::cloud::datastream::v1::Stream> ListStreams(
      google::cloud::datastream::v1::ListStreamsRequest request);

  virtual StatusOr<google::cloud::datastream::v1::Stream> GetStream(
      google::cloud::datastream::v1::GetStreamRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::Stream>> CreateStream(
      google::cloud::datastream::v1::CreateStreamRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateStream(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::CreateStreamRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::Stream>> CreateStream(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::datastream::v1::Stream>> UpdateStream(
      google::cloud::datastream::v1::UpdateStreamRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateStream(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::UpdateStreamRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::Stream>> UpdateStream(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteStream(
      google::cloud::datastream::v1::DeleteStreamRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteStream(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::DeleteStreamRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteStream(ExperimentalTag,
               google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::datastream::v1::StreamObject> GetStreamObject(
      google::cloud::datastream::v1::GetStreamObjectRequest const& request);

  virtual StatusOr<google::cloud::datastream::v1::StreamObject>
  LookupStreamObject(
      google::cloud::datastream::v1::LookupStreamObjectRequest const& request);

  virtual StreamRange<google::cloud::datastream::v1::StreamObject>
  ListStreamObjects(
      google::cloud::datastream::v1::ListStreamObjectsRequest request);

  virtual StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
  StartBackfillJob(
      google::cloud::datastream::v1::StartBackfillJobRequest const& request);

  virtual StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
  StopBackfillJob(
      google::cloud::datastream::v1::StopBackfillJobRequest const& request);

  virtual StreamRange<std::string> FetchStaticIps(
      google::cloud::datastream::v1::FetchStaticIpsRequest request);

  virtual future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreatePrivateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
  CreatePrivateConnection(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::datastream::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::datastream::v1::GetPrivateConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::datastream::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::datastream::v1::ListPrivateConnectionsRequest request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeletePrivateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeletePrivateConnection(ExperimentalTag,
                          google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::datastream::v1::Route>> CreateRoute(
      google::cloud::datastream::v1::CreateRouteRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRoute(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::CreateRouteRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::Route>> CreateRoute(
      ExperimentalTag, google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::datastream::v1::Route> GetRoute(
      google::cloud::datastream::v1::GetRouteRequest const& request);

  virtual StreamRange<google::cloud::datastream::v1::Route> ListRoutes(
      google::cloud::datastream::v1::ListRoutesRequest request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteRoute(google::cloud::datastream::v1::DeleteRouteRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRoute(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datastream::v1::DeleteRouteRequest const& request);

  virtual future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteRoute(ExperimentalTag, google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type `DatastreamConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DatastreamClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DatastreamConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datastream_v1::DatastreamPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DatastreamConnection` created by
 * this function.
 */
std::shared_ptr<DatastreamConnection> MakeDatastreamConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_DATASTREAM_CONNECTION_H
