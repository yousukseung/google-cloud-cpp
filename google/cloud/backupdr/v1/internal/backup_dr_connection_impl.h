// Copyright 2024 Google LLC
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
// source: google/cloud/backupdr/v1/backupdr.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_INTERNAL_BACKUP_DR_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_INTERNAL_BACKUP_DR_CONNECTION_IMPL_H

#include "google/cloud/backupdr/v1/backup_dr_connection.h"
#include "google/cloud/backupdr/v1/backup_dr_connection_idempotency_policy.h"
#include "google/cloud/backupdr/v1/backup_dr_options.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_retry_traits.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace backupdr_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackupDRConnectionImpl : public backupdr_v1::BackupDRConnection {
 public:
  ~BackupDRConnectionImpl() override = default;

  BackupDRConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<backupdr_v1_internal::BackupDRStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::backupdr::v1::ManagementServer>
  ListManagementServers(
      google::cloud::backupdr::v1::ListManagementServersRequest request)
      override;

  StatusOr<google::cloud::backupdr::v1::ManagementServer> GetManagementServer(
      google::cloud::backupdr::v1::GetManagementServerRequest const& request)
      override;

  future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
  CreateManagementServer(
      google::cloud::backupdr::v1::CreateManagementServerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateManagementServer(
      NoAwaitTag,
      google::cloud::backupdr::v1::CreateManagementServerRequest const& request)
      override;

  future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
  CreateManagementServer(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
  DeleteManagementServer(
      google::cloud::backupdr::v1::DeleteManagementServerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteManagementServer(
      NoAwaitTag,
      google::cloud::backupdr::v1::DeleteManagementServerRequest const& request)
      override;

  future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
  DeleteManagementServer(
      google::longrunning::Operation const& operation) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<backupdr_v1_internal::BackupDRStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_INTERNAL_BACKUP_DR_CONNECTION_IMPL_H
