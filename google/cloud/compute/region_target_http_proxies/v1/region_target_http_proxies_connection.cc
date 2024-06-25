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
// google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies.proto

#include "google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies_connection.h"
#include "google/cloud/compute/region_target_http_proxies/v1/internal/region_target_http_proxies_option_defaults.h"
#include "google/cloud/compute/region_target_http_proxies/v1/internal/region_target_http_proxies_tracing_connection.h"
#include "google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies_options.h"
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
namespace compute_region_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetHttpProxiesConnection::~RegionTargetHttpProxiesConnection() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::DeleteTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        DeleteTargetHttpProxyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetHttpProxiesConnection::DeleteTargetHttpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        DeleteTargetHttpProxyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::DeleteTargetHttpProxy(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesConnection::GetTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        GetTargetHttpProxyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::InsertTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        InsertTargetHttpProxyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetHttpProxiesConnection::InsertTargetHttpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        InsertTargetHttpProxyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::InsertTargetHttpProxy(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesConnection::ListRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        ListRegionTargetHttpProxiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::SetUrlMap(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        SetUrlMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionTargetHttpProxiesConnection::SetUrlMap(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        SetUrlMapRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesConnection::SetUrlMap(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_http_proxies_v1
}  // namespace cloud
}  // namespace google
