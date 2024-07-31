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
// source: google/cloud/dataproc/v1/node_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_NODE_GROUP_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_NODE_GROUP_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/v1/node_group_controller_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataproc_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NodeGroupControllerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NodeGroupControllerClient`. To do
 * so, construct an object of type `NodeGroupControllerClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNodeGroupControllerConnection
    : public dataproc_v1::NodeGroupControllerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateNodeGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateNodeGroup(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>, CreateNodeGroup,
      (google::cloud::dataproc::v1::CreateNodeGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateNodeGroup,
      (NoAwaitTag,
       google::cloud::dataproc::v1::CreateNodeGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>,
              CreateNodeGroup,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ResizeNodeGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ResizeNodeGroup(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>, ResizeNodeGroup,
      (google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ResizeNodeGroup,
      (NoAwaitTag,
       google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataproc::v1::NodeGroup>>,
              ResizeNodeGroup,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::dataproc::v1::NodeGroup>, GetNodeGroup,
              (google::cloud::dataproc::v1::GetNodeGroupRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_MOCKS_MOCK_NODE_GROUP_CONTROLLER_CONNECTION_H
