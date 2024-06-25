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
// source: google/cloud/functions/v2/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_MOCKS_MOCK_FUNCTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_MOCKS_MOCK_FUNCTION_CONNECTION_H

#include "google/cloud/functions/v2/function_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace functions_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FunctionServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FunctionServiceClient`. To do so,
 * construct an object of type `FunctionServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFunctionServiceConnection
    : public functions_v2::FunctionServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::functions::v2::Function>, GetFunction,
              (google::cloud::functions::v2::GetFunctionRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::functions::v2::Function>),
              ListFunctions,
              (google::cloud::functions::v2::ListFunctionsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::functions::v2::Function>>, CreateFunction,
      (google::cloud::functions::v2::CreateFunctionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateFunction,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::functions::v2::CreateFunctionRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::functions::v2::Function>>,
              CreateFunction,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::functions::v2::Function>>, UpdateFunction,
      (google::cloud::functions::v2::UpdateFunctionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateFunction,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::functions::v2::UpdateFunctionRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::functions::v2::Function>>,
              UpdateFunction,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::functions::v2::OperationMetadata>>,
      DeleteFunction,
      (google::cloud::functions::v2::DeleteFunctionRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteFunction,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::functions::v2::DeleteFunctionRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::functions::v2::OperationMetadata>>,
              DeleteFunction,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::functions::v2::GenerateUploadUrlResponse>,
      GenerateUploadUrl,
      (google::cloud::functions::v2::GenerateUploadUrlRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::functions::v2::GenerateDownloadUrlResponse>,
      GenerateDownloadUrl,
      (google::cloud::functions::v2::GenerateDownloadUrlRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::functions::v2::ListRuntimesResponse>,
      ListRuntimes,
      (google::cloud::functions::v2::ListRuntimesRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_MOCKS_MOCK_FUNCTION_CONNECTION_H
