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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/v1/ids_connection.h"
#include "google/cloud/ids/v1/ids_options.h"
#include "google/cloud/ids/v1/internal/ids_connection_impl.h"
#include "google/cloud/ids/v1/internal/ids_option_defaults.h"
#include "google/cloud/ids/v1/internal/ids_stub_factory.h"
#include "google/cloud/ids/v1/internal/ids_tracing_connection.h"
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
namespace ids_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IDSConnection::~IDSConnection() = default;

StreamRange<google::cloud::ids::v1::Endpoint> IDSConnection::ListEndpoints(
    google::cloud::ids::v1::
        ListEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::ids::v1::Endpoint>>();
}

StatusOr<google::cloud::ids::v1::Endpoint> IDSConnection::GetEndpoint(
    google::cloud::ids::v1::GetEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::ids::v1::Endpoint>>
IDSConnection::CreateEndpoint(
    google::cloud::ids::v1::CreateEndpointRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::ids::v1::Endpoint>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> IDSConnection::CreateEndpoint(
    ExperimentalTag, NoAwaitTag,
    google::cloud::ids::v1::CreateEndpointRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::ids::v1::Endpoint>>
IDSConnection::CreateEndpoint(ExperimentalTag,
                              google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::ids::v1::Endpoint>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSConnection::DeleteEndpoint(
    google::cloud::ids::v1::DeleteEndpointRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::ids::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> IDSConnection::DeleteEndpoint(
    ExperimentalTag, NoAwaitTag,
    google::cloud::ids::v1::DeleteEndpointRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSConnection::DeleteEndpoint(ExperimentalTag,
                              google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::ids::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<IDSConnection> MakeIDSConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IDSPolicyOptionList>(options, __func__);
  options = ids_v1_internal::IDSDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = ids_v1_internal::CreateDefaultIDSStub(std::move(auth), options);
  return ids_v1_internal::MakeIDSTracingConnection(
      std::make_shared<ids_v1_internal::IDSConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1
}  // namespace cloud
}  // namespace google
