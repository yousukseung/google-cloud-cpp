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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_CONNECTION_H

#include "google/cloud/automl/v1/auto_ml_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AutoMlTracingConnection : public automl_v1::AutoMlConnection {
 public:
  ~AutoMlTracingConnection() override = default;

  explicit AutoMlTracingConnection(
      std::shared_ptr<automl_v1::AutoMlConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateDataset(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::CreateDatasetRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request) override;

  StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request) override;

  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteDataset(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::DeleteDatasetRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      google::cloud::automl::v1::ImportDataRequest const& request) override;

  StatusOr<google::longrunning::Operation> ImportData(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::ImportDataRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      google::cloud::automl::v1::ExportDataRequest const& request) override;

  StatusOr<google::longrunning::Operation> ExportData(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::ExportDataRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request)
      override;

  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::CreateModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::automl::v1::Model> GetModel(
      google::cloud::automl::v1::GetModelRequest const& request) override;

  StreamRange<google::cloud::automl::v1::Model> ListModels(
      google::cloud::automl::v1::ListModelsRequest request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::DeleteModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      google::cloud::automl::v1::DeployModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeployModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::DeployModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> UndeployModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::UndeployModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      google::cloud::automl::v1::ExportModelRequest const& request) override;

  StatusOr<google::longrunning::Operation> ExportModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::automl::v1::ExportModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request)
      override;

  StreamRange<google::cloud::automl::v1::ModelEvaluation> ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request) override;

 private:
  std::shared_ptr<automl_v1::AutoMlConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<automl_v1::AutoMlConnection> MakeAutoMlTracingConnection(
    std::shared_ptr<automl_v1::AutoMlConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_TRACING_CONNECTION_H
