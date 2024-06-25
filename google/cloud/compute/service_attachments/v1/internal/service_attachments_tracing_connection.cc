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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceAttachmentsTracingConnection::ServiceAttachmentsTracingConnection(
    std::shared_ptr<
        compute_service_attachments_v1::ServiceAttachmentsConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::ServiceAttachmentsScopedList>>
ServiceAttachmentsTracingConnection::AggregatedListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        AggregatedListServiceAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "AggregatedListServiceAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListServiceAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::ServiceAttachmentsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::DeleteServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "DeleteServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteServiceAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ServiceAttachmentsTracingConnection::DeleteServiceAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "DeleteServiceAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteServiceAttachment(ExperimentalTag{}, NoAwaitTag{},
                                             request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::DeleteServiceAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "DeleteServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteServiceAttachment(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsTracingConnection::GetServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        GetServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "GetServiceAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::InsertServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "InsertServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertServiceAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ServiceAttachmentsTracingConnection::InsertServiceAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "InsertServiceAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InsertServiceAttachment(ExperimentalTag{}, NoAwaitTag{},
                                             request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::InsertServiceAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "InsertServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertServiceAttachment(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsTracingConnection::ListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        ListServiceAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "ListServiceAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->ListServiceAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::ServiceAttachment>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::PatchServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "PatchServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchServiceAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ServiceAttachmentsTracingConnection::PatchServiceAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "PatchServiceAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->PatchServiceAttachment(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsTracingConnection::PatchServiceAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "PatchServiceAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchServiceAttachment(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ServiceAttachmentsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::service_attachments::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_service_attachments_v1::ServiceAttachmentsConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_service_attachments_v1::ServiceAttachmentsConnection>
MakeServiceAttachmentsTracingConnection(
    std::shared_ptr<
        compute_service_attachments_v1::ServiceAttachmentsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ServiceAttachmentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1_internal
}  // namespace cloud
}  // namespace google
