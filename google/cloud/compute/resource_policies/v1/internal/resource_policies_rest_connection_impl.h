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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_stub.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_retry_traits.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_connection.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ResourcePoliciesRestConnectionImpl
    : public compute_resource_policies_v1::ResourcePoliciesConnection {
 public:
  ~ResourcePoliciesRestConnectionImpl() override = default;

  ResourcePoliciesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_resource_policies_v1_internal::ResourcePoliciesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ResourcePoliciesScopedList>>
  AggregatedListResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          AggregatedListResourcePoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                           DeleteResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteResourcePolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::resource_policies::v1::
          DeleteResourcePolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteResourcePolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy> GetResourcePolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          GetResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                           InsertResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertResourcePolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::resource_policies::v1::
          InsertResourcePolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertResourcePolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::ResourcePolicy>
  ListResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::
                           ListResourcePoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                          PatchResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchResourcePolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::resource_policies::v1::
          PatchResourcePolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchResourcePolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::resource_policies::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<
      compute_resource_policies_v1::ResourcePoliciesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<
            compute_resource_policies_v1::ResourcePoliciesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_resource_policies_v1::ResourcePoliciesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_resource_policies_v1::
                 ResourcePoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<
            compute_resource_policies_v1::ResourcePoliciesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_resource_policies_v1_internal::ResourcePoliciesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H
