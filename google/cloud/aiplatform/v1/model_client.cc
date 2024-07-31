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
// source: google/cloud/aiplatform/v1/model_service.proto

#include "google/cloud/aiplatform/v1/model_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceClient::ModelServiceClient(
    std::shared_ptr<ModelServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ModelServiceClient::~ModelServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
ModelServiceClient::UploadModel(
    std::string const& parent,
    google::cloud::aiplatform::v1::Model const& model, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UploadModelRequest request;
  request.set_parent(parent);
  *request.mutable_model() = model;
  return connection_->UploadModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::UploadModel(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Model const& model, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UploadModelRequest request;
  request.set_parent(parent);
  *request.mutable_model() = model;
  return connection_->UploadModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
ModelServiceClient::UploadModel(
    google::cloud::aiplatform::v1::UploadModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UploadModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::UploadModel(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UploadModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UploadModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::UploadModelResponse>>
ModelServiceClient::UploadModel(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UploadModel(operation);
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceClient::GetModel(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetModelRequest request;
  request.set_name(name);
  return connection_->GetModel(request);
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceClient::GetModel(
    google::cloud::aiplatform::v1::GetModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetModel(request);
}

StreamRange<google::cloud::aiplatform::v1::Model>
ModelServiceClient::ListModels(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListModelsRequest request;
  request.set_parent(parent);
  return connection_->ListModels(request);
}

StreamRange<google::cloud::aiplatform::v1::Model>
ModelServiceClient::ListModels(
    google::cloud::aiplatform::v1::ListModelsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListModels(std::move(request));
}

StreamRange<google::cloud::aiplatform::v1::Model>
ModelServiceClient::ListModelVersions(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListModelVersionsRequest request;
  request.set_name(name);
  return connection_->ListModelVersions(request);
}

StreamRange<google::cloud::aiplatform::v1::Model>
ModelServiceClient::ListModelVersions(
    google::cloud::aiplatform::v1::ListModelVersionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListModelVersions(std::move(request));
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceClient::UpdateModel(
    google::cloud::aiplatform::v1::Model const& model,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateModelRequest request;
  *request.mutable_model() = model;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateModel(request);
}

StatusOr<google::cloud::aiplatform::v1::Model> ModelServiceClient::UpdateModel(
    google::cloud::aiplatform::v1::UpdateModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateModel(request);
}

future<
    StatusOr<google::cloud::aiplatform::v1::UpdateExplanationDatasetResponse>>
ModelServiceClient::UpdateExplanationDataset(std::string const& model,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest request;
  request.set_model(model);
  return connection_->UpdateExplanationDataset(request);
}

StatusOr<google::longrunning::Operation>
ModelServiceClient::UpdateExplanationDataset(NoAwaitTag,
                                             std::string const& model,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest request;
  request.set_model(model);
  return connection_->UpdateExplanationDataset(NoAwaitTag{}, request);
}

future<
    StatusOr<google::cloud::aiplatform::v1::UpdateExplanationDatasetResponse>>
ModelServiceClient::UpdateExplanationDataset(
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateExplanationDataset(request);
}

StatusOr<google::longrunning::Operation>
ModelServiceClient::UpdateExplanationDataset(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateExplanationDataset(NoAwaitTag{}, request);
}

future<
    StatusOr<google::cloud::aiplatform::v1::UpdateExplanationDatasetResponse>>
ModelServiceClient::UpdateExplanationDataset(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateExplanationDataset(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModel(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteModelRequest request;
  request.set_name(name);
  return connection_->DeleteModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::DeleteModel(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteModelRequest request;
  request.set_name(name);
  return connection_->DeleteModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModel(
    google::cloud::aiplatform::v1::DeleteModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::DeleteModel(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModel(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModel(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModelVersion(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteModelVersionRequest request;
  request.set_name(name);
  return connection_->DeleteModelVersion(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::DeleteModelVersion(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteModelVersionRequest request;
  request.set_name(name);
  return connection_->DeleteModelVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModelVersion(
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModelVersion(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::DeleteModelVersion(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModelVersion(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
ModelServiceClient::DeleteModelVersion(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteModelVersion(operation);
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceClient::MergeVersionAliases(
    std::string const& name, std::vector<std::string> const& version_aliases,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::MergeVersionAliasesRequest request;
  request.set_name(name);
  *request.mutable_version_aliases() = {version_aliases.begin(),
                                        version_aliases.end()};
  return connection_->MergeVersionAliases(request);
}

StatusOr<google::cloud::aiplatform::v1::Model>
ModelServiceClient::MergeVersionAliases(
    google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MergeVersionAliases(request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
ModelServiceClient::ExportModel(
    std::string const& name,
    google::cloud::aiplatform::v1::ExportModelRequest::OutputConfig const&
        output_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportModelRequest request;
  request.set_name(name);
  *request.mutable_output_config() = output_config;
  return connection_->ExportModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::ExportModel(
    NoAwaitTag, std::string const& name,
    google::cloud::aiplatform::v1::ExportModelRequest::OutputConfig const&
        output_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportModelRequest request;
  request.set_name(name);
  *request.mutable_output_config() = output_config;
  return connection_->ExportModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
ModelServiceClient::ExportModel(
    google::cloud::aiplatform::v1::ExportModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::ExportModel(
    NoAwaitTag,
    google::cloud::aiplatform::v1::ExportModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportModelResponse>>
ModelServiceClient::ExportModel(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportModel(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>>
ModelServiceClient::CopyModel(std::string const& parent,
                              std::string const& source_model, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CopyModelRequest request;
  request.set_parent(parent);
  request.set_source_model(source_model);
  return connection_->CopyModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::CopyModel(
    NoAwaitTag, std::string const& parent, std::string const& source_model,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CopyModelRequest request;
  request.set_parent(parent);
  request.set_source_model(source_model);
  return connection_->CopyModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>>
ModelServiceClient::CopyModel(
    google::cloud::aiplatform::v1::CopyModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CopyModel(request);
}

StatusOr<google::longrunning::Operation> ModelServiceClient::CopyModel(
    NoAwaitTag, google::cloud::aiplatform::v1::CopyModelRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CopyModel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::CopyModelResponse>>
ModelServiceClient::CopyModel(google::longrunning::Operation const& operation,
                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CopyModel(operation);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::ImportModelEvaluation(
    std::string const& parent,
    google::cloud::aiplatform::v1::ModelEvaluation const& model_evaluation,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ImportModelEvaluationRequest request;
  request.set_parent(parent);
  *request.mutable_model_evaluation() = model_evaluation;
  return connection_->ImportModelEvaluation(request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::ImportModelEvaluation(
    google::cloud::aiplatform::v1::ImportModelEvaluationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportModelEvaluation(request);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
ModelServiceClient::BatchImportModelEvaluationSlices(
    std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::ModelEvaluationSlice> const&
        model_evaluation_slices,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesRequest
      request;
  request.set_parent(parent);
  *request.mutable_model_evaluation_slices() = {model_evaluation_slices.begin(),
                                                model_evaluation_slices.end()};
  return connection_->BatchImportModelEvaluationSlices(request);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
ModelServiceClient::BatchImportModelEvaluationSlices(
    google::cloud::aiplatform::v1::
        BatchImportModelEvaluationSlicesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchImportModelEvaluationSlices(request);
}

StatusOr<google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
ModelServiceClient::BatchImportEvaluatedAnnotations(
    std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::EvaluatedAnnotation> const&
        evaluated_annotations,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsRequest request;
  request.set_parent(parent);
  *request.mutable_evaluated_annotations() = {evaluated_annotations.begin(),
                                              evaluated_annotations.end()};
  return connection_->BatchImportEvaluatedAnnotations(request);
}

StatusOr<google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
ModelServiceClient::BatchImportEvaluatedAnnotations(
    google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchImportEvaluatedAnnotations(request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::GetModelEvaluation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetModelEvaluationRequest request;
  request.set_name(name);
  return connection_->GetModelEvaluation(request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::GetModelEvaluation(
    google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetModelEvaluation(request);
}

StreamRange<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::ListModelEvaluations(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListModelEvaluationsRequest request;
  request.set_parent(parent);
  return connection_->ListModelEvaluations(request);
}

StreamRange<google::cloud::aiplatform::v1::ModelEvaluation>
ModelServiceClient::ListModelEvaluations(
    google::cloud::aiplatform::v1::ListModelEvaluationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListModelEvaluations(std::move(request));
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceClient::GetModelEvaluationSlice(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest request;
  request.set_name(name);
  return connection_->GetModelEvaluationSlice(request);
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceClient::GetModelEvaluationSlice(
    google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetModelEvaluationSlice(request);
}

StreamRange<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceClient::ListModelEvaluationSlices(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest request;
  request.set_parent(parent);
  return connection_->ListModelEvaluationSlices(request);
}

StreamRange<google::cloud::aiplatform::v1::ModelEvaluationSlice>
ModelServiceClient::ListModelEvaluationSlices(
    google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListModelEvaluationSlices(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
