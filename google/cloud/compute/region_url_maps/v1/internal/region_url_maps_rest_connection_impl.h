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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_stub.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_retry_traits.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps_connection.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps_connection_idempotency_policy.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps_options.h"
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
namespace compute_region_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionUrlMapsRestConnectionImpl
    : public compute_region_url_maps_v1::RegionUrlMapsConnection {
 public:
  ~RegionUrlMapsRestConnectionImpl() override = default;

  RegionUrlMapsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_region_url_maps_v1_internal::RegionUrlMapsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::
          DeleteUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::GetUrlMapRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::
          InsertUrlMapRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::UrlMap> ListRegionUrlMaps(
      google::cloud::cpp::compute::region_url_maps::v1::ListRegionUrlMapsRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::
          PatchUrlMapRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateUrlMap(
      google::cloud::cpp::compute::region_url_maps::v1::
          UpdateUrlMapRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse> Validate(
      google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
          request) override;

 private:
  static std::unique_ptr<compute_region_url_maps_v1::RegionUrlMapsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_region_url_maps_v1::RegionUrlMapsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_region_url_maps_v1::RegionUrlMapsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_region_url_maps_v1::RegionUrlMapsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_region_url_maps_v1::
                 RegionUrlMapsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_region_url_maps_v1::RegionUrlMapsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_url_maps_v1_internal::RegionUrlMapsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_INTERNAL_REGION_URL_MAPS_REST_CONNECTION_IMPL_H
