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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_es/entity_types_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `EntityTypesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `EntityTypesClient`. To do so,
 * construct an object of type `EntityTypesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockEntityTypesConnection : public dialogflow_es::EntityTypesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::dialogflow::v2::EntityType>),
              ListEntityTypes,
              (google::cloud::dialogflow::v2::ListEntityTypesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::EntityType>, GetEntityType,
      (google::cloud::dialogflow::v2::GetEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::EntityType>, CreateEntityType,
      (google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::EntityType>, UpdateEntityType,
      (google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteEntityType,
      (google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>,
      BatchUpdateEntityTypes,
      (google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchUpdateEntityTypes,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>,
      BatchUpdateEntityTypes,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::protobuf::Struct>>, BatchDeleteEntityTypes,
      (google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchDeleteEntityTypes,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>,
              BatchDeleteEntityTypes,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchCreateEntities,
              (google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, BatchCreateEntities,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchCreateEntities,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchUpdateEntities,
              (google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, BatchUpdateEntities,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchUpdateEntities,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchDeleteEntities,
              (google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, BatchDeleteEntities,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, BatchDeleteEntities,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENTITY_TYPES_CONNECTION_H
