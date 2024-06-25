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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_TRACING_CONNECTION_H

#include "google/cloud/managedidentities/v1/managed_identities_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace managedidentities_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ManagedIdentitiesServiceTracingConnection
    : public managedidentities_v1::ManagedIdentitiesServiceConnection {
 public:
  ~ManagedIdentitiesServiceTracingConnection() override = default;

  explicit ManagedIdentitiesServiceTracingConnection(
      std::shared_ptr<managedidentities_v1::ManagedIdentitiesServiceConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  CreateMicrosoftAdDomain(
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateMicrosoftAdDomain(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  CreateMicrosoftAdDomain(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request) override;

  StreamRange<google::cloud::managedidentities::v1::Domain> ListDomains(
      google::cloud::managedidentities::v1::ListDomainsRequest request)
      override;

  StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      google::cloud::managedidentities::v1::GetDomainRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> UpdateDomain(
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDomain(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> UpdateDomain(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
  DeleteDomain(google::cloud::managedidentities::v1::DeleteDomainRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteDomain(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
  DeleteDomain(ExperimentalTag,
               google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> AttachTrust(
      google::cloud::managedidentities::v1::AttachTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AttachTrust(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::AttachTrustRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> AttachTrust(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ReconfigureTrust(
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ReconfigureTrust(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ReconfigureTrust(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> DetachTrust(
      google::cloud::managedidentities::v1::DetachTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DetachTrust(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::DetachTrustRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> DetachTrust(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> ValidateTrust(
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ValidateTrust(
      ExperimentalTag, NoAwaitTag,
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request)
      override;

  future<StatusOr<google::cloud::managedidentities::v1::Domain>> ValidateTrust(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<managedidentities_v1::ManagedIdentitiesServiceConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<managedidentities_v1::ManagedIdentitiesServiceConnection>
MakeManagedIdentitiesServiceTracingConnection(
    std::shared_ptr<managedidentities_v1::ManagedIdentitiesServiceConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_INTERNAL_MANAGED_IDENTITIES_TRACING_CONNECTION_H
