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

#include "google/cloud/compute/node_templates/v1/internal/node_templates_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NodeTemplatesTracingConnection::NodeTemplatesTracingConnection(
    std::shared_ptr<compute_node_templates_v1::NodeTemplatesConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>
NodeTemplatesTracingConnection::AggregatedListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::
        AggregatedListNodeTemplatesRequest request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::"
      "AggregatedListNodeTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListNodeTemplates(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesTracingConnection::DeleteNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::DeleteNodeTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNodeTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesTracingConnection::DeleteNodeTemplate(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::DeleteNodeTemplate");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteNodeTemplate(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesTracingConnection::DeleteNodeTemplate(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::DeleteNodeTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNodeTemplate(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesTracingConnection::GetNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        GetNodeTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::GetNodeTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNodeTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesTracingConnection::InsertNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::InsertNodeTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNodeTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesTracingConnection::InsertNodeTemplate(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::InsertNodeTemplate");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->InsertNodeTemplate(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesTracingConnection::InsertNodeTemplate(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::InsertNodeTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertNodeTemplate(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesTracingConnection::ListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::ListNodeTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->ListNodeTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NodeTemplate>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeTemplatesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::node_templates::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_node_templates_v1::NodeTemplatesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_node_templates_v1::NodeTemplatesConnection>
MakeNodeTemplatesTracingConnection(
    std::shared_ptr<compute_node_templates_v1::NodeTemplatesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NodeTemplatesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google
