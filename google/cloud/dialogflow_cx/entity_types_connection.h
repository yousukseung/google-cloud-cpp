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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_cx/entity_types_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/entity_type.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `EntityTypesConnection`.
class EntityTypesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<EntityTypesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `EntityTypesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EntityTypesLimitedErrorCountRetryPolicy : public EntityTypesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit EntityTypesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  EntityTypesLimitedErrorCountRetryPolicy(
      EntityTypesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : EntityTypesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  EntityTypesLimitedErrorCountRetryPolicy(
      EntityTypesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : EntityTypesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EntityTypesRetryPolicy> clone() const override {
    return std::make_unique<EntityTypesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EntityTypesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      dialogflow_cx_internal::EntityTypesRetryTraits>
      impl_;
};

/**
 * A retry policy for `EntityTypesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EntityTypesLimitedTimeRetryPolicy : public EntityTypesRetryPolicy {
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
  explicit EntityTypesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  EntityTypesLimitedTimeRetryPolicy(
      EntityTypesLimitedTimeRetryPolicy&& rhs) noexcept
      : EntityTypesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  EntityTypesLimitedTimeRetryPolicy(
      EntityTypesLimitedTimeRetryPolicy const& rhs) noexcept
      : EntityTypesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<EntityTypesRetryPolicy> clone() const override {
    return std::make_unique<EntityTypesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EntityTypesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      dialogflow_cx_internal::EntityTypesRetryTraits>
      impl_;
};

/**
 * The `EntityTypesConnection` object for `EntityTypesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EntityTypesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EntityTypesClient`.
 *
 * To create a concrete instance, see `MakeEntityTypesConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockEntityTypesConnection`.
 */
class EntityTypesConnection {
 public:
  virtual ~EntityTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&
          request);

  virtual Status DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&
          request);

  virtual StreamRange<google::cloud::dialogflow::cx::v3::EntityType>
  ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ExportEntityTypes(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportEntityTypesRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportEntityTypesResponse>>
  ExportEntityTypes(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ImportEntityTypes(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportEntityTypesRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportEntityTypesResponse>>
  ImportEntityTypes(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type `EntityTypesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EntityTypesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EntityTypesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::EntityTypesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `EntityTypesConnection` created by
 * this function.
 */
std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
