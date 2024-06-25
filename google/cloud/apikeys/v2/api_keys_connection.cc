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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/api_keys_connection.h"
#include "google/cloud/apikeys/v2/api_keys_options.h"
#include "google/cloud/apikeys/v2/internal/api_keys_connection_impl.h"
#include "google/cloud/apikeys/v2/internal/api_keys_option_defaults.h"
#include "google/cloud/apikeys/v2/internal/api_keys_stub_factory.h"
#include "google/cloud/apikeys/v2/internal/api_keys_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apikeys_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiKeysConnection::~ApiKeysConnection() = default;

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::CreateKey(
    google::api::apikeys::v2::CreateKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ApiKeysConnection::CreateKey(
    ExperimentalTag, NoAwaitTag,
    google::api::apikeys::v2::CreateKeyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::CreateKey(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::api::apikeys::v2::Key> ApiKeysConnection::ListKeys(
    google::api::apikeys::v2::
        ListKeysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::api::apikeys::v2::Key>>();
}

StatusOr<google::api::apikeys::v2::Key> ApiKeysConnection::GetKey(
    google::api::apikeys::v2::GetKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::api::apikeys::v2::GetKeyStringResponse>
ApiKeysConnection::GetKeyString(
    google::api::apikeys::v2::GetKeyStringRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::UpdateKey(
    google::api::apikeys::v2::UpdateKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ApiKeysConnection::UpdateKey(
    ExperimentalTag, NoAwaitTag,
    google::api::apikeys::v2::UpdateKeyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::UpdateKey(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::DeleteKey(
    google::api::apikeys::v2::DeleteKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ApiKeysConnection::DeleteKey(
    ExperimentalTag, NoAwaitTag,
    google::api::apikeys::v2::DeleteKeyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::DeleteKey(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::UndeleteKey(
    google::api::apikeys::v2::UndeleteKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ApiKeysConnection::UndeleteKey(
    ExperimentalTag, NoAwaitTag,
    google::api::apikeys::v2::UndeleteKeyRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::apikeys::v2::Key>> ApiKeysConnection::UndeleteKey(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::apikeys::v2::Key>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::api::apikeys::v2::LookupKeyResponse>
ApiKeysConnection::LookupKey(
    google::api::apikeys::v2::LookupKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ApiKeysConnection> MakeApiKeysConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ApiKeysPolicyOptionList>(options, __func__);
  options = apikeys_v2_internal::ApiKeysDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      apikeys_v2_internal::CreateDefaultApiKeysStub(std::move(auth), options);
  return apikeys_v2_internal::MakeApiKeysTracingConnection(
      std::make_shared<apikeys_v2_internal::ApiKeysConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2
}  // namespace cloud
}  // namespace google
