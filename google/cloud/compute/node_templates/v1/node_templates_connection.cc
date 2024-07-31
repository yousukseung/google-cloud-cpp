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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#include "google/cloud/compute/node_templates/v1/node_templates_connection.h"
#include "google/cloud/compute/node_templates/v1/internal/node_templates_option_defaults.h"
#include "google/cloud/compute/node_templates/v1/internal/node_templates_tracing_connection.h"
#include "google/cloud/compute/node_templates/v1/node_templates_options.h"
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
namespace compute_node_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeTemplatesConnection::~NodeTemplatesConnection() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>
NodeTemplatesConnection::AggregatedListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::
        AggregatedListNodeTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesConnection::DeleteNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesConnection::DeleteNodeTemplate(
    NoAwaitTag, google::cloud::cpp::compute::node_templates::v1::
                    DeleteNodeTemplateRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesConnection::DeleteNodeTemplate(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesConnection::GetNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        GetNodeTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesConnection::GetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesConnection::InsertNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesConnection::InsertNodeTemplate(
    NoAwaitTag, google::cloud::cpp::compute::node_templates::v1::
                    InsertNodeTemplateRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesConnection::InsertNodeTemplate(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesConnection::ListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::
        ListNodeTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>>();
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesConnection::SetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeTemplatesConnection::TestIamPermissions(
    google::cloud::cpp::compute::node_templates::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1
}  // namespace cloud
}  // namespace google
