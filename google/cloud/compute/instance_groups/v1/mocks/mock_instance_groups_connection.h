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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_MOCKS_MOCK_INSTANCE_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_MOCKS_MOCK_INSTANCE_GROUPS_CONNECTION_H

#include "google/cloud/compute/instance_groups/v1/instance_groups_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InstanceGroupsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InstanceGroupsClient`. To do so,
 * construct an object of type `InstanceGroupsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInstanceGroupsConnection
    : public compute_instance_groups_v1::InstanceGroupsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, AddInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, AddInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddInstances,
              (google::cloud::cpp::compute::instance_groups::v1::
                   AddInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddInstances,
              (NoAwaitTag, google::cloud::cpp::compute::instance_groups::v1::
                               AddInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddInstances,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                              InstanceGroupsScopedList>>),
      AggregatedListInstanceGroups,
      (google::cloud::cpp::compute::instance_groups::v1::
           AggregatedListInstanceGroupsRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstanceGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstanceGroup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceGroup,
              (google::cloud::cpp::compute::instance_groups::v1::
                   DeleteInstanceGroupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInstanceGroup,
              (NoAwaitTag, google::cloud::cpp::compute::instance_groups::v1::
                               DeleteInstanceGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInstanceGroup,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>,
              GetInstanceGroup,
              (google::cloud::cpp::compute::instance_groups::v1::
                   GetInstanceGroupRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertInstanceGroup)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertInstanceGroup(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceGroup,
              (google::cloud::cpp::compute::instance_groups::v1::
                   InsertInstanceGroupRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertInstanceGroup,
              (NoAwaitTag, google::cloud::cpp::compute::instance_groups::v1::
                               InsertInstanceGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInstanceGroup,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>),
              ListInstanceGroups,
              (google::cloud::cpp::compute::instance_groups::v1::
                   ListInstanceGroupsRequest request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>),
      ListInstances,
      (google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
           request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, RemoveInstances)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, RemoveInstances(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveInstances,
              (google::cloud::cpp::compute::instance_groups::v1::
                   RemoveInstancesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RemoveInstances,
              (NoAwaitTag, google::cloud::cpp::compute::instance_groups::v1::
                               RemoveInstancesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveInstances,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetNamedPorts)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetNamedPorts(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetNamedPorts,
              (google::cloud::cpp::compute::instance_groups::v1::
                   SetNamedPortsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetNamedPorts,
              (NoAwaitTag, google::cloud::cpp::compute::instance_groups::v1::
                               SetNamedPortsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetNamedPorts,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_MOCKS_MOCK_INSTANCE_GROUPS_CONNECTION_H
