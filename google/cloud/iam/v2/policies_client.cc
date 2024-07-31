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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/policies_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PoliciesClient::PoliciesClient(std::shared_ptr<PoliciesConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PoliciesClient::~PoliciesClient() = default;

StreamRange<google::iam::v2::Policy> PoliciesClient::ListPolicies(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::ListPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListPolicies(request);
}

StreamRange<google::iam::v2::Policy> PoliciesClient::ListPolicies(
    google::iam::v2::ListPoliciesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPolicies(std::move(request));
}

StatusOr<google::iam::v2::Policy> PoliciesClient::GetPolicy(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::GetPolicyRequest request;
  request.set_name(name);
  return connection_->GetPolicy(request);
}

StatusOr<google::iam::v2::Policy> PoliciesClient::GetPolicy(
    google::iam::v2::GetPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPolicy(request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::CreatePolicy(
    std::string const& parent, google::iam::v2::Policy const& policy,
    std::string const& policy_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::CreatePolicyRequest request;
  request.set_parent(parent);
  *request.mutable_policy() = policy;
  request.set_policy_id(policy_id);
  return connection_->CreatePolicy(request);
}

StatusOr<google::longrunning::Operation> PoliciesClient::CreatePolicy(
    NoAwaitTag, std::string const& parent,
    google::iam::v2::Policy const& policy, std::string const& policy_id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::CreatePolicyRequest request;
  request.set_parent(parent);
  *request.mutable_policy() = policy;
  request.set_policy_id(policy_id);
  return connection_->CreatePolicy(NoAwaitTag{}, request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePolicy(request);
}

StatusOr<google::longrunning::Operation> PoliciesClient::CreatePolicy(
    NoAwaitTag, google::iam::v2::CreatePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePolicy(NoAwaitTag{}, request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::CreatePolicy(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePolicy(operation);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePolicy(request);
}

StatusOr<google::longrunning::Operation> PoliciesClient::UpdatePolicy(
    NoAwaitTag, google::iam::v2::UpdatePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePolicy(NoAwaitTag{}, request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::UpdatePolicy(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePolicy(operation);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::DeletePolicy(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::DeletePolicyRequest request;
  request.set_name(name);
  return connection_->DeletePolicy(request);
}

StatusOr<google::longrunning::Operation> PoliciesClient::DeletePolicy(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v2::DeletePolicyRequest request;
  request.set_name(name);
  return connection_->DeletePolicy(NoAwaitTag{}, request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePolicy(request);
}

StatusOr<google::longrunning::Operation> PoliciesClient::DeletePolicy(
    NoAwaitTag, google::iam::v2::DeletePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePolicy(NoAwaitTag{}, request);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesClient::DeletePolicy(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePolicy(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2
}  // namespace cloud
}  // namespace google
