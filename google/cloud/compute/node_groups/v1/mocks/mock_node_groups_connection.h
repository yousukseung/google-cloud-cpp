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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_MOCKS_MOCK_NODE_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_MOCKS_MOCK_NODE_GROUPS_CONNECTION_H

#include "google/cloud/compute/node_groups/v1/node_groups_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NodeGroupsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NodeGroupsClient`. To do so,
 * construct an object of type `NodeGroupsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNodeGroupsConnection
    : public compute_node_groups_v1::NodeGroupsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddNodes)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddNodes(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, AddNodes,
      (google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, AddNodes,
      (NoAwaitTag,
       google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddNodes,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<
          std::pair<std::string,
                    google::cloud::cpp::compute::v1::NodeGroupsScopedList>>),
      AggregatedListNodeGroups,
      (google::cloud::cpp::compute::node_groups::v1::
           AggregatedListNodeGroupsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteNodeGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteNodeGroup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNodeGroup,
              (google::cloud::cpp::compute::node_groups::v1::
                   DeleteNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteNodeGroup,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               DeleteNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNodeGroup,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteNodes)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteNodes(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, DeleteNodes,
      (google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, DeleteNodes,
      (NoAwaitTag,
       google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNodes,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::NodeGroup>, GetNodeGroup,
      (google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertNodeGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertNodeGroup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertNodeGroup,
              (google::cloud::cpp::compute::node_groups::v1::
                   InsertNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertNodeGroup,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               InsertNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertNodeGroup,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::NodeGroup>), ListNodeGroups,
      (google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>), ListNodes,
      (google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchNodeGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchNodeGroup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchNodeGroup,
              (google::cloud::cpp::compute::node_groups::v1::
                   PatchNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchNodeGroup,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               PatchNodeGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchNodeGroup,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PerformMaintenance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PerformMaintenance(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PerformMaintenance,
              (google::cloud::cpp::compute::node_groups::v1::
                   PerformMaintenanceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PerformMaintenance,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               PerformMaintenanceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PerformMaintenance,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetNodeTemplate)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetNodeTemplate(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetNodeTemplate,
              (google::cloud::cpp::compute::node_groups::v1::
                   SetNodeTemplateRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetNodeTemplate,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               SetNodeTemplateRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetNodeTemplate,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SimulateMaintenanceEvent)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SimulateMaintenanceEvent(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SimulateMaintenanceEvent,
              (google::cloud::cpp::compute::node_groups::v1::
                   SimulateMaintenanceEventRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SimulateMaintenanceEvent,
              (NoAwaitTag, google::cloud::cpp::compute::node_groups::v1::
                               SimulateMaintenanceEventRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SimulateMaintenanceEvent,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::node_groups::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_MOCKS_MOCK_NODE_GROUPS_CONNECTION_H
