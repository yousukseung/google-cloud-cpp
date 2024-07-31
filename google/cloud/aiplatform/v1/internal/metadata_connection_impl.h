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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/internal/metadata_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/metadata_stub.h"
#include "google/cloud/aiplatform/v1/metadata_connection.h"
#include "google/cloud/aiplatform/v1/metadata_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/metadata_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetadataServiceConnectionImpl
    : public aiplatform_v1::MetadataServiceConnection {
 public:
  ~MetadataServiceConnectionImpl() override = default;

  MetadataServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::MetadataServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::aiplatform::v1::MetadataStore>>
  CreateMetadataStore(
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateMetadataStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::MetadataStore>>
  CreateMetadataStore(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::MetadataStore> GetMetadataStore(
      google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::MetadataStore> ListMetadataStores(
      google::cloud::aiplatform::v1::ListMetadataStoresRequest request)
      override;

  future<StatusOr<
      google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>>
  DeleteMetadataStore(
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteMetadataStore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request)
      override;

  future<StatusOr<
      google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>>
  DeleteMetadataStore(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> CreateArtifact(
      google::cloud::aiplatform::v1::CreateArtifactRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> GetArtifact(
      google::cloud::aiplatform::v1::GetArtifactRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::Artifact> ListArtifacts(
      google::cloud::aiplatform::v1::ListArtifactsRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> UpdateArtifact(
      google::cloud::aiplatform::v1::UpdateArtifactRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteArtifact(google::cloud::aiplatform::v1::DeleteArtifactRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> DeleteArtifact(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteArtifactRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteArtifact(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeArtifactsResponse>>
  PurgeArtifacts(google::cloud::aiplatform::v1::PurgeArtifactsRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> PurgeArtifacts(
      NoAwaitTag,
      google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeArtifactsResponse>>
  PurgeArtifacts(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Context> CreateContext(
      google::cloud::aiplatform::v1::CreateContextRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Context> GetContext(
      google::cloud::aiplatform::v1::GetContextRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::Context> ListContexts(
      google::cloud::aiplatform::v1::ListContextsRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Context> UpdateContext(
      google::cloud::aiplatform::v1::UpdateContextRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteContext(google::cloud::aiplatform::v1::DeleteContextRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteContext(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteContextRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteContext(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeContextsResponse>>
  PurgeContexts(google::cloud::aiplatform::v1::PurgeContextsRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> PurgeContexts(
      NoAwaitTag,
      google::cloud::aiplatform::v1::PurgeContextsRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeContextsResponse>>
  PurgeContexts(google::longrunning::Operation const& operation) override;

  StatusOr<
      google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
  AddContextArtifactsAndExecutions(
      google::cloud::aiplatform::v1::
          AddContextArtifactsAndExecutionsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
  AddContextChildren(
      google::cloud::aiplatform::v1::AddContextChildrenRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
  RemoveContextChildren(
      google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryContextLineageSubgraph(
      google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::Execution> CreateExecution(
      google::cloud::aiplatform::v1::CreateExecutionRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Execution> GetExecution(
      google::cloud::aiplatform::v1::GetExecutionRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::Execution> ListExecutions(
      google::cloud::aiplatform::v1::ListExecutionsRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Execution> UpdateExecution(
      google::cloud::aiplatform::v1::UpdateExecutionRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteExecution(google::cloud::aiplatform::v1::DeleteExecutionRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteExecution(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteExecutionRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteExecution(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeExecutionsResponse>>
  PurgeExecutions(google::cloud::aiplatform::v1::PurgeExecutionsRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> PurgeExecutions(
      NoAwaitTag,
      google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::PurgeExecutionsResponse>>
  PurgeExecutions(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
  AddExecutionEvents(
      google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryExecutionInputsAndOutputs(
      google::cloud::aiplatform::v1::
          QueryExecutionInputsAndOutputsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::MetadataSchema> CreateMetadataSchema(
      google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::MetadataSchema> GetMetadataSchema(
      google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::MetadataSchema>
  ListMetadataSchemas(google::cloud::aiplatform::v1::ListMetadataSchemasRequest
                          request) override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryArtifactLineageSubgraph(
      google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::MetadataServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_CONNECTION_IMPL_H
