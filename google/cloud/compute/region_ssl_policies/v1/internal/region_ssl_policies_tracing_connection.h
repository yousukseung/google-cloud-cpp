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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_TRACING_CONNECTION_H

#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionSslPoliciesTracingConnection
    : public compute_region_ssl_policies_v1::RegionSslPoliciesConnection {
 public:
  ~RegionSslPoliciesTracingConnection() override = default;

  explicit RegionSslPoliciesTracingConnection(
      std::shared_ptr<
          compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSslPolicy(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          DeleteSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSslPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          DeleteSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSslPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetSslPolicy(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          GetSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSslPolicy(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          InsertSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSslPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          InsertSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSslPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::SslPolicy> ListRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListRegionSslPoliciesRequest request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
  ListAvailableFeatures(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListAvailableFeaturesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchSslPolicy(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          PatchSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSslPolicy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          PatchSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchSslPolicy(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
MakeRegionSslPoliciesTracingConnection(
    std::shared_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_TRACING_CONNECTION_H
