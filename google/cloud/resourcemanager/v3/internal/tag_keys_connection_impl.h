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
// source: google/cloud/resourcemanager/v3/tag_keys.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_CONNECTION_IMPL_H

#include "google/cloud/resourcemanager/v3/internal/tag_keys_retry_traits.h"
#include "google/cloud/resourcemanager/v3/internal/tag_keys_stub.h"
#include "google/cloud/resourcemanager/v3/tag_keys_connection.h"
#include "google/cloud/resourcemanager/v3/tag_keys_connection_idempotency_policy.h"
#include "google/cloud/resourcemanager/v3/tag_keys_options.h"
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

class TagKeysConnectionImpl : public resourcemanager_v3::TagKeysConnection {
 public:
  ~TagKeysConnectionImpl() override = default;

  TagKeysConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_v3_internal::TagKeysStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::resourcemanager::v3::TagKey> ListTagKeys(
      google::cloud::resourcemanager::v3::ListTagKeysRequest request) override;

  StatusOr<google::cloud::resourcemanager::v3::TagKey> GetTagKey(
      google::cloud::resourcemanager::v3::GetTagKeyRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagKey> GetNamespacedTagKey(
      google::cloud::resourcemanager::v3::GetNamespacedTagKeyRequest const&
          request) override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> CreateTagKey(
      google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTagKey(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> CreateTagKey(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> UpdateTagKey(
      google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTagKey(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> UpdateTagKey(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> DeleteTagKey(
      google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTagKey(
      ExperimentalTag, NoAwaitTag,
      google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::TagKey>> DeleteTagKey(
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
  std::shared_ptr<resourcemanager_v3_internal::TagKeysStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_CONNECTION_IMPL_H
