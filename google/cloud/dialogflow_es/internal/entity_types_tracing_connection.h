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
// source: google/cloud/dialogflow/v2/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/entity_types_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class EntityTypesTracingConnection
    : public dialogflow_es::EntityTypesConnection {
 public:
  ~EntityTypesTracingConnection() override = default;

  explicit EntityTypesTracingConnection(
      std::shared_ptr<dialogflow_es::EntityTypesConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::v2::EntityType> ListEntityTypes(
      google::cloud::dialogflow::v2::ListEntityTypesRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> GetEntityType(
      google::cloud::dialogflow::v2::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> CreateEntityType(
      google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> UpdateEntityType(
      google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request)
      override;

  Status DeleteEntityType(
      google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request)
      override;

  future<
      StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
  BatchUpdateEntityTypes(
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchUpdateEntityTypes(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
          request) override;

  future<
      StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
  BatchUpdateEntityTypes(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntityTypes(
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchDeleteEntityTypes(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
          request) override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntityTypes(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::protobuf::Struct>> BatchCreateEntities(
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchCreateEntities(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> BatchCreateEntities(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::protobuf::Struct>> BatchUpdateEntities(
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchUpdateEntities(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> BatchUpdateEntities(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntities(
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchDeleteEntities(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntities(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<dialogflow_es::EntityTypesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_es::EntityTypesConnection>
MakeEntityTypesTracingConnection(
    std::shared_ptr<dialogflow_es::EntityTypesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_TRACING_CONNECTION_H
