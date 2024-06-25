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
// source: google/cloud/resourcemanager/v3/folders.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_CONNECTION_IMPL_H

#include "google/cloud/resourcemanager/v3/folders_connection.h"
#include "google/cloud/resourcemanager/v3/folders_connection_idempotency_policy.h"
#include "google/cloud/resourcemanager/v3/folders_options.h"
#include "google/cloud/resourcemanager/v3/internal/folders_retry_traits.h"
#include "google/cloud/resourcemanager/v3/internal/folders_stub.h"
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
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FoldersConnectionImpl : public resourcemanager_v3::FoldersConnection {
 public:
  ~FoldersConnectionImpl() override = default;

  FoldersConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_v3_internal::FoldersStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::resourcemanager::v3::Folder> GetFolder(
      google::cloud::resourcemanager::v3::GetFolderRequest const& request)
      override;

  StreamRange<google::cloud::resourcemanager::v3::Folder> ListFolders(
      google::cloud::resourcemanager::v3::ListFoldersRequest request) override;

  StreamRange<google::cloud::resourcemanager::v3::Folder> SearchFolders(
      google::cloud::resourcemanager::v3::SearchFoldersRequest request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> CreateFolder(
      google::cloud::resourcemanager::v3::CreateFolderRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFolder(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::CreateFolderRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> CreateFolder(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> UpdateFolder(
      google::cloud::resourcemanager::v3::UpdateFolderRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFolder(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::UpdateFolderRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> UpdateFolder(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> MoveFolder(
      google::cloud::resourcemanager::v3::MoveFolderRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> MoveFolder(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::MoveFolderRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> MoveFolder(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> DeleteFolder(
      google::cloud::resourcemanager::v3::DeleteFolderRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFolder(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::DeleteFolderRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> DeleteFolder(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> UndeleteFolder(
      google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteFolder(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>> UndeleteFolder(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcemanager_v3_internal::FoldersStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_CONNECTION_IMPL_H
