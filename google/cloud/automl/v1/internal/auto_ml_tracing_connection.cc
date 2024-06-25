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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/v1/internal/auto_ml_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AutoMlTracingConnection::AutoMlTracingConnection(
    std::shared_ptr<automl_v1::AutoMlConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::automl::v1::Dataset>>
AutoMlTracingConnection::CreateDataset(
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateDataset(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::CreateDataset(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateDataset");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateDataset(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::Dataset>>
AutoMlTracingConnection::CreateDataset(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDataset(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::GetDataset(
    google::cloud::automl::v1::GetDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::GetDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataset(request));
}

StreamRange<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::ListDatasets(
    google::cloud::automl::v1::ListDatasetsRequest request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ListDatasets");
  internal::OTelScope scope(span);
  auto sr = child_->ListDatasets(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::automl::v1::Dataset>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::UpdateDataset(
    google::cloud::automl::v1::UpdateDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::UpdateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateDataset(request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteDataset(
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteDataset(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::DeleteDataset(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteDataset");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteDataset(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteDataset(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDataset(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ImportData(
    google::cloud::automl::v1::ImportDataRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ImportData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportData(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::ImportData(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::ImportDataRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ImportData");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ImportData(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ImportData(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ImportData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportData(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportData(
    google::cloud::automl::v1::ExportDataRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportData(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::ExportData(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::ExportDataRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportData");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ExportData(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportData(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportData(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlTracingConnection::GetAnnotationSpec(
    google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
  auto span =
      internal::MakeSpan("automl_v1::AutoMlConnection::GetAnnotationSpec");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAnnotationSpec(request));
}

future<StatusOr<google::cloud::automl::v1::Model>>
AutoMlTracingConnection::CreateModel(
    google::cloud::automl::v1::CreateModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateModel(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::CreateModel(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::CreateModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateModel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::Model>>
AutoMlTracingConnection::CreateModel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::CreateModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateModel(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingConnection::GetModel(
    google::cloud::automl::v1::GetModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetModel(request));
}

StreamRange<google::cloud::automl::v1::Model>
AutoMlTracingConnection::ListModels(
    google::cloud::automl::v1::ListModelsRequest request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ListModels");
  internal::OTelScope scope(span);
  auto sr = child_->ListModels(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::automl::v1::Model>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteModel(
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteModel(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::DeleteModel(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteModel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteModel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeleteModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteModel(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingConnection::UpdateModel(
    google::cloud::automl::v1::UpdateModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateModel(request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeployModel(
    google::cloud::automl::v1::DeployModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeployModel(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::DeployModel(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::DeployModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeployModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeployModel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeployModel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::DeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeployModel(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::UndeployModel(
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::UndeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeployModel(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::UndeployModel(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::UndeployModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UndeployModel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::UndeployModel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::UndeployModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeployModel(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportModel(
    google::cloud::automl::v1::ExportModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportModel(request));
}

StatusOr<google::longrunning::Operation> AutoMlTracingConnection::ExportModel(
    ExperimentalTag, NoAwaitTag,
    google::cloud::automl::v1::ExportModelRequest const& request) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ExportModel(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportModel(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("automl_v1::AutoMlConnection::ExportModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportModel(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlTracingConnection::GetModelEvaluation(
    google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
  auto span =
      internal::MakeSpan("automl_v1::AutoMlConnection::GetModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetModelEvaluation(request));
}

StreamRange<google::cloud::automl::v1::ModelEvaluation>
AutoMlTracingConnection::ListModelEvaluations(
    google::cloud::automl::v1::ListModelEvaluationsRequest request) {
  auto span =
      internal::MakeSpan("automl_v1::AutoMlConnection::ListModelEvaluations");
  internal::OTelScope scope(span);
  auto sr = child_->ListModelEvaluations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::automl::v1::ModelEvaluation>(std::move(span),
                                                  std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<automl_v1::AutoMlConnection> MakeAutoMlTracingConnection(
    std::shared_ptr<automl_v1::AutoMlConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AutoMlTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google
