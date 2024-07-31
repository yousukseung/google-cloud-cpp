// Copyright 2022 Google LLC
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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H

#include "google/cloud/appengine/v1/instances_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace appengine_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InstancesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InstancesClient`. To do so,
 * construct an object of type `InstancesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInstancesConnection : public appengine_v1::InstancesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::appengine::v1::Instance>), ListInstances,
              (google::appengine::v1::ListInstancesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::appengine::v1::Instance>, GetInstance,
              (google::appengine::v1::GetInstanceRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteInstance(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::appengine::v1::OperationMetadataV1>>,
              DeleteInstance,
              (google::appengine::v1::DeleteInstanceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteInstance,
              (NoAwaitTag,
               google::appengine::v1::DeleteInstanceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::OperationMetadataV1>>,
              DeleteInstance, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DebugInstance)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DebugInstance(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::appengine::v1::Instance>>, DebugInstance,
              (google::appengine::v1::DebugInstanceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DebugInstance,
              (NoAwaitTag,
               google::appengine::v1::DebugInstanceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Instance>>, DebugInstance,
              (google::longrunning::Operation const& operation), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_INSTANCES_CONNECTION_H
