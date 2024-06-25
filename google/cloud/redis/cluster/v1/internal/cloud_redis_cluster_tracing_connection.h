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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_TRACING_CONNECTION_H

#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudRedisClusterTracingConnection
    : public redis_cluster_v1::CloudRedisClusterConnection {
 public:
  ~CloudRedisClusterTracingConnection() override = default;

  explicit CloudRedisClusterTracingConnection(
      std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::redis::cluster::v1::Cluster> ListClusters(
      google::cloud::redis::cluster::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::redis::cluster::v1::Cluster> GetCluster(
      google::cloud::redis::cluster::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> UpdateCluster(
      google::cloud::redis::cluster::v1::UpdateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::cluster::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> UpdateCluster(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::protobuf::Any>> DeleteCluster(
      google::cloud::redis::cluster::v1::DeleteClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::cluster::v1::DeleteClusterRequest const& request)
      override;

  future<StatusOr<google::protobuf::Any>> DeleteCluster(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> CreateCluster(
      google::cloud::redis::cluster::v1::CreateClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::cluster::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> CreateCluster(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>
  GetClusterCertificateAuthority(
      google::cloud::redis::cluster::v1::
          GetClusterCertificateAuthorityRequest const& request) override;

 private:
  std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection>
MakeCloudRedisClusterTracingConnection(
    std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_TRACING_CONNECTION_H
