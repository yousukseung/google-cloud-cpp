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
// source: google/cloud/alloydb/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_MOCKS_MOCK_ALLOY_DB_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_MOCKS_MOCK_ALLOY_DB_ADMIN_CONNECTION_H

#include "google/cloud/alloydb/v1/alloy_db_admin_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace alloydb_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AlloyDBAdminConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AlloyDBAdminClient`. To do so,
 * construct an object of type `AlloyDBAdminClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAlloyDBAdminConnection : public alloydb_v1::AlloyDBAdminConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::alloydb::v1::Cluster>), ListClusters,
              (google::cloud::alloydb::v1::ListClustersRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::Cluster>, GetCluster,
              (google::cloud::alloydb::v1::GetClusterRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              CreateCluster,
              (google::cloud::alloydb::v1::CreateClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateCluster,
              (NoAwaitTag,
               google::cloud::alloydb::v1::CreateClusterRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              CreateCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              UpdateCluster,
              (google::cloud::alloydb::v1::UpdateClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateCluster,
              (NoAwaitTag,
               google::cloud::alloydb::v1::UpdateClusterRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              UpdateCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
              DeleteCluster,
              (google::cloud::alloydb::v1::DeleteClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteCluster,
              (NoAwaitTag,
               google::cloud::alloydb::v1::DeleteClusterRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
              DeleteCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PromoteCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PromoteCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Cluster>>, PromoteCluster,
      (google::cloud::alloydb::v1::PromoteClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, PromoteCluster,
      (NoAwaitTag,
       google::cloud::alloydb::v1::PromoteClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              PromoteCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RestoreCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RestoreCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Cluster>>, RestoreCluster,
      (google::cloud::alloydb::v1::RestoreClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RestoreCluster,
      (NoAwaitTag,
       google::cloud::alloydb::v1::RestoreClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              RestoreCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateSecondaryCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateSecondaryCluster(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              CreateSecondaryCluster,
              (google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateSecondaryCluster,
              (NoAwaitTag,
               google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Cluster>>,
              CreateSecondaryCluster,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::alloydb::v1::Instance>),
              ListInstances,
              (google::cloud::alloydb::v1::ListInstancesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::Instance>, GetInstance,
              (google::cloud::alloydb::v1::GetInstanceRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Instance>>, CreateInstance,
      (google::cloud::alloydb::v1::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateInstance,
      (NoAwaitTag,
       google::cloud::alloydb::v1::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              CreateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateSecondaryInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateSecondaryInstance(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              CreateSecondaryInstance,
              (google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateSecondaryInstance,
              (NoAwaitTag,
               google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              CreateSecondaryInstance,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, BatchCreateInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, BatchCreateInstances(::testing::_))` instead.
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>,
      BatchCreateInstances,
      (google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BatchCreateInstances,
      (NoAwaitTag,
       google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>,
      BatchCreateInstances, (google::longrunning::Operation const& operation),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Instance>>, UpdateInstance,
      (google::cloud::alloydb::v1::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateInstance,
      (NoAwaitTag,
       google::cloud::alloydb::v1::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              UpdateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
      DeleteInstance,
      (google::cloud::alloydb::v1::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteInstance,
      (NoAwaitTag,
       google::cloud::alloydb::v1::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
              DeleteInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, FailoverInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, FailoverInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Instance>>, FailoverInstance,
      (google::cloud::alloydb::v1::FailoverInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, FailoverInstance,
      (NoAwaitTag,
       google::cloud::alloydb::v1::FailoverInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              FailoverInstance,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InjectFault)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InjectFault(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              InjectFault,
              (google::cloud::alloydb::v1::InjectFaultRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, InjectFault,
              (NoAwaitTag,
               google::cloud::alloydb::v1::InjectFaultRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              InjectFault, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RestartInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RestartInstance(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::alloydb::v1::Instance>>, RestartInstance,
      (google::cloud::alloydb::v1::RestartInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RestartInstance,
      (NoAwaitTag,
       google::cloud::alloydb::v1::RestartInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Instance>>,
              RestartInstance,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::alloydb::v1::Backup>), ListBackups,
              (google::cloud::alloydb::v1::ListBackupsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::Backup>, GetBackup,
              (google::cloud::alloydb::v1::GetBackupRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateBackup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateBackup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Backup>>,
              CreateBackup,
              (google::cloud::alloydb::v1::CreateBackupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateBackup,
              (NoAwaitTag,
               google::cloud::alloydb::v1::CreateBackupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Backup>>,
              CreateBackup, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateBackup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateBackup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Backup>>,
              UpdateBackup,
              (google::cloud::alloydb::v1::UpdateBackupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateBackup,
              (NoAwaitTag,
               google::cloud::alloydb::v1::UpdateBackupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::Backup>>,
              UpdateBackup, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteBackup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteBackup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
              DeleteBackup,
              (google::cloud::alloydb::v1::DeleteBackupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteBackup,
              (NoAwaitTag,
               google::cloud::alloydb::v1::DeleteBackupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>,
              DeleteBackup, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>),
      ListSupportedDatabaseFlags,
      (google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::alloydb::v1::GenerateClientCertificateResponse>,
      GenerateClientCertificate,
      (google::cloud::alloydb::v1::GenerateClientCertificateRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::alloydb::v1::ConnectionInfo>, GetConnectionInfo,
      (google::cloud::alloydb::v1::GetConnectionInfoRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::alloydb::v1::User>), ListUsers,
              (google::cloud::alloydb::v1::ListUsersRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::User>, GetUser,
              (google::cloud::alloydb::v1::GetUserRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::User>, CreateUser,
              (google::cloud::alloydb::v1::CreateUserRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::alloydb::v1::User>, UpdateUser,
              (google::cloud::alloydb::v1::UpdateUserRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteUser,
              (google::cloud::alloydb::v1::DeleteUserRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_MOCKS_MOCK_ALLOY_DB_ADMIN_CONNECTION_H
