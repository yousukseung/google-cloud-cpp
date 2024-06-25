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
// source: google/cloud/notebooks/v2/service.proto

#include "google/cloud/notebooks/v2/internal/notebook_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingConnection::NotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v2::NotebookServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::notebooks::v2::Instance>
NotebookServiceTracingConnection::ListInstances(
    google::cloud::notebooks::v2::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v2::Instance>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v2::Instance>
NotebookServiceTracingConnection::GetInstance(
    google::cloud::notebooks::v2::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    google::cloud::notebooks::v2::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::CreateInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CreateInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpdateInstance(
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpdateInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpdateInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpdateInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpdateInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DeleteInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DeleteInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StartInstance(
    google::cloud::notebooks::v2::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::StartInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StartInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StartInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StartInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StopInstance(
    google::cloud::notebooks::v2::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::StopInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StopInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StopInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::StopInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    google::cloud::notebooks::v2::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::ResetInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ResetInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ResetInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetInstance(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>
NotebookServiceTracingConnection::CheckInstanceUpgradability(
    google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::CheckInstanceUpgradability");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CheckInstanceUpgradability(request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpgradeInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpgradeInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpgradeInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpgradeInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::UpgradeInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpgradeInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::RollbackInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RollbackInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::RollbackInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::RollbackInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RollbackInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::RollbackInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->RollbackInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DiagnoseInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DiagnoseInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DiagnoseInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DiagnoseInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v2::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v2::NotebookServiceConnection::DiagnoseInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DiagnoseInstance(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<notebooks_v2::NotebookServiceConnection>
MakeNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v2::NotebookServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NotebookServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_internal
}  // namespace cloud
}  // namespace google
