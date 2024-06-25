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

#include "google/cloud/compute/resource_policies/v1/resource_policies_connection.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_option_defaults.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_tracing_connection.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourcePoliciesConnection::~ResourcePoliciesConnection() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::ResourcePoliciesScopedList>>
ResourcePoliciesConnection::AggregatedListResourcePolicies(
    google::cloud::cpp::compute::resource_policies::v1::
        AggregatedListResourcePoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                             ResourcePoliciesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::DeleteResourcePolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        DeleteResourcePolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ResourcePoliciesConnection::DeleteResourcePolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::resource_policies::v1::
        DeleteResourcePolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::DeleteResourcePolicy(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy>
ResourcePoliciesConnection::GetResourcePolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        GetResourcePolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ResourcePoliciesConnection::GetIamPolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::InsertResourcePolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        InsertResourcePolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ResourcePoliciesConnection::InsertResourcePolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::resource_policies::v1::
        InsertResourcePolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::InsertResourcePolicy(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::ResourcePolicy>
ResourcePoliciesConnection::ListResourcePolicies(
    google::cloud::cpp::compute::resource_policies::v1::
        ListResourcePoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::ResourcePolicy>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::PatchResourcePolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        PatchResourcePolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ResourcePoliciesConnection::PatchResourcePolicy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::resource_policies::v1::
        PatchResourcePolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesConnection::PatchResourcePolicy(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ResourcePoliciesConnection::SetIamPolicy(
    google::cloud::cpp::compute::resource_policies::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ResourcePoliciesConnection::TestIamPermissions(
    google::cloud::cpp::compute::resource_policies::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1
}  // namespace cloud
}  // namespace google
