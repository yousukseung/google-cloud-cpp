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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection.h"
#include "google/cloud/compute/https_health_checks/v1/https_health_checks_options.h"
#include "google/cloud/compute/https_health_checks/v1/internal/https_health_checks_option_defaults.h"
#include "google/cloud/compute/https_health_checks/v1/internal/https_health_checks_tracing_connection.h"
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
namespace compute_https_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HttpsHealthChecksConnection::~HttpsHealthChecksConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::DeleteHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        DeleteHttpsHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HttpsHealthChecksConnection::DeleteHttpsHealthCheck(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::https_health_checks::v1::
        DeleteHttpsHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::DeleteHttpsHealthCheck(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::HttpsHealthCheck>
HttpsHealthChecksConnection::GetHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        GetHttpsHealthCheckRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::InsertHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        InsertHttpsHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HttpsHealthChecksConnection::InsertHttpsHealthCheck(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::https_health_checks::v1::
        InsertHttpsHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::InsertHttpsHealthCheck(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>
HttpsHealthChecksConnection::ListHttpsHealthChecks(
    google::cloud::cpp::compute::https_health_checks::v1::
        ListHttpsHealthChecksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::PatchHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        PatchHttpsHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HttpsHealthChecksConnection::PatchHttpsHealthCheck(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::https_health_checks::v1::
        PatchHttpsHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::PatchHttpsHealthCheck(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::UpdateHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        UpdateHttpsHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HttpsHealthChecksConnection::UpdateHttpsHealthCheck(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::https_health_checks::v1::
        UpdateHttpsHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksConnection::UpdateHttpsHealthCheck(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1
}  // namespace cloud
}  // namespace google
