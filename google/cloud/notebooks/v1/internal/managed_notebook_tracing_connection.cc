// Copyright 2022 Google LLC
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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/internal/managed_notebook_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ManagedNotebookServiceTracingConnection::
    ManagedNotebookServiceTracingConnection(
        std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceTracingConnection::ListRuntimes(
    google::cloud::notebooks::v1::ListRuntimesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ListRuntimes");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuntimes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::notebooks::v1::Runtime>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceTracingConnection::GetRuntime(
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::GetRuntime");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRuntime(request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::CreateRuntime(
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::CreateRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::CreateRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::CreateRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::CreateRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::CreateRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::UpdateRuntime(
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpdateRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::UpdateRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpdateRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::UpdateRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpdateRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
ManagedNotebookServiceTracingConnection::DeleteRuntime(
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DeleteRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::DeleteRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DeleteRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
ManagedNotebookServiceTracingConnection::DeleteRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DeleteRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::StartRuntime(
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StartRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::StartRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StartRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StartRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::StartRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StartRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::StopRuntime(
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StopRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::StopRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StopRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StopRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::StopRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::StopRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::SwitchRuntime(
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::SwitchRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SwitchRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::SwitchRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::SwitchRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SwitchRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::SwitchRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::SwitchRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SwitchRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::ResetRuntime(
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ResetRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::ResetRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ResetRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ResetRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::ResetRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ResetRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::UpgradeRuntime(
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpgradeRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::UpgradeRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpgradeRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpgradeRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::UpgradeRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::UpgradeRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpgradeRuntime(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::ReportRuntimeEvent(
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ReportRuntimeEvent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReportRuntimeEvent(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::ReportRuntimeEvent(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ReportRuntimeEvent");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->ReportRuntimeEvent(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::ReportRuntimeEvent(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::ReportRuntimeEvent");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReportRuntimeEvent(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceTracingConnection::RefreshRuntimeTokenInternal(
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::"
      "RefreshRuntimeTokenInternal");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RefreshRuntimeTokenInternal(request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::DiagnoseRuntime(
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DiagnoseRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseRuntime(request));
}

StatusOr<google::longrunning::Operation>
ManagedNotebookServiceTracingConnection::DiagnoseRuntime(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DiagnoseRuntime");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DiagnoseRuntime(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceTracingConnection::DiagnoseRuntime(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::ManagedNotebookServiceConnection::DiagnoseRuntime");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DiagnoseRuntime(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection>
MakeManagedNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ManagedNotebookServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
