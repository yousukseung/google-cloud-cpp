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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LineageTracingConnection::LineageTracingConnection(
    std::shared_ptr<datacatalog_lineage_v1::LineageConnection> child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::datacatalog::lineage::v1::ProcessOpenLineageRunEventResponse>
LineageTracingConnection::ProcessOpenLineageRunEvent(
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::ProcessOpenLineageRunEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ProcessOpenLineageRunEvent(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingConnection::CreateProcess(
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::CreateProcess");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateProcess(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingConnection::UpdateProcess(
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::UpdateProcess");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateProcess(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingConnection::GetProcess(
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::GetProcess");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProcess(request));
}

StreamRange<google::cloud::datacatalog::lineage::v1::Process>
LineageTracingConnection::ListProcesses(
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::ListProcesses");
  internal::OTelScope scope(span);
  auto sr = child_->ListProcesses(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::lineage::v1::Process>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageTracingConnection::DeleteProcess(
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteProcess");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProcess(request));
}

StatusOr<google::longrunning::Operation>
LineageTracingConnection::DeleteProcess(
    NoAwaitTag,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteProcess");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteProcess(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageTracingConnection::DeleteProcess(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteProcess");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProcess(operation));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingConnection::CreateRun(
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::CreateRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateRun(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingConnection::UpdateRun(
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::UpdateRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateRun(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingConnection::GetRun(
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_lineage_v1::LineageConnection::GetRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRun(request));
}

StreamRange<google::cloud::datacatalog::lineage::v1::Run>
LineageTracingConnection::ListRuns(
    google::cloud::datacatalog::lineage::v1::ListRunsRequest request) {
  auto span =
      internal::MakeSpan("datacatalog_lineage_v1::LineageConnection::ListRuns");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuns(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::lineage::v1::Run>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageTracingConnection::DeleteRun(
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteRun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRun(request));
}

StatusOr<google::longrunning::Operation> LineageTracingConnection::DeleteRun(
    NoAwaitTag,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteRun");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteRun(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageTracingConnection::DeleteRun(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteRun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRun(operation));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageTracingConnection::CreateLineageEvent(
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::CreateLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateLineageEvent(request));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageTracingConnection::GetLineageEvent(
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::GetLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLineageEvent(request));
}

StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageTracingConnection::ListLineageEvents(
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::ListLineageEvents");
  internal::OTelScope scope(span);
  auto sr = child_->ListLineageEvents(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::lineage::v1::LineageEvent>(std::move(span),
                                                             std::move(sr));
}

Status LineageTracingConnection::DeleteLineageEvent(
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::DeleteLineageEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteLineageEvent(request));
}

StreamRange<google::cloud::datacatalog::lineage::v1::Link>
LineageTracingConnection::SearchLinks(
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::SearchLinks");
  internal::OTelScope scope(span);
  auto sr = child_->SearchLinks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::lineage::v1::Link>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>
LineageTracingConnection::BatchSearchLinkProcesses(
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesRequest
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_lineage_v1::LineageConnection::BatchSearchLinkProcesses");
  internal::OTelScope scope(span);
  auto sr = child_->BatchSearchLinkProcesses(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::lineage::v1::ProcessLinks>(std::move(span),
                                                             std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datacatalog_lineage_v1::LineageConnection>
MakeLineageTracingConnection(
    std::shared_ptr<datacatalog_lineage_v1::LineageConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<LineageTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
