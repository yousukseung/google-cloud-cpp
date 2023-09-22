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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_rest_stub.h"
#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_retry_traits.h"
#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_connection.h"
#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_connection_idempotency_policy.h"
#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_options.h"
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
namespace compute_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VpnGatewaysRestConnectionImpl
    : public compute_vpn_gateways_v1::VpnGatewaysConnection {
 public:
  ~VpnGatewaysRestConnectionImpl() override = default;

  VpnGatewaysRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_vpn_gateways_v1_internal::VpnGatewaysRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::VpnGatewaysScopedList>>
  AggregatedListVpnGateways(
      google::cloud::cpp::compute::vpn_gateways::v1::
          AggregatedListVpnGatewaysRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteVpnGateway(
      google::cloud::cpp::compute::vpn_gateways::v1::
          DeleteVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::VpnGateway> GetVpnGateway(
      google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewayRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
  GetStatus(
      google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertVpnGateway(
      google::cloud::cpp::compute::vpn_gateways::v1::
          InsertVpnGatewayRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::VpnGateway> ListVpnGateways(
      google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::vpn_gateways::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<compute_vpn_gateways_v1::VpnGatewaysRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_vpn_gateways_v1::VpnGatewaysRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_vpn_gateways_v1::VpnGatewaysBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_vpn_gateways_v1::VpnGatewaysConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_vpn_gateways_v1::
                 VpnGatewaysConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_vpn_gateways_v1::VpnGatewaysPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_vpn_gateways_v1_internal::VpnGatewaysRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
