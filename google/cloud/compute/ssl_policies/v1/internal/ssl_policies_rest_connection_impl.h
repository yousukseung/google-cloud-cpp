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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/ssl_policies/v1/internal/ssl_policies_rest_stub.h"
#include "google/cloud/compute/ssl_policies/v1/internal/ssl_policies_retry_traits.h"
#include "google/cloud/compute/ssl_policies/v1/ssl_policies_connection.h"
#include "google/cloud/compute/ssl_policies/v1/ssl_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/ssl_policies/v1/ssl_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SslPoliciesRestConnectionImpl
    : public compute_ssl_policies_v1::SslPoliciesConnection {
 public:
  ~SslPoliciesRestConnectionImpl() override = default;

  SslPoliciesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_ssl_policies_v1_internal::SslPoliciesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::SslPoliciesScopedList>>
  AggregatedListSslPolicies(
      google::cloud::cpp::compute::ssl_policies::v1::
          AggregatedListSslPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSslPolicy(
      google::cloud::cpp::compute::ssl_policies::v1::
          DeleteSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSslPolicy(
      NoAwaitTag, google::cloud::cpp::compute::ssl_policies::v1::
                      DeleteSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSslPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetSslPolicy(
      google::cloud::cpp::compute::ssl_policies::v1::GetSslPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSslPolicy(
      google::cloud::cpp::compute::ssl_policies::v1::
          InsertSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSslPolicy(
      NoAwaitTag, google::cloud::cpp::compute::ssl_policies::v1::
                      InsertSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSslPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::SslPolicy> ListSslPolicies(
      google::cloud::cpp::compute::ssl_policies::v1::ListSslPoliciesRequest
          request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
  ListAvailableFeatures(
      google::cloud::cpp::compute::ssl_policies::v1::
          ListAvailableFeaturesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchSslPolicy(
      google::cloud::cpp::compute::ssl_policies::v1::
          PatchSslPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchSslPolicy(
      NoAwaitTag, google::cloud::cpp::compute::ssl_policies::v1::
                      PatchSslPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchSslPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_ssl_policies_v1::SslPoliciesRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_ssl_policies_v1::SslPoliciesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_ssl_policies_v1::SslPoliciesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_ssl_policies_v1::SslPoliciesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_ssl_policies_v1::
                 SslPoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_ssl_policies_v1::SslPoliciesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_ssl_policies_v1_internal::SslPoliciesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_CONNECTION_IMPL_H
