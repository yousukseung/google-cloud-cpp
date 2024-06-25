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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_TRACING_CONNECTION_H

#include "google/cloud/documentai/v1/document_processor_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DocumentProcessorServiceTracingConnection
    : public documentai_v1::DocumentProcessorServiceConnection {
 public:
  ~DocumentProcessorServiceTracingConnection() override = default;

  explicit DocumentProcessorServiceTracingConnection(
      std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::documentai::v1::ProcessResponse> ProcessDocument(
      google::cloud::documentai::v1::ProcessRequest const& request) override;

  future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
  BatchProcessDocuments(
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchProcessDocuments(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
  BatchProcessDocuments(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
  FetchProcessorTypes(
      google::cloud::documentai::v1::FetchProcessorTypesRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::ProcessorType> ListProcessorTypes(
      google::cloud::documentai::v1::ListProcessorTypesRequest request)
      override;

  StatusOr<google::cloud::documentai::v1::ProcessorType> GetProcessorType(
      google::cloud::documentai::v1::GetProcessorTypeRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::Processor> ListProcessors(
      google::cloud::documentai::v1::ListProcessorsRequest request) override;

  StatusOr<google::cloud::documentai::v1::Processor> GetProcessor(
      google::cloud::documentai::v1::GetProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
  TrainProcessorVersion(
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> TrainProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
  TrainProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::documentai::v1::ProcessorVersion> GetProcessorVersion(
      google::cloud::documentai::v1::GetProcessorVersionRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::ProcessorVersion>
  ListProcessorVersions(
      google::cloud::documentai::v1::ListProcessorVersionsRequest request)
      override;

  future<
      StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
  DeleteProcessorVersion(
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
  DeleteProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
  DeployProcessorVersion(
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeployProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
  DeployProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
  UndeployProcessorVersion(
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UndeployProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
  UndeployProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::documentai::v1::Processor> CreateProcessor(
      google::cloud::documentai::v1::CreateProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
  DeleteProcessor(google::cloud::documentai::v1::DeleteProcessorRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteProcessor(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
  DeleteProcessor(ExperimentalTag,
                  google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
  EnableProcessor(google::cloud::documentai::v1::EnableProcessorRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> EnableProcessor(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::EnableProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
  EnableProcessor(ExperimentalTag,
                  google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
  DisableProcessor(google::cloud::documentai::v1::DisableProcessorRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DisableProcessor(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::DisableProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
  DisableProcessor(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<
      google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
  SetDefaultProcessorVersion(
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> SetDefaultProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  future<StatusOr<
      google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
  SetDefaultProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
  ReviewDocument(google::cloud::documentai::v1::ReviewDocumentRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> ReviewDocument(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
  ReviewDocument(ExperimentalTag,
                 google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
  EvaluateProcessorVersion(
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> EvaluateProcessorVersion(
      ExperimentalTag, NoAwaitTag,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
  EvaluateProcessorVersion(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::documentai::v1::Evaluation> GetEvaluation(
      google::cloud::documentai::v1::GetEvaluationRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::Evaluation> ListEvaluations(
      google::cloud::documentai::v1::ListEvaluationsRequest request) override;

 private:
  std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceTracingConnection(
    std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_TRACING_CONNECTION_H
