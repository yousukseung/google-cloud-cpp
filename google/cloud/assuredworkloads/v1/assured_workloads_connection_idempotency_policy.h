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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_ASSURED_WORKLOADS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_ASSURED_WORKLOADS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssuredWorkloadsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AssuredWorkloadsServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AssuredWorkloadsServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
          request);

  virtual google::cloud::Idempotency UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
          request);

  virtual google::cloud::Idempotency RestrictAllowedResources(
      google::cloud::assuredworkloads::v1::
          RestrictAllowedResourcesRequest const& request);

  virtual google::cloud::Idempotency DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
          request);

  virtual google::cloud::Idempotency GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request);

  virtual google::cloud::Idempotency ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request);

  virtual google::cloud::Idempotency ListViolations(
      google::cloud::assuredworkloads::v1::ListViolationsRequest request);

  virtual google::cloud::Idempotency GetViolation(
      google::cloud::assuredworkloads::v1::GetViolationRequest const& request);

  virtual google::cloud::Idempotency AcknowledgeViolation(
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request);
};

std::unique_ptr<AssuredWorkloadsServiceConnectionIdempotencyPolicy>
MakeDefaultAssuredWorkloadsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_ASSURED_WORKLOADS_CONNECTION_IDEMPOTENCY_POLICY_H
