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
// google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto

#include "google/cloud/compute/region_instance_templates/v1/region_instance_templates_connection.h"
#include "google/cloud/compute/region_instance_templates/v1/internal/region_instance_templates_option_defaults.h"
#include "google/cloud/compute/region_instance_templates/v1/internal/region_instance_templates_tracing_connection.h"
#include "google/cloud/compute/region_instance_templates/v1/region_instance_templates_options.h"
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
namespace compute_region_instance_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceTemplatesConnection::~RegionInstanceTemplatesConnection() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesConnection::DeleteInstanceTemplate(
    google::cloud::cpp::compute::region_instance_templates::v1::
        DeleteInstanceTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceTemplatesConnection::DeleteInstanceTemplate(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_instance_templates::v1::
        DeleteInstanceTemplateRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesConnection::DeleteInstanceTemplate(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
RegionInstanceTemplatesConnection::GetInstanceTemplate(
    google::cloud::cpp::compute::region_instance_templates::v1::
        GetInstanceTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesConnection::InsertInstanceTemplate(
    google::cloud::cpp::compute::region_instance_templates::v1::
        InsertInstanceTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceTemplatesConnection::InsertInstanceTemplate(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::region_instance_templates::v1::
        InsertInstanceTemplateRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceTemplatesConnection::InsertInstanceTemplate(
    ExperimentalTag, google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
RegionInstanceTemplatesConnection::ListRegionInstanceTemplates(
    google::cloud::cpp::compute::region_instance_templates::v1::
        ListRegionInstanceTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_templates_v1
}  // namespace cloud
}  // namespace google
