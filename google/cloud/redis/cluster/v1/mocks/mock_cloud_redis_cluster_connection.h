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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H

#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace redis_cluster_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudRedisClusterConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudRedisClusterClient`. To do so,
 * construct an object of type `CloudRedisClusterClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCloudRedisClusterConnection
    : public redis_cluster_v1::CloudRedisClusterConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::redis::cluster::v1::Cluster>),
              ListClusters,
              (google::cloud::redis::cluster::v1::ListClustersRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::redis::cluster::v1::Cluster>, GetCluster,
      (google::cloud::redis::cluster::v1::GetClusterRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
      UpdateCluster,
      (google::cloud::redis::cluster::v1::UpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::UpdateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              UpdateCluster, (google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Any>>, DeleteCluster,
      (google::cloud::redis::cluster::v1::DeleteClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::DeleteClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::protobuf::Any>>, DeleteCluster,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateCluster)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateCluster(::testing::_))` instead.
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
      CreateCluster,
      (google::cloud::redis::cluster::v1::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::CreateClusterRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              CreateCluster, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>,
              GetClusterCertificateAuthority,
              (google::cloud::redis::cluster::v1::
                   GetClusterCertificateAuthorityRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H
