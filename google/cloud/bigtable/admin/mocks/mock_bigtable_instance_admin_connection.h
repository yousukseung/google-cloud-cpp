// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_MOCKS_MOCK_BIGTABLE_INSTANCE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_MOCKS_MOCK_BIGTABLE_INSTANCE_ADMIN_CONNECTION_H

#include "google/cloud/bigtable/admin/bigtable_instance_admin_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace bigtable_admin_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BigtableInstanceAdminConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BigtableInstanceAdminClient`. To do
 * so, construct an object of type `BigtableInstanceAdminClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBigtableInstanceAdminConnection
    : public bigtable_admin::BigtableInstanceAdminConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::bigtable::admin::v2::Instance>>, CreateInstance,
      (google::bigtable::admin::v2::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateInstance,
      (ExperimentalTag, NoAwaitTag,
       google::bigtable::admin::v2::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Instance>>,
              CreateInstance,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::bigtable::admin::v2::Instance>, GetInstance,
              (google::bigtable::admin::v2::GetInstanceRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::bigtable::admin::v2::ListInstancesResponse>,
      ListInstances,
      (google::bigtable::admin::v2::ListInstancesRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::bigtable::admin::v2::Instance>, UpdateInstance,
              (google::bigtable::admin::v2::Instance const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Instance>>,
              PartialUpdateInstance,
              (google::bigtable::admin::v2::PartialUpdateInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, PartialUpdateInstance,
              (ExperimentalTag, NoAwaitTag,
               google::bigtable::admin::v2::PartialUpdateInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Instance>>,
              PartialUpdateInstance,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      Status, DeleteInstance,
      (google::bigtable::admin::v2::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::bigtable::admin::v2::Cluster>>, CreateCluster,
      (google::bigtable::admin::v2::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCluster,
      (ExperimentalTag, NoAwaitTag,
       google::bigtable::admin::v2::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Cluster>>,
              CreateCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::bigtable::admin::v2::Cluster>, GetCluster,
              (google::bigtable::admin::v2::GetClusterRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::bigtable::admin::v2::ListClustersResponse>,
              ListClusters,
              (google::bigtable::admin::v2::ListClustersRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Cluster>>,
              UpdateCluster,
              (google::bigtable::admin::v2::Cluster const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateCluster,
              (ExperimentalTag, NoAwaitTag,
               google::bigtable::admin::v2::Cluster const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Cluster>>,
              UpdateCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::bigtable::admin::v2::Cluster>>,
      PartialUpdateCluster,
      (google::bigtable::admin::v2::PartialUpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, PartialUpdateCluster,
      (ExperimentalTag, NoAwaitTag,
       google::bigtable::admin::v2::PartialUpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::Cluster>>,
              PartialUpdateCluster,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      Status, DeleteCluster,
      (google::bigtable::admin::v2::DeleteClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::bigtable::admin::v2::AppProfile>, CreateAppProfile,
      (google::bigtable::admin::v2::CreateAppProfileRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::bigtable::admin::v2::AppProfile>, GetAppProfile,
      (google::bigtable::admin::v2::GetAppProfileRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::bigtable::admin::v2::AppProfile>),
              ListAppProfiles,
              (google::bigtable::admin::v2::ListAppProfilesRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::bigtable::admin::v2::AppProfile>>,
      UpdateAppProfile,
      (google::bigtable::admin::v2::UpdateAppProfileRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateAppProfile,
      (ExperimentalTag, NoAwaitTag,
       google::bigtable::admin::v2::UpdateAppProfileRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::bigtable::admin::v2::AppProfile>>,
              UpdateAppProfile,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      Status, DeleteAppProfile,
      (google::bigtable::admin::v2::DeleteAppProfileRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::bigtable::admin::v2::HotTablet>),
              ListHotTablets,
              (google::bigtable::admin::v2::ListHotTabletsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_MOCKS_MOCK_BIGTABLE_INSTANCE_ADMIN_CONNECTION_H
