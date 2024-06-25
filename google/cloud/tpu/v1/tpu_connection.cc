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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/tpu_connection.h"
#include "google/cloud/tpu/v1/internal/tpu_connection_impl.h"
#include "google/cloud/tpu/v1/internal/tpu_option_defaults.h"
#include "google/cloud/tpu/v1/internal/tpu_stub_factory.h"
#include "google/cloud/tpu/v1/internal/tpu_tracing_connection.h"
#include "google/cloud/tpu/v1/tpu_options.h"
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
namespace tpu_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuConnection::~TpuConnection() = default;

StreamRange<google::cloud::tpu::v1::Node> TpuConnection::ListNodes(
    google::cloud::tpu::v1::
        ListNodesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::tpu::v1::Node>>();
}

StatusOr<google::cloud::tpu::v1::Node> TpuConnection::GetNode(
    google::cloud::tpu::v1::GetNodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::CreateNode(
    google::cloud::tpu::v1::CreateNodeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> TpuConnection::CreateNode(
    ExperimentalTag, NoAwaitTag,
    google::cloud::tpu::v1::CreateNodeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::CreateNode(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::DeleteNode(
    google::cloud::tpu::v1::DeleteNodeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> TpuConnection::DeleteNode(
    ExperimentalTag, NoAwaitTag,
    google::cloud::tpu::v1::DeleteNodeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::DeleteNode(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::ReimageNode(
    google::cloud::tpu::v1::ReimageNodeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> TpuConnection::ReimageNode(
    ExperimentalTag, NoAwaitTag,
    google::cloud::tpu::v1::ReimageNodeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::ReimageNode(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::StopNode(
    google::cloud::tpu::v1::StopNodeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> TpuConnection::StopNode(
    ExperimentalTag, NoAwaitTag,
    google::cloud::tpu::v1::StopNodeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::StopNode(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::StartNode(
    google::cloud::tpu::v1::StartNodeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> TpuConnection::StartNode(
    ExperimentalTag, NoAwaitTag,
    google::cloud::tpu::v1::StartNodeRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnection::StartNode(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::tpu::v1::Node>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::tpu::v1::TensorFlowVersion>
TpuConnection::ListTensorFlowVersions(
    google::cloud::tpu::v1::
        ListTensorFlowVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::tpu::v1::TensorFlowVersion>>();
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuConnection::GetTensorFlowVersion(
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::tpu::v1::AcceleratorType>
TpuConnection::ListAcceleratorTypes(
    google::cloud::tpu::v1::
        ListAcceleratorTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::tpu::v1::AcceleratorType>>();
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuConnection::GetAcceleratorType(
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TpuConnection> MakeTpuConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TpuPolicyOptionList>(options, __func__);
  options = tpu_v1_internal::TpuDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = tpu_v1_internal::CreateDefaultTpuStub(std::move(auth), options);
  return tpu_v1_internal::MakeTpuTracingConnection(
      std::make_shared<tpu_v1_internal::TpuConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1
}  // namespace cloud
}  // namespace google
