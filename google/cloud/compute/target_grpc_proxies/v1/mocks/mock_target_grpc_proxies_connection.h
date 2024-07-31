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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_MOCKS_MOCK_TARGET_GRPC_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_MOCKS_MOCK_TARGET_GRPC_PROXIES_CONNECTION_H

#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TargetGrpcProxiesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TargetGrpcProxiesClient`. To do so,
 * construct an object of type `TargetGrpcProxiesClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTargetGrpcProxiesConnection
    : public compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteTargetGrpcProxy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteTargetGrpcProxy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetGrpcProxy,
              (google::cloud::cpp::compute::target_grpc_proxies::v1::
                   DeleteTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteTargetGrpcProxy,
              (NoAwaitTag, google::cloud::cpp::compute::target_grpc_proxies::
                               v1::DeleteTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetGrpcProxy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>,
              GetTargetGrpcProxy,
              (google::cloud::cpp::compute::target_grpc_proxies::v1::
                   GetTargetGrpcProxyRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertTargetGrpcProxy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertTargetGrpcProxy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetGrpcProxy,
              (google::cloud::cpp::compute::target_grpc_proxies::v1::
                   InsertTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertTargetGrpcProxy,
              (NoAwaitTag, google::cloud::cpp::compute::target_grpc_proxies::
                               v1::InsertTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetGrpcProxy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>),
              ListTargetGrpcProxies,
              (google::cloud::cpp::compute::target_grpc_proxies::v1::
                   ListTargetGrpcProxiesRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchTargetGrpcProxy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchTargetGrpcProxy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchTargetGrpcProxy,
              (google::cloud::cpp::compute::target_grpc_proxies::v1::
                   PatchTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchTargetGrpcProxy,
              (NoAwaitTag, google::cloud::cpp::compute::target_grpc_proxies::
                               v1::PatchTargetGrpcProxyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchTargetGrpcProxy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_MOCKS_MOCK_TARGET_GRPC_PROXIES_CONNECTION_H
