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
// google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_connection.h"
#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_connection_idempotency_policy.h"
#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_options.h"
#include "google/cloud/compute/global_forwarding_rules/v1/internal/global_forwarding_rules_rest_stub.h"
#include "google/cloud/compute/global_forwarding_rules/v1/internal/global_forwarding_rules_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalForwardingRulesRestConnectionImpl
    : public compute_global_forwarding_rules_v1::
          GlobalForwardingRulesConnection {
 public:
  ~GlobalForwardingRulesRestConnectionImpl() override = default;

  GlobalForwardingRulesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_global_forwarding_rules_v1_internal::
                          GlobalForwardingRulesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          DeleteForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          DeleteForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetForwardingRule(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          GetForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          InsertForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          InsertForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          ListGlobalForwardingRulesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(google::cloud::cpp::compute::global_forwarding_rules::v1::
                          PatchForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          PatchForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetLabelsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetLabelsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetTargetRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTarget(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          SetTargetRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<
      compute_global_forwarding_rules_v1::GlobalForwardingRulesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_forwarding_rules_v1::
                 GlobalForwardingRulesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_global_forwarding_rules_v1::
                 GlobalForwardingRulesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_global_forwarding_rules_v1::
                             GlobalForwardingRulesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_global_forwarding_rules_v1::
                 GlobalForwardingRulesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_global_forwarding_rules_v1::
                 GlobalForwardingRulesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_global_forwarding_rules_v1_internal::
                      GlobalForwardingRulesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H
