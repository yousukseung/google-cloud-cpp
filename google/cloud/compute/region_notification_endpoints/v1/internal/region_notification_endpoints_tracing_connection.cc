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
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#include "google/cloud/compute/region_notification_endpoints/v1/internal/region_notification_endpoints_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionNotificationEndpointsTracingConnection::
    RegionNotificationEndpointsTracingConnection(
        std::shared_ptr<compute_region_notification_endpoints_v1::
                            RegionNotificationEndpointsConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsTracingConnection::DeleteNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        DeleteNotificationEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::DeleteNotificationEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNotificationEndpoint(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNotificationEndpointsTracingConnection::DeleteNotificationEndpoint(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        DeleteNotificationEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::DeleteNotificationEndpoint");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteNotificationEndpoint(ExperimentalTag{}, NoAwaitTag{},
                                                request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsTracingConnection::DeleteNotificationEndpoint(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::DeleteNotificationEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNotificationEndpoint(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsTracingConnection::GetNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        GetNotificationEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::GetNotificationEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNotificationEndpoint(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsTracingConnection::InsertNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        InsertNotificationEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::InsertNotificationEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNotificationEndpoint(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNotificationEndpointsTracingConnection::InsertNotificationEndpoint(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        InsertNotificationEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::InsertNotificationEndpoint");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InsertNotificationEndpoint(ExperimentalTag{}, NoAwaitTag{},
                                                request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsTracingConnection::InsertNotificationEndpoint(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::InsertNotificationEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertNotificationEndpoint(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsTracingConnection::ListRegionNotificationEndpoints(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        ListRegionNotificationEndpointsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_notification_endpoints_v1::"
      "RegionNotificationEndpointsConnection::ListRegionNotificationEndpoints");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionNotificationEndpoints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NotificationEndpoint>(std::move(span),
                                                             std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_notification_endpoints_v1::
                    RegionNotificationEndpointsConnection>
MakeRegionNotificationEndpointsTracingConnection(
    std::shared_ptr<compute_region_notification_endpoints_v1::
                        RegionNotificationEndpointsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionNotificationEndpointsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1_internal
}  // namespace cloud
}  // namespace google
