// Copyright 2024 Google LLC
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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_TRACING_CONNECTION_H

#include "google/cloud/dataplex/v1/data_taxonomy_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataTaxonomyServiceTracingConnection
    : public dataplex_v1::DataTaxonomyServiceConnection {
 public:
  ~DataTaxonomyServiceTracingConnection() override = default;

  explicit DataTaxonomyServiceTracingConnection(
      std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
  CreateDataTaxonomy(
      google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataTaxonomy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
  CreateDataTaxonomy(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
  UpdateDataTaxonomy(
      google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDataTaxonomy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
  UpdateDataTaxonomy(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataTaxonomy(
      google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataTaxonomy(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataTaxonomy(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::DataTaxonomy> ListDataTaxonomies(
      google::cloud::dataplex::v1::ListDataTaxonomiesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::DataTaxonomy> GetDataTaxonomy(
      google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
  CreateDataAttributeBinding(
      google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDataAttributeBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
  CreateDataAttributeBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
  UpdateDataAttributeBinding(
      google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDataAttributeBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
  UpdateDataAttributeBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataAttributeBinding(
      google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDataAttributeBinding(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataAttributeBinding(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::DataAttributeBinding>
  ListDataAttributeBindings(
      google::cloud::dataplex::v1::ListDataAttributeBindingsRequest request)
      override;

  StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
  GetDataAttributeBinding(
      google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
  CreateDataAttribute(
      google::cloud::dataplex::v1::CreateDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDataAttribute(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::CreateDataAttributeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
  CreateDataAttribute(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
  UpdateDataAttribute(
      google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDataAttribute(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
  UpdateDataAttribute(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataAttribute(
      google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDataAttribute(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteDataAttribute(ExperimentalTag,
                      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::DataAttribute> ListDataAttributes(
      google::cloud::dataplex::v1::ListDataAttributesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::DataAttribute> GetDataAttribute(
      google::cloud::dataplex::v1::GetDataAttributeRequest const& request)
      override;

 private:
  std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection>
MakeDataTaxonomyServiceTracingConnection(
    std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_TAXONOMY_TRACING_CONNECTION_H
