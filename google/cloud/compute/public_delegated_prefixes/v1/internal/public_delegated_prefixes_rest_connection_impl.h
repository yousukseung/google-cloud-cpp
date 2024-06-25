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
// source:
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_rest_stub.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_retry_traits.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection_idempotency_policy.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicDelegatedPrefixesRestConnectionImpl
    : public compute_public_delegated_prefixes_v1::
          PublicDelegatedPrefixesConnection {
 public:
  ~PublicDelegatedPrefixesRestConnectionImpl() override = default;

  PublicDelegatedPrefixesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_public_delegated_prefixes_v1_internal::
                          PublicDelegatedPrefixesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         PublicDelegatedPrefixesScopedList>>
  AggregatedListPublicDelegatedPrefixes(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AggregatedListPublicDelegatedPrefixesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Announce(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AnnounceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Announce(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AnnounceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Announce(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePublicDelegatedPrefix(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertPublicDelegatedPrefix(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListPublicDelegatedPrefixes(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          ListPublicDelegatedPrefixesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPublicDelegatedPrefix(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Withdraw(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          WithdrawRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Withdraw(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          WithdrawRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Withdraw(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_public_delegated_prefixes_v1::
                 PublicDelegatedPrefixesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_public_delegated_prefixes_v1::
                 PublicDelegatedPrefixesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_public_delegated_prefixes_v1::
                             PublicDelegatedPrefixesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_public_delegated_prefixes_v1::
                 PublicDelegatedPrefixesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_public_delegated_prefixes_v1::
                 PublicDelegatedPrefixesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_public_delegated_prefixes_v1_internal::
                      PublicDelegatedPrefixesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H
