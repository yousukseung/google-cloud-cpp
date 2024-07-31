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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#include "google/cloud/compute/node_templates/v1/node_templates_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_node_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeTemplatesClient::NodeTemplatesClient(
    std::shared_ptr<NodeTemplatesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
NodeTemplatesClient::~NodeTemplatesClient() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>
NodeTemplatesClient::AggregatedListNodeTemplates(std::string const& project,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::
      AggregatedListNodeTemplatesRequest request;
  request.set_project(project);
  return connection_->AggregatedListNodeTemplates(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTemplatesScopedList>>
NodeTemplatesClient::AggregatedListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::
        AggregatedListNodeTemplatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListNodeTemplates(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::DeleteNodeTemplate(std::string const& project,
                                        std::string const& region,
                                        std::string const& node_template,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::DeleteNodeTemplateRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_node_template(node_template);
  return connection_->DeleteNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesClient::DeleteNodeTemplate(NoAwaitTag, std::string const& project,
                                        std::string const& region,
                                        std::string const& node_template,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::DeleteNodeTemplateRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_node_template(node_template);
  return connection_->DeleteNodeTemplate(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::DeleteNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesClient::DeleteNodeTemplate(
    NoAwaitTag,
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNodeTemplate(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::DeleteNodeTemplate(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNodeTemplate(operation);
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesClient::GetNodeTemplate(std::string const& project,
                                     std::string const& region,
                                     std::string const& node_template,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::GetNodeTemplateRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_node_template(node_template);
  return connection_->GetNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesClient::GetNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        GetNodeTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesClient::GetIamPolicy(std::string const& project,
                                  std::string const& region,
                                  std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesClient::GetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::InsertNodeTemplate(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::NodeTemplate const& node_template_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::InsertNodeTemplateRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_node_template_resource() = node_template_resource;
  return connection_->InsertNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesClient::InsertNodeTemplate(
    NoAwaitTag, std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::NodeTemplate const& node_template_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::InsertNodeTemplateRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_node_template_resource() = node_template_resource;
  return connection_->InsertNodeTemplate(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::InsertNodeTemplate(
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertNodeTemplate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NodeTemplatesClient::InsertNodeTemplate(
    NoAwaitTag,
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertNodeTemplate(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesClient::InsertNodeTemplate(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertNodeTemplate(operation);
}

StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesClient::ListNodeTemplates(std::string const& project,
                                       std::string const& region,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
      request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListNodeTemplates(request);
}

StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesClient::ListNodeTemplates(
    google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNodeTemplates(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesClient::SetIamPolicy(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetPolicyRequest const&
        region_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_policy_request_resource() =
      region_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesClient::SetIamPolicy(
    google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeTemplatesClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_templates::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeTemplatesClient::TestIamPermissions(
    google::cloud::cpp::compute::node_templates::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1
}  // namespace cloud
}  // namespace google
