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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_TRACING_CONNECTION_H

#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ForwardingRulesTracingConnection
    : public compute_forwarding_rules_v1::ForwardingRulesConnection {
 public:
  ~ForwardingRulesTracingConnection() override = default;

  explicit ForwardingRulesTracingConnection(
      std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ForwardingRulesScopedList>>
  AggregatedListForwardingRules(
      google::cloud::cpp::compute::forwarding_rules::v1::
          AggregatedListForwardingRulesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                           DeleteForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::forwarding_rules::v1::
          DeleteForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetForwardingRule(
      google::cloud::cpp::compute::forwarding_rules::v1::
          GetForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                           InsertForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::forwarding_rules::v1::
          InsertForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                          ListForwardingRulesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                          PatchForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchForwardingRule(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::forwarding_rules::v1::
          PatchForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTarget(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
MakeForwardingRulesTracingConnection(
    std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_TRACING_CONNECTION_H
