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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_ENDPOINT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_ENDPOINT_CONNECTION_H

#include "google/cloud/aiplatform/v1/endpoint_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `EndpointServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `EndpointServiceClient`. To do so,
 * construct an object of type `EndpointServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockEndpointServiceConnection
    : public aiplatform_v1::EndpointServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>, CreateEndpoint,
      (google::cloud::aiplatform::v1::CreateEndpointRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateEndpoint,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::CreateEndpointRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>,
              CreateEndpoint,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Endpoint>, GetEndpoint,
      (google::cloud::aiplatform::v1::GetEndpointRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Endpoint>),
              ListEndpoints,
              (google::cloud::aiplatform::v1::ListEndpointsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Endpoint>, UpdateEndpoint,
      (google::cloud::aiplatform::v1::UpdateEndpointRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteEndpoint,
      (google::cloud::aiplatform::v1::DeleteEndpointRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteEndpoint,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteEndpointRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteEndpoint,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>,
      DeployModel,
      (google::cloud::aiplatform::v1::DeployModelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeployModel,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeployModelRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>,
      DeployModel,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>,
      UndeployModel,
      (google::cloud::aiplatform::v1::UndeployModelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UndeployModel,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::UndeployModelRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>,
      UndeployModel,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>,
      MutateDeployedModel,
      (google::cloud::aiplatform::v1::MutateDeployedModelRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, MutateDeployedModel,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::aiplatform::v1::MutateDeployedModelRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>,
      MutateDeployedModel,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_ENDPOINT_CONNECTION_H
