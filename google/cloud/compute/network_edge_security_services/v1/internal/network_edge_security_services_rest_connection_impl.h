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
// source:
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_rest_stub.h"
#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_retry_traits.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection_idempotency_policy.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_options.h"
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
namespace compute_network_edge_security_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkEdgeSecurityServicesRestConnectionImpl
    : public compute_network_edge_security_services_v1::
          NetworkEdgeSecurityServicesConnection {
 public:
  ~NetworkEdgeSecurityServicesRestConnectionImpl() override = default;

  NetworkEdgeSecurityServicesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_network_edge_security_services_v1_internal::
                          NetworkEdgeSecurityServicesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         NetworkEdgeSecurityServicesScopedList>>
  AggregatedListNetworkEdgeSecurityServices(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          AggregatedListNetworkEdgeSecurityServicesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          DeleteNetworkEdgeSecurityServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteNetworkEdgeSecurityService(
      NoAwaitTag,
      google::cloud::cpp::compute::network_edge_security_services::v1::
          DeleteNetworkEdgeSecurityServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEdgeSecurityService(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
  GetNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          GetNetworkEdgeSecurityServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          InsertNetworkEdgeSecurityServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertNetworkEdgeSecurityService(
      NoAwaitTag,
      google::cloud::cpp::compute::network_edge_security_services::v1::
          InsertNetworkEdgeSecurityServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEdgeSecurityService(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          PatchNetworkEdgeSecurityServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchNetworkEdgeSecurityService(
      NoAwaitTag,
      google::cloud::cpp::compute::network_edge_security_services::v1::
          PatchNetworkEdgeSecurityServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkEdgeSecurityService(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_network_edge_security_services_v1::
                             NetworkEdgeSecurityServicesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_network_edge_security_services_v1::
                 NetworkEdgeSecurityServicesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_network_edge_security_services_v1::
                 NetworkEdgeSecurityServicesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_network_edge_security_services_v1::
          NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_network_edge_security_services_v1::
                 NetworkEdgeSecurityServicesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_network_edge_security_services_v1::
                 NetworkEdgeSecurityServicesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_network_edge_security_services_v1_internal::
                      NetworkEdgeSecurityServicesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_REST_CONNECTION_IMPL_H
