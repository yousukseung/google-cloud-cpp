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
// source: google/cloud/redis/v1/cloud_redis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_TRACING_CONNECTION_H

#include "google/cloud/redis/v1/cloud_redis_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudRedisTracingConnection : public redis_v1::CloudRedisConnection {
 public:
  ~CloudRedisTracingConnection() override = default;

  explicit CloudRedisTracingConnection(
      std::shared_ptr<redis_v1::CloudRedisConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::redis::v1::Instance> ListInstances(
      google::cloud::redis::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::redis::v1::Instance> GetInstance(
      google::cloud::redis::v1::GetInstanceRequest const& request) override;

  StatusOr<google::cloud::redis::v1::InstanceAuthString> GetInstanceAuthString(
      google::cloud::redis::v1::GetInstanceAuthStringRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::v1::Instance>> CreateInstance(
      google::cloud::redis::v1::CreateInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::CreateInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> CreateInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> UpdateInstance(
      google::cloud::redis::v1::UpdateInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::UpdateInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> UpdateInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> UpgradeInstance(
      google::cloud::redis::v1::UpgradeInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpgradeInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::UpgradeInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> UpgradeInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> ImportInstance(
      google::cloud::redis::v1::ImportInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> ImportInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::ImportInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> ImportInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> ExportInstance(
      google::cloud::redis::v1::ExportInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> ExportInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::ExportInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> ExportInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> FailoverInstance(
      google::cloud::redis::v1::FailoverInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> FailoverInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::v1::Instance>> FailoverInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::OperationMetadata>> DeleteInstance(
      google::cloud::redis::v1::DeleteInstanceRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::DeleteInstanceRequest const& request) override;

  future<StatusOr<google::cloud::redis::v1::OperationMetadata>> DeleteInstance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::redis::v1::Instance>> RescheduleMaintenance(
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RescheduleMaintenance(
      ExperimentalTag, NoAwaitTag,
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::v1::Instance>> RescheduleMaintenance(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<redis_v1::CloudRedisConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<redis_v1::CloudRedisConnection> MakeCloudRedisTracingConnection(
    std::shared_ptr<redis_v1::CloudRedisConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_TRACING_CONNECTION_H
