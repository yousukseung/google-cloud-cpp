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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_CONNECTION_IMPL_H

#include "google/cloud/tpu/v1/internal/tpu_retry_traits.h"
#include "google/cloud/tpu/v1/internal/tpu_stub.h"
#include "google/cloud/tpu/v1/tpu_connection.h"
#include "google/cloud/tpu/v1/tpu_connection_idempotency_policy.h"
#include "google/cloud/tpu/v1/tpu_options.h"
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
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuConnectionImpl : public tpu_v1::TpuConnection {
 public:
  ~TpuConnectionImpl() override = default;

  TpuConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<tpu_v1_internal::TpuStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::tpu::v1::Node> ListNodes(
      google::cloud::tpu::v1::ListNodesRequest request) override;

  StatusOr<google::cloud::tpu::v1::Node> GetNode(
      google::cloud::tpu::v1::GetNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      google::cloud::tpu::v1::CreateNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateNode(
      ExperimentalTag, NoAwaitTag,
      google::cloud::tpu::v1::CreateNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      google::cloud::tpu::v1::DeleteNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteNode(
      ExperimentalTag, NoAwaitTag,
      google::cloud::tpu::v1::DeleteNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> ReimageNode(
      google::cloud::tpu::v1::ReimageNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> ReimageNode(
      ExperimentalTag, NoAwaitTag,
      google::cloud::tpu::v1::ReimageNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> ReimageNode(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> StopNode(
      google::cloud::tpu::v1::StopNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StopNode(
      ExperimentalTag, NoAwaitTag,
      google::cloud::tpu::v1::StopNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> StopNode(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> StartNode(
      google::cloud::tpu::v1::StartNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StartNode(
      ExperimentalTag, NoAwaitTag,
      google::cloud::tpu::v1::StartNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v1::Node>> StartNode(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::tpu::v1::TensorFlowVersion> ListTensorFlowVersions(
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest request) override;

  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request)
      override;

  StreamRange<google::cloud::tpu::v1::AcceleratorType> ListAcceleratorTypes(
      google::cloud::tpu::v1::ListAcceleratorTypesRequest request) override;

  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<tpu_v1_internal::TpuStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_CONNECTION_IMPL_H
