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
// source: google/cloud/aiplatform/v1/feature_registry_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURE_REGISTRY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURE_REGISTRY_CONNECTION_H

#include "google/cloud/aiplatform/v1/feature_registry_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FeatureRegistryServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FeatureRegistryServiceClient`. To
 * do so, construct an object of type `FeatureRegistryServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFeatureRegistryServiceConnection
    : public aiplatform_v1::FeatureRegistryServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>,
      CreateFeatureGroup,
      (google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateFeatureGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>,
              CreateFeatureGroup,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::FeatureGroup>, GetFeatureGroup,
      (google::cloud::aiplatform::v1::GetFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::FeatureGroup>),
              ListFeatureGroups,
              (google::cloud::aiplatform::v1::ListFeatureGroupsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>,
      UpdateFeatureGroup,
      (google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateFeatureGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>,
              UpdateFeatureGroup,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeatureGroup,
      (google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteFeatureGroup,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeatureGroup,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Feature>>, CreateFeature,
      (google::cloud::aiplatform::v1::CreateFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateFeature,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::CreateFeatureRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::Feature>>,
              CreateFeature,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Feature>, GetFeature,
              (google::cloud::aiplatform::v1::GetFeatureRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Feature>),
              ListFeatures,
              (google::cloud::aiplatform::v1::ListFeaturesRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Feature>>, UpdateFeature,
      (google::cloud::aiplatform::v1::UpdateFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateFeature,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::UpdateFeatureRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::Feature>>,
              UpdateFeature,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeature,
      (google::cloud::aiplatform::v1::DeleteFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteFeature,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteFeatureRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteFeature,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_FEATURE_REGISTRY_CONNECTION_H
