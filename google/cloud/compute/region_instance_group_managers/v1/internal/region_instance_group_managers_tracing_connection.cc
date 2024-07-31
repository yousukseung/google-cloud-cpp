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
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionInstanceGroupManagersTracingConnection::
    RegionInstanceGroupManagersTracingConnection(
        std::shared_ptr<compute_region_instance_group_managers_v1::
                            RegionInstanceGroupManagersConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::AbandonInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::AbandonInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AbandonInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::AbandonInstances(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::AbandonInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::AbandonInstances");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->AbandonInstances(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::AbandonInstances(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::AbandonInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AbandonInstances(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ApplyUpdatesToInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ApplyUpdatesToInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::ApplyUpdatesToInstances(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::ApplyUpdatesToInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ApplyUpdatesToInstances");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ApplyUpdatesToInstances(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ApplyUpdatesToInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ApplyUpdatesToInstances(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::CreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::CreateInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::CreateInstances(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::CreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::CreateInstances");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateInstances(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::CreateInstances(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::CreateInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstances(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInstanceGroupManager(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::DeleteInstanceGroupManager(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::DeleteInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstanceGroupManager");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteInstanceGroupManager(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteInstanceGroupManager(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInstanceGroupManager(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::DeleteInstances(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::DeleteInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstances");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteInstances(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteInstances(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstances(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeletePerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePerInstanceConfigs(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::DeletePerInstanceConfigs(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::DeletePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeletePerInstanceConfigs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeletePerInstanceConfigs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeletePerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePerInstanceConfigs(operation));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersTracingConnection::GetInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        GetInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::GetInstanceGroupManager");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceGroupManager(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::InsertInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        InsertInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::InsertInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInstanceGroupManager(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::InsertInstanceGroupManager(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::InsertInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::InsertInstanceGroupManager");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InsertInstanceGroupManager(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::InsertInstanceGroupManager(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::InsertInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInstanceGroupManager(operation));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersTracingConnection::ListRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListRegionInstanceGroupManagersRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListRegionInstanceGroupManagers");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionInstanceGroupManagers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceGroupManager>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
RegionInstanceGroupManagersTracingConnection::ListErrors(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListErrorsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListErrors");
  internal::OTelScope scope(span);
  auto sr = child_->ListErrors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceManagedByIgmError>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersTracingConnection::ListManagedInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListManagedInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListManagedInstances(request));
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
RegionInstanceGroupManagersTracingConnection::ListPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListPerInstanceConfigsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListPerInstanceConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListPerInstanceConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::PerInstanceConfig>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchInstanceGroupManager(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::PatchInstanceGroupManager(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::PatchInstanceGroupManagerRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchInstanceGroupManager");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PatchInstanceGroupManager(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchInstanceGroupManager(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchInstanceGroupManager");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchInstanceGroupManager(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchPerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPerInstanceConfigs(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::PatchPerInstanceConfigs(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::PatchPerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchPerInstanceConfigs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PatchPerInstanceConfigs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchPerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPerInstanceConfigs(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::RecreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::RecreateInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RecreateInstances(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::RecreateInstances(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::RecreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::RecreateInstances");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->RecreateInstances(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::RecreateInstances(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::RecreateInstances");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RecreateInstances(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::Resize(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ResizeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::Resize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::Resize(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::ResizeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::Resize");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->Resize(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::Resize(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::Resize");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetInstanceTemplate(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetInstanceTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::SetInstanceTemplate(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::SetInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetInstanceTemplate");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->SetInstanceTemplate(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetInstanceTemplate(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetInstanceTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceTemplate(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetTargetPools(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetTargetPools");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetTargetPools(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::SetTargetPools(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::SetTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetTargetPools");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->SetTargetPools(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetTargetPools(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetTargetPools");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetTargetPools(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::UpdatePerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePerInstanceConfigs(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstanceGroupManagersTracingConnection::UpdatePerInstanceConfigs(
    NoAwaitTag, google::cloud::cpp::compute::region_instance_group_managers::
                    v1::UpdatePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::UpdatePerInstanceConfigs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdatePerInstanceConfigs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::UpdatePerInstanceConfigs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePerInstanceConfigs(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_instance_group_managers_v1::
                    RegionInstanceGroupManagersConnection>
MakeRegionInstanceGroupManagersTracingConnection(
    std::shared_ptr<compute_region_instance_group_managers_v1::
                        RegionInstanceGroupManagersConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionInstanceGroupManagersTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
