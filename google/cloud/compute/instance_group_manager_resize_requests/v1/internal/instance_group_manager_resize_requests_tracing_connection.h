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
// source:
// google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_TRACING_CONNECTION_H

#include "google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_manager_resize_requests_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class InstanceGroupManagerResizeRequestsTracingConnection
    : public compute_instance_group_manager_resize_requests_v1::
          InstanceGroupManagerResizeRequestsConnection {
 public:
  ~InstanceGroupManagerResizeRequestsTracingConnection() override = default;

  explicit InstanceGroupManagerResizeRequestsTracingConnection(
      std::shared_ptr<compute_instance_group_manager_resize_requests_v1::
                          InstanceGroupManagerResizeRequestsConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Cancel(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          CancelRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Cancel(
      NoAwaitTag,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          CancelRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Cancel(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          DeleteInstanceGroupManagerResizeRequestRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInstanceGroupManagerResizeRequest(
      NoAwaitTag,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          DeleteInstanceGroupManagerResizeRequestRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>
  GetInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          GetInstanceGroupManagerResizeRequestRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          InsertInstanceGroupManagerResizeRequestRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInstanceGroupManagerResizeRequest(
      NoAwaitTag,
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          InsertInstanceGroupManagerResizeRequestRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroupManagerResizeRequest(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<
      google::cloud::cpp::compute::v1::InstanceGroupManagerResizeRequest>
  ListInstanceGroupManagerResizeRequests(
      google::cloud::cpp::compute::instance_group_manager_resize_requests::v1::
          ListInstanceGroupManagerResizeRequestsRequest request) override;

 private:
  std::shared_ptr<compute_instance_group_manager_resize_requests_v1::
                      InstanceGroupManagerResizeRequestsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsConnection>
MakeInstanceGroupManagerResizeRequestsTracingConnection(
    std::shared_ptr<compute_instance_group_manager_resize_requests_v1::
                        InstanceGroupManagerResizeRequestsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_manager_resize_requests_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_V1_INTERNAL_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_TRACING_CONNECTION_H
