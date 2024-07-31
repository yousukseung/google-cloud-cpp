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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/vizier_connection.h"
#include "google/cloud/aiplatform/v1/internal/vizier_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/vizier_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/vizier_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/vizier_tracing_connection.h"
#include "google/cloud/aiplatform/v1/vizier_options.h"
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
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VizierServiceConnection::~VizierServiceConnection() = default;

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnection::CreateStudy(
    google::cloud::aiplatform::v1::CreateStudyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnection::GetStudy(
    google::cloud::aiplatform::v1::GetStudyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::Study>
VizierServiceConnection::ListStudies(
    google::cloud::aiplatform::v1::
        ListStudiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Study>>();
}

Status VizierServiceConnection::DeleteStudy(
    google::cloud::aiplatform::v1::DeleteStudyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnection::LookupStudy(
    google::cloud::aiplatform::v1::LookupStudyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceConnection::SuggestTrials(
    google::cloud::aiplatform::v1::SuggestTrialsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> VizierServiceConnection::SuggestTrials(
    NoAwaitTag, google::cloud::aiplatform::v1::SuggestTrialsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceConnection::SuggestTrials(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::CreateTrial(
    google::cloud::aiplatform::v1::CreateTrialRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::GetTrial(
    google::cloud::aiplatform::v1::GetTrialRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::ListTrials(
    google::cloud::aiplatform::v1::
        ListTrialsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Trial>>();
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::AddTrialMeasurement(
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::CompleteTrial(
    google::cloud::aiplatform::v1::CompleteTrialRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status VizierServiceConnection::DeleteTrial(
    google::cloud::aiplatform::v1::DeleteTrialRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceConnection::CheckTrialEarlyStoppingState(
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
VizierServiceConnection::CheckTrialEarlyStoppingState(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceConnection::CheckTrialEarlyStoppingState(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnection::StopTrial(
    google::cloud::aiplatform::v1::StopTrialRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceConnection::ListOptimalTrials(
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<VizierServiceConnection> MakeVizierServiceConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VizierServicePolicyOptionList>(options,
                                                                __func__);
  options = aiplatform_v1_internal::VizierServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = aiplatform_v1_internal::CreateDefaultVizierServiceStub(
      std::move(auth), options);
  return aiplatform_v1_internal::MakeVizierServiceTracingConnection(
      std::make_shared<aiplatform_v1_internal::VizierServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
