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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PERSISTENT_RESOURCE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PERSISTENT_RESOURCE_CONNECTION_H

#include "google/cloud/aiplatform/v1/persistent_resource_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `PersistentResourceServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `PersistentResourceServiceClient`.
 * To do so, construct an object of type `PersistentResourceServiceClient` with
 * an instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockPersistentResourceServiceConnection
    : public aiplatform_v1::PersistentResourceServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      CreatePersistentResource,
      (google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreatePersistentResource,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      CreatePersistentResource,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::PersistentResource>,
      GetPersistentResource,
      (google::cloud::aiplatform::v1::GetPersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::PersistentResource>),
      ListPersistentResources,
      (google::cloud::aiplatform::v1::ListPersistentResourcesRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeletePersistentResource,
      (google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePersistentResource,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeletePersistentResource,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      UpdatePersistentResource,
      (google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdatePersistentResource,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      UpdatePersistentResource,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      RebootPersistentResource,
      (google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RebootPersistentResource,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>,
      RebootPersistentResource,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_PERSISTENT_RESOURCE_CONNECTION_H
