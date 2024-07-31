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
// source: google/cloud/aiplatform/v1/migration_service.proto

#include "google/cloud/aiplatform/v1/migration_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceClient::MigrationServiceClient(
    std::shared_ptr<MigrationServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
MigrationServiceClient::~MigrationServiceClient() = default;

StreamRange<google::cloud::aiplatform::v1::MigratableResource>
MigrationServiceClient::SearchMigratableResources(std::string const& parent,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::SearchMigratableResourcesRequest request;
  request.set_parent(parent);
  return connection_->SearchMigratableResources(request);
}

StreamRange<google::cloud::aiplatform::v1::MigratableResource>
MigrationServiceClient::SearchMigratableResources(
    google::cloud::aiplatform::v1::SearchMigratableResourcesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchMigratableResources(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
MigrationServiceClient::BatchMigrateResources(
    std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::MigrateResourceRequest> const&
        migrate_resource_requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchMigrateResourcesRequest request;
  request.set_parent(parent);
  *request.mutable_migrate_resource_requests() = {
      migrate_resource_requests.begin(), migrate_resource_requests.end()};
  return connection_->BatchMigrateResources(request);
}

StatusOr<google::longrunning::Operation>
MigrationServiceClient::BatchMigrateResources(
    NoAwaitTag, std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::MigrateResourceRequest> const&
        migrate_resource_requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchMigrateResourcesRequest request;
  request.set_parent(parent);
  *request.mutable_migrate_resource_requests() = {
      migrate_resource_requests.begin(), migrate_resource_requests.end()};
  return connection_->BatchMigrateResources(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
MigrationServiceClient::BatchMigrateResources(
    google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchMigrateResources(request);
}

StatusOr<google::longrunning::Operation>
MigrationServiceClient::BatchMigrateResources(
    NoAwaitTag,
    google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchMigrateResources(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
MigrationServiceClient::BatchMigrateResources(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchMigrateResources(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
