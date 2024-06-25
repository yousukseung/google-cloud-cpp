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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/internal/cloud_deploy_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudDeployTracingConnection::CloudDeployTracingConnection(
    std::shared_ptr<deploy_v1::CloudDeployConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployTracingConnection::ListDeliveryPipelines(
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::ListDeliveryPipelines");
  internal::OTelScope scope(span);
  auto sr = child_->ListDeliveryPipelines(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::deploy::v1::DeliveryPipeline>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployTracingConnection::GetDeliveryPipeline(
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::GetDeliveryPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDeliveryPipeline(request));
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployTracingConnection::CreateDeliveryPipeline(
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDeliveryPipeline(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateDeliveryPipeline(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateDeliveryPipeline");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateDeliveryPipeline(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployTracingConnection::CreateDeliveryPipeline(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateDeliveryPipeline(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployTracingConnection::UpdateDeliveryPipeline(
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDeliveryPipeline(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::UpdateDeliveryPipeline(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateDeliveryPipeline");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateDeliveryPipeline(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployTracingConnection::UpdateDeliveryPipeline(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateDeliveryPipeline(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteDeliveryPipeline(
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDeliveryPipeline(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::DeleteDeliveryPipeline(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteDeliveryPipeline");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteDeliveryPipeline(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteDeliveryPipeline(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteDeliveryPipeline");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteDeliveryPipeline(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::deploy::v1::Target>
CloudDeployTracingConnection::ListTargets(
    google::cloud::deploy::v1::ListTargetsRequest request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ListTargets");
  internal::OTelScope scope(span);
  auto sr = child_->ListTargets(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::deploy::v1::Target>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployTracingConnection::RollbackTarget(
    google::cloud::deploy::v1::RollbackTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::RollbackTarget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RollbackTarget(request));
}

StatusOr<google::cloud::deploy::v1::Target>
CloudDeployTracingConnection::GetTarget(
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  auto span = internal::MakeSpan("deploy_v1::CloudDeployConnection::GetTarget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTarget(request));
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployTracingConnection::CreateTarget(
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateTarget(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateTarget(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateTarget");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateTarget(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployTracingConnection::CreateTarget(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateTarget(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployTracingConnection::UpdateTarget(
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateTarget(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::UpdateTarget(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateTarget");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateTarget(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployTracingConnection::UpdateTarget(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateTarget(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteTarget(
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTarget(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::DeleteTarget(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteTarget");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteTarget(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteTarget(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteTarget");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTarget(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::deploy::v1::CustomTargetType>
CloudDeployTracingConnection::ListCustomTargetTypes(
    google::cloud::deploy::v1::ListCustomTargetTypesRequest request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::ListCustomTargetTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListCustomTargetTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::deploy::v1::CustomTargetType>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployTracingConnection::GetCustomTargetType(
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::GetCustomTargetType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCustomTargetType(request));
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployTracingConnection::CreateCustomTargetType(
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateCustomTargetType(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateCustomTargetType(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateCustomTargetType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateCustomTargetType(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployTracingConnection::CreateCustomTargetType(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CreateCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCustomTargetType(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployTracingConnection::UpdateCustomTargetType(
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateCustomTargetType(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::UpdateCustomTargetType(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateCustomTargetType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateCustomTargetType(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployTracingConnection::UpdateCustomTargetType(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::UpdateCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCustomTargetType(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteCustomTargetType(
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteCustomTargetType(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::DeleteCustomTargetType(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteCustomTargetType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteCustomTargetType(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteCustomTargetType(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::DeleteCustomTargetType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCustomTargetType(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::deploy::v1::Release>
CloudDeployTracingConnection::ListReleases(
    google::cloud::deploy::v1::ListReleasesRequest request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ListReleases");
  internal::OTelScope scope(span);
  auto sr = child_->ListReleases(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::deploy::v1::Release>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::Release>
CloudDeployTracingConnection::GetRelease(
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::GetRelease");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRelease(request));
}

future<StatusOr<google::cloud::deploy::v1::Release>>
CloudDeployTracingConnection::CreateRelease(
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRelease");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRelease(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateRelease(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRelease");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateRelease(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Release>>
CloudDeployTracingConnection::CreateRelease(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRelease");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateRelease(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployTracingConnection::AbandonRelease(
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::AbandonRelease");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AbandonRelease(request));
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployTracingConnection::ApproveRollout(
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ApproveRollout");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApproveRollout(request));
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployTracingConnection::AdvanceRollout(
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::AdvanceRollout");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AdvanceRollout(request));
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployTracingConnection::CancelRollout(
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CancelRollout");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelRollout(request));
}

StreamRange<google::cloud::deploy::v1::Rollout>
CloudDeployTracingConnection::ListRollouts(
    google::cloud::deploy::v1::ListRolloutsRequest request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ListRollouts");
  internal::OTelScope scope(span);
  auto sr = child_->ListRollouts(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::deploy::v1::Rollout>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::Rollout>
CloudDeployTracingConnection::GetRollout(
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::GetRollout");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRollout(request));
}

future<StatusOr<google::cloud::deploy::v1::Rollout>>
CloudDeployTracingConnection::CreateRollout(
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRollout");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRollout(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateRollout(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRollout");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateRollout(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Rollout>>
CloudDeployTracingConnection::CreateRollout(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateRollout");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateRollout(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployTracingConnection::IgnoreJob(
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  auto span = internal::MakeSpan("deploy_v1::CloudDeployConnection::IgnoreJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->IgnoreJob(request));
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployTracingConnection::RetryJob(
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  auto span = internal::MakeSpan("deploy_v1::CloudDeployConnection::RetryJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RetryJob(request));
}

StreamRange<google::cloud::deploy::v1::JobRun>
CloudDeployTracingConnection::ListJobRuns(
    google::cloud::deploy::v1::ListJobRunsRequest request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ListJobRuns");
  internal::OTelScope scope(span);
  auto sr = child_->ListJobRuns(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::deploy::v1::JobRun>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::JobRun>
CloudDeployTracingConnection::GetJobRun(
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  auto span = internal::MakeSpan("deploy_v1::CloudDeployConnection::GetJobRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJobRun(request));
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployTracingConnection::TerminateJobRun(
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::TerminateJobRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TerminateJobRun(request));
}

StatusOr<google::cloud::deploy::v1::Config>
CloudDeployTracingConnection::GetConfig(
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  auto span = internal::MakeSpan("deploy_v1::CloudDeployConnection::GetConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConfig(request));
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployTracingConnection::CreateAutomation(
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateAutomation(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::CreateAutomation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateAutomation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateAutomation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployTracingConnection::CreateAutomation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::CreateAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateAutomation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployTracingConnection::UpdateAutomation(
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAutomation(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::UpdateAutomation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateAutomation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateAutomation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployTracingConnection::UpdateAutomation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::UpdateAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpdateAutomation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteAutomation(
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAutomation(request));
}

StatusOr<google::longrunning::Operation>
CloudDeployTracingConnection::DeleteAutomation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteAutomation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteAutomation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployTracingConnection::DeleteAutomation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::DeleteAutomation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteAutomation(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::deploy::v1::Automation>
CloudDeployTracingConnection::GetAutomation(
    google::cloud::deploy::v1::GetAutomationRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::GetAutomation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAutomation(request));
}

StreamRange<google::cloud::deploy::v1::Automation>
CloudDeployTracingConnection::ListAutomations(
    google::cloud::deploy::v1::ListAutomationsRequest request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::ListAutomations");
  internal::OTelScope scope(span);
  auto sr = child_->ListAutomations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::deploy::v1::Automation>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployTracingConnection::GetAutomationRun(
    google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
  auto span =
      internal::MakeSpan("deploy_v1::CloudDeployConnection::GetAutomationRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAutomationRun(request));
}

StreamRange<google::cloud::deploy::v1::AutomationRun>
CloudDeployTracingConnection::ListAutomationRuns(
    google::cloud::deploy::v1::ListAutomationRunsRequest request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::ListAutomationRuns");
  internal::OTelScope scope(span);
  auto sr = child_->ListAutomationRuns(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::deploy::v1::AutomationRun>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployTracingConnection::CancelAutomationRun(
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request) {
  auto span = internal::MakeSpan(
      "deploy_v1::CloudDeployConnection::CancelAutomationRun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelAutomationRun(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<deploy_v1::CloudDeployConnection>
MakeCloudDeployTracingConnection(
    std::shared_ptr<deploy_v1::CloudDeployConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudDeployTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
