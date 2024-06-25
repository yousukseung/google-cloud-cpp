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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_TRACING_CONNECTION_H

#include "google/cloud/compute/network_attachments/v1/network_attachments_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NetworkAttachmentsTracingConnection
    : public compute_network_attachments_v1::NetworkAttachmentsConnection {
 public:
  ~NetworkAttachmentsTracingConnection() override = default;

  explicit NetworkAttachmentsTracingConnection(
      std::shared_ptr<
          compute_network_attachments_v1::NetworkAttachmentsConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::NetworkAttachmentsScopedList>>
  AggregatedListNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          AggregatedListNetworkAttachmentsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkAttachment(
      google::cloud::cpp::compute::network_attachments::v1::
          DeleteNetworkAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteNetworkAttachment(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::network_attachments::v1::
          DeleteNetworkAttachmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkAttachment(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
  GetNetworkAttachment(google::cloud::cpp::compute::network_attachments::v1::
                           GetNetworkAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::network_attachments::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkAttachment(
      google::cloud::cpp::compute::network_attachments::v1::
          InsertNetworkAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertNetworkAttachment(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::network_attachments::v1::
          InsertNetworkAttachmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkAttachment(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>
  ListNetworkAttachments(google::cloud::cpp::compute::network_attachments::v1::
                             ListNetworkAttachmentsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkAttachment(
      google::cloud::cpp::compute::network_attachments::v1::
          PatchNetworkAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchNetworkAttachment(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::network_attachments::v1::
          PatchNetworkAttachmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkAttachment(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::network_attachments::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_attachments::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_network_attachments_v1::NetworkAttachmentsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_network_attachments_v1::NetworkAttachmentsConnection>
MakeNetworkAttachmentsTracingConnection(
    std::shared_ptr<
        compute_network_attachments_v1::NetworkAttachmentsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_TRACING_CONNECTION_H
