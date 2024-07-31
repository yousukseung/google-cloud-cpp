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
// source: google/cloud/networkservices/v1/dep.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_DEP_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_DEP_TRACING_CONNECTION_H

#include "google/cloud/networkservices/v1/dep_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DepServiceTracingConnection
    : public networkservices_v1::DepServiceConnection {
 public:
  ~DepServiceTracingConnection() override = default;

  explicit DepServiceTracingConnection(
      std::shared_ptr<networkservices_v1::DepServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::networkservices::v1::LbTrafficExtension>
  ListLbTrafficExtensions(
      google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest
          request) override;

  StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
  GetLbTrafficExtension(
      google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  CreateLbTrafficExtension(
      google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateLbTrafficExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  CreateLbTrafficExtension(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  UpdateLbTrafficExtension(
      google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateLbTrafficExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
  UpdateLbTrafficExtension(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbTrafficExtension(
      google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteLbTrafficExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbTrafficExtension(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::networkservices::v1::LbRouteExtension>
  ListLbRouteExtensions(
      google::cloud::networkservices::v1::ListLbRouteExtensionsRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
  GetLbRouteExtension(
      google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  CreateLbRouteExtension(
      google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateLbRouteExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  CreateLbRouteExtension(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  UpdateLbRouteExtension(
      google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateLbRouteExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
  UpdateLbRouteExtension(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbRouteExtension(
      google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteLbRouteExtension(
      NoAwaitTag,
      google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteLbRouteExtension(
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<networkservices_v1::DepServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<networkservices_v1::DepServiceConnection>
MakeDepServiceTracingConnection(
    std::shared_ptr<networkservices_v1::DepServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_DEP_TRACING_CONNECTION_H
