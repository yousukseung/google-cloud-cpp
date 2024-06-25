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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PERSISTENT_RESOURCE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PERSISTENT_RESOURCE_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/persistent_resource_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PersistentResourceServiceTracingConnection
    : public aiplatform_v1::PersistentResourceServiceConnection {
 public:
  ~PersistentResourceServiceTracingConnection() override = default;

  explicit PersistentResourceServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::PersistentResourceServiceConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  CreatePersistentResource(
      google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreatePersistentResource(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  CreatePersistentResource(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::PersistentResource>
  GetPersistentResource(
      google::cloud::aiplatform::v1::GetPersistentResourceRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::PersistentResource>
  ListPersistentResources(
      google::cloud::aiplatform::v1::ListPersistentResourcesRequest request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeletePersistentResource(
      google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeletePersistentResource(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeletePersistentResource(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  UpdatePersistentResource(
      google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdatePersistentResource(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  UpdatePersistentResource(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  RebootPersistentResource(
      google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RebootPersistentResource(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::PersistentResource>>
  RebootPersistentResource(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<aiplatform_v1::PersistentResourceServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::PersistentResourceServiceConnection>
MakePersistentResourceServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::PersistentResourceServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PERSISTENT_RESOURCE_TRACING_CONNECTION_H
