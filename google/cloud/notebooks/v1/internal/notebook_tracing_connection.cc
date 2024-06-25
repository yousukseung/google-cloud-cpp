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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingConnection::NotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::NotebookServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::notebooks::v1::Instance>
NotebookServiceTracingConnection::ListInstances(
    google::cloud::notebooks::v1::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Instance>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceTracingConnection::GetInstance(
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::CreateInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RegisterInstance(
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RegisterInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RegisterInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::RegisterInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RegisterInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RegisterInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RegisterInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RegisterInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->RegisterInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceAccelerator(
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceAccelerator");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceAccelerator(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::SetInstanceAccelerator(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceAccelerator");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->SetInstanceAccelerator(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceAccelerator(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceAccelerator");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetInstanceAccelerator(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceMachineType(
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceMachineType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceMachineType(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::SetInstanceMachineType(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceMachineType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->SetInstanceMachineType(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceMachineType(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceMachineType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetInstanceMachineType(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateInstanceConfig(
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateInstanceConfig(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpdateInstanceConfig(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceConfig");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateInstanceConfig(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateInstanceConfig(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstanceConfig(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateShieldedInstanceConfig(
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateShieldedInstanceConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateShieldedInstanceConfig(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpdateShieldedInstanceConfig(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateShieldedInstanceConfig");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateShieldedInstanceConfig(ExperimentalTag{},
                                                  NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateShieldedInstanceConfig(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateShieldedInstanceConfig");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span),
      child_->UpdateShieldedInstanceConfig(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceLabels(
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetInstanceLabels(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::SetInstanceLabels(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceLabels");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->SetInstanceLabels(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceLabels(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceLabels");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->SetInstanceLabels(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceTracingConnection::UpdateInstanceMetadataItems(
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceMetadataItems");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateInstanceMetadataItems(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DeleteInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StartInstance(
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::StartInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StartInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StartInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StartInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StopInstance(
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::StopInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StopInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StopInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StopInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::ResetInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ResetInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ResetInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ReportInstanceInfo(
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ReportInstanceInfo");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReportInstanceInfo(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::ReportInstanceInfo(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ReportInstanceInfo");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->ReportInstanceInfo(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ReportInstanceInfo(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ReportInstanceInfo");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReportInstanceInfo(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceTracingConnection::IsInstanceUpgradeable(
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::IsInstanceUpgradeable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->IsInstanceUpgradeable(request));
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceTracingConnection::GetInstanceHealth(
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetInstanceHealth");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceHealth(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpgradeInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpgradeInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpgradeInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RollbackInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RollbackInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::RollbackInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RollbackInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RollbackInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RollbackInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->RollbackInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DiagnoseInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseInstance(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DiagnoseInstance(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DiagnoseInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DiagnoseInstance(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DiagnoseInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DiagnoseInstance(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstanceInternal(
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstanceInternal");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpgradeInstanceInternal(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::UpgradeInstanceInternal(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstanceInternal");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpgradeInstanceInternal(ExperimentalTag{}, NoAwaitTag{},
                                             request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstanceInternal(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstanceInternal");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstanceInternal(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::notebooks::v1::Environment>
NotebookServiceTracingConnection::ListEnvironments(
    google::cloud::notebooks::v1::ListEnvironmentsRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListEnvironments");
  internal::OTelScope scope(span);
  auto sr = child_->ListEnvironments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Environment>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceTracingConnection::GetEnvironment(
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceTracingConnection::CreateEnvironment(
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateEnvironment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEnvironment(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::CreateEnvironment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateEnvironment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateEnvironment(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceTracingConnection::CreateEnvironment(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateEnvironment");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateEnvironment(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteEnvironment(
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteEnvironment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEnvironment(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DeleteEnvironment(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteEnvironment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteEnvironment(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteEnvironment(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteEnvironment");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteEnvironment(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::notebooks::v1::Schedule>
NotebookServiceTracingConnection::ListSchedules(
    google::cloud::notebooks::v1::ListSchedulesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListSchedules");
  internal::OTelScope scope(span);
  auto sr = child_->ListSchedules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Schedule>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceTracingConnection::GetSchedule(
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSchedule(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteSchedule(
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSchedule(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DeleteSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteSchedule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteSchedule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteSchedule(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteSchedule(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::CreateSchedule(
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSchedule(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::CreateSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateSchedule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateSchedule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::CreateSchedule(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateSchedule(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::TriggerSchedule(
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::TriggerSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->TriggerSchedule(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::TriggerSchedule(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::TriggerSchedule");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->TriggerSchedule(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::TriggerSchedule(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::TriggerSchedule");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->TriggerSchedule(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::notebooks::v1::Execution>
NotebookServiceTracingConnection::ListExecutions(
    google::cloud::notebooks::v1::ListExecutionsRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListExecutions");
  internal::OTelScope scope(span);
  auto sr = child_->ListExecutions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Execution>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceTracingConnection::GetExecution(
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetExecution(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteExecution(
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteExecution(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::DeleteExecution(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteExecution");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteExecution(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteExecution(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteExecution(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceTracingConnection::CreateExecution(
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateExecution(request));
}

StatusOr<google::longrunning::Operation>
NotebookServiceTracingConnection::CreateExecution(
    ExperimentalTag, NoAwaitTag,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateExecution");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateExecution(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceTracingConnection::CreateExecution(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateExecution(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<notebooks_v1::NotebookServiceConnection>
MakeNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::NotebookServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NotebookServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
