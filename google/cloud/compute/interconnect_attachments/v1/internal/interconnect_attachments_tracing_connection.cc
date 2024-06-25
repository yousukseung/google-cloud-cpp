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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InterconnectAttachmentsTracingConnection::
    InterconnectAttachmentsTracingConnection(
        std::shared_ptr<compute_interconnect_attachments_v1::
                            InterconnectAttachmentsConnection>
            child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                       InterconnectAttachmentsScopedList>>
InterconnectAttachmentsTracingConnection::AggregatedListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        AggregatedListInterconnectAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "AggregatedListInterconnectAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListInterconnectAttachments(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string,
      google::cloud::cpp::compute::v1::InterconnectAttachmentsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::DeleteInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "DeleteInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInterconnectAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsTracingConnection::DeleteInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "DeleteInterconnectAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteInterconnectAttachment(ExperimentalTag{},
                                                  NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::DeleteInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "DeleteInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span),
      child_->DeleteInterconnectAttachment(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsTracingConnection::GetInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "GetInterconnectAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInterconnectAttachment(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::InsertInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "InsertInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInterconnectAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsTracingConnection::InsertInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "InsertInterconnectAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InsertInterconnectAttachment(ExperimentalTag{},
                                                  NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::InsertInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "InsertInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span),
      child_->InsertInterconnectAttachment(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsTracingConnection::ListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "ListInterconnectAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->ListInterconnectAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InterconnectAttachment>(std::move(span),
                                                               std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::PatchInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "PatchInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchInterconnectAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsTracingConnection::PatchInterconnectAttachment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "PatchInterconnectAttachment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PatchInterconnectAttachment(ExperimentalTag{},
                                                 NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::PatchInterconnectAttachment(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "PatchInterconnectAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchInterconnectAttachment(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::SetLabels(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InterconnectAttachmentsTracingConnection::SetLabels(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "SetLabels");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SetLabels(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsTracingConnection::SetLabels(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_interconnect_attachments_v1::InterconnectAttachmentsConnection::"
      "SetLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetLabels(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_interconnect_attachments_v1::InterconnectAttachmentsConnection>
MakeInterconnectAttachmentsTracingConnection(
    std::shared_ptr<
        compute_interconnect_attachments_v1::InterconnectAttachmentsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InterconnectAttachmentsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google
