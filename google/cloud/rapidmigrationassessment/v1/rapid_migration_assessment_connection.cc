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
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/rapid_migration_assessment_connection.h"
#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_connection_impl.h"
#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_option_defaults.h"
#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_stub_factory.h"
#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_tracing_connection.h"
#include "google/cloud/rapidmigrationassessment/v1/rapid_migration_assessment_options.h"
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
namespace rapidmigrationassessment_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RapidMigrationAssessmentConnection::~RapidMigrationAssessmentConnection() =
    default;

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::CreateCollector(
    google::cloud::rapidmigrationassessment::v1::
        CreateCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::CreateCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        CreateCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::CreateCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>
RapidMigrationAssessmentConnection::CreateAnnotation(
    google::cloud::rapidmigrationassessment::v1::
        CreateAnnotationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::CreateAnnotation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        CreateAnnotationRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>
RapidMigrationAssessmentConnection::CreateAnnotation(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
RapidMigrationAssessmentConnection::GetAnnotation(
    google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentConnection::ListCollectors(
    google::cloud::rapidmigrationassessment::v1::
        ListCollectorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::rapidmigrationassessment::v1::Collector>>();
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentConnection::GetCollector(
    google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::UpdateCollector(
    google::cloud::rapidmigrationassessment::v1::
        UpdateCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::UpdateCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        UpdateCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::UpdateCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::DeleteCollector(
    google::cloud::rapidmigrationassessment::v1::
        DeleteCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::DeleteCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        DeleteCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::DeleteCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::ResumeCollector(
    google::cloud::rapidmigrationassessment::v1::
        ResumeCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::ResumeCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        ResumeCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::ResumeCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::RegisterCollector(
    google::cloud::rapidmigrationassessment::v1::
        RegisterCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::RegisterCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::
        RegisterCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::RegisterCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::PauseCollector(
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
RapidMigrationAssessmentConnection::PauseCollector(
    ExperimentalTag, NoAwaitTag,
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnection::PauseCollector(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<RapidMigrationAssessmentConnection>
MakeRapidMigrationAssessmentConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 RapidMigrationAssessmentPolicyOptionList>(
      options, __func__);
  options = rapidmigrationassessment_v1_internal::
      RapidMigrationAssessmentDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = rapidmigrationassessment_v1_internal::
      CreateDefaultRapidMigrationAssessmentStub(std::move(auth), options);
  return rapidmigrationassessment_v1_internal::
      MakeRapidMigrationAssessmentTracingConnection(
          std::make_shared<rapidmigrationassessment_v1_internal::
                               RapidMigrationAssessmentConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1
}  // namespace cloud
}  // namespace google
