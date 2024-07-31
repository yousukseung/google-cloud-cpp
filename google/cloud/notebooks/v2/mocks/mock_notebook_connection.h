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
// source: google/cloud/notebooks/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_MOCKS_MOCK_NOTEBOOK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_MOCKS_MOCK_NOTEBOOK_CONNECTION_H

#include "google/cloud/notebooks/v2/notebook_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace notebooks_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NotebookServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NotebookServiceClient`. To do so,
 * construct an object of type `NotebookServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNotebookServiceConnection
    : public notebooks_v2::NotebookServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::notebooks::v2::Instance>),
              ListInstances,
              (google::cloud::notebooks::v2::ListInstancesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::notebooks::v2::Instance>, GetInstance,
              (google::cloud::notebooks::v2::GetInstanceRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, CreateInstance,
      (google::cloud::notebooks::v2::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              CreateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, UpdateInstance,
      (google::cloud::notebooks::v2::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              UpdateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>,
      DeleteInstance,
      (google::cloud::notebooks::v2::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::OperationMetadata>>,
              DeleteInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StartInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StartInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, StartInstance,
      (google::cloud::notebooks::v2::StartInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, StartInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::StartInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              StartInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, StopInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, StopInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, StopInstance,
      (google::cloud::notebooks::v2::StopInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, StopInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::StopInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              StopInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ResetInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ResetInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, ResetInstance,
      (google::cloud::notebooks::v2::ResetInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ResetInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::ResetInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              ResetInstance, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::notebooks::v2::CheckInstanceUpgradabilityResponse>,
      CheckInstanceUpgradability,
      (google::cloud::notebooks::v2::CheckInstanceUpgradabilityRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpgradeInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpgradeInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>, UpgradeInstance,
      (google::cloud::notebooks::v2::UpgradeInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpgradeInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::UpgradeInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              UpgradeInstance,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RollbackInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RollbackInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>,
      RollbackInstance,
      (google::cloud::notebooks::v2::RollbackInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RollbackInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::RollbackInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              RollbackInstance,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DiagnoseInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DiagnoseInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::notebooks::v2::Instance>>,
      DiagnoseInstance,
      (google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DiagnoseInstance,
      (NoAwaitTag,
       google::cloud::notebooks::v2::DiagnoseInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::notebooks::v2::Instance>>,
              DiagnoseInstance,
              (google::longrunning::Operation const& operation), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V2_MOCKS_MOCK_NOTEBOOK_CONNECTION_H
