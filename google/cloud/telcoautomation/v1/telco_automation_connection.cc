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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/telco_automation_connection.h"
#include "google/cloud/telcoautomation/v1/internal/telco_automation_connection_impl.h"
#include "google/cloud/telcoautomation/v1/internal/telco_automation_option_defaults.h"
#include "google/cloud/telcoautomation/v1/internal/telco_automation_stub_factory.h"
#include "google/cloud/telcoautomation/v1/internal/telco_automation_tracing_connection.h"
#include "google/cloud/telcoautomation/v1/telco_automation_options.h"
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
namespace telcoautomation_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TelcoAutomationConnection::~TelcoAutomationConnection() = default;

StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationConnection::ListOrchestrationClusters(
    google::cloud::telcoautomation::v1::
        ListOrchestrationClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>>();
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationConnection::GetOrchestrationCluster(
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
TelcoAutomationConnection::CreateOrchestrationCluster(
    google::cloud::telcoautomation::v1::
        CreateOrchestrationClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationConnection::CreateOrchestrationCluster(
    NoAwaitTag, google::cloud::telcoautomation::v1::
                    CreateOrchestrationClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
TelcoAutomationConnection::CreateOrchestrationCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationConnection::DeleteOrchestrationCluster(
    google::cloud::telcoautomation::v1::
        DeleteOrchestrationClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationConnection::DeleteOrchestrationCluster(
    NoAwaitTag, google::cloud::telcoautomation::v1::
                    DeleteOrchestrationClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationConnection::DeleteOrchestrationCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationConnection::ListEdgeSlms(
    google::cloud::telcoautomation::v1::
        ListEdgeSlmsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::EdgeSlm>>();
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationConnection::GetEdgeSlm(
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>
TelcoAutomationConnection::CreateEdgeSlm(
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationConnection::CreateEdgeSlm(
    NoAwaitTag,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>
TelcoAutomationConnection::CreateEdgeSlm(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationConnection::DeleteEdgeSlm(
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
TelcoAutomationConnection::DeleteEdgeSlm(
    NoAwaitTag,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationConnection::DeleteEdgeSlm(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::CreateBlueprint(
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::UpdateBlueprint(
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::GetBlueprint(
    google::cloud::telcoautomation::v1::GetBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status TelcoAutomationConnection::DeleteBlueprint(
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::ListBlueprints(
    google::cloud::telcoautomation::v1::
        ListBlueprintsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Blueprint>>();
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::ApproveBlueprint(
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::ProposeBlueprint(
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::RejectBlueprint(
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::ListBlueprintRevisions(
    google::cloud::telcoautomation::v1::
        ListBlueprintRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Blueprint>>();
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationConnection::SearchBlueprintRevisions(
    google::cloud::telcoautomation::v1::
        SearchBlueprintRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Blueprint>>();
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::SearchDeploymentRevisions(
    google::cloud::telcoautomation::v1::
        SearchDeploymentRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Deployment>>();
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationConnection::DiscardBlueprintChanges(
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationConnection::ListPublicBlueprints(
    google::cloud::telcoautomation::v1::
        ListPublicBlueprintsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>>();
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationConnection::GetPublicBlueprint(
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::CreateDeployment(
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::UpdateDeployment(
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::GetDeployment(
    google::cloud::telcoautomation::v1::GetDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status TelcoAutomationConnection::RemoveDeployment(
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::ListDeployments(
    google::cloud::telcoautomation::v1::
        ListDeploymentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Deployment>>();
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::ListDeploymentRevisions(
    google::cloud::telcoautomation::v1::
        ListDeploymentRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::Deployment>>();
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationConnection::DiscardDeploymentChanges(
    google::cloud::telcoautomation::v1::
        DiscardDeploymentChangesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::ApplyDeployment(
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationConnection::ComputeDeploymentStatus(
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationConnection::RollbackDeployment(
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationConnection::GetHydratedDeployment(
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationConnection::ListHydratedDeployments(
    google::cloud::telcoautomation::v1::
        ListHydratedDeploymentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>>();
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationConnection::UpdateHydratedDeployment(
    google::cloud::telcoautomation::v1::
        UpdateHydratedDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationConnection::ApplyHydratedDeployment(
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TelcoAutomationConnection> MakeTelcoAutomationConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TelcoAutomationPolicyOptionList>(options,
                                                                  __func__);
  options = telcoautomation_v1_internal::TelcoAutomationDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = telcoautomation_v1_internal::CreateDefaultTelcoAutomationStub(
      std::move(auth), options);
  return telcoautomation_v1_internal::MakeTelcoAutomationTracingConnection(
      std::make_shared<
          telcoautomation_v1_internal::TelcoAutomationConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1
}  // namespace cloud
}  // namespace google
