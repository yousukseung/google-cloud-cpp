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
// source: google/datastore/admin/v1/datastore_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_TRACING_CONNECTION_H

#include "google/cloud/datastore/admin/v1/datastore_admin_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datastore_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DatastoreAdminTracingConnection
    : public datastore_admin_v1::DatastoreAdminConnection {
 public:
  ~DatastoreAdminTracingConnection() override = default;

  explicit DatastoreAdminTracingConnection(
      std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::datastore::admin::v1::ExportEntitiesResponse>>
  ExportEntities(google::datastore::admin::v1::ExportEntitiesRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> ExportEntities(
      ExperimentalTag, NoAwaitTag,
      google::datastore::admin::v1::ExportEntitiesRequest const& request)
      override;

  future<StatusOr<google::datastore::admin::v1::ExportEntitiesResponse>>
  ExportEntities(ExperimentalTag,
                 google::longrunning::Operation const& operation) override;

  future<StatusOr<google::datastore::admin::v1::ImportEntitiesMetadata>>
  ImportEntities(google::datastore::admin::v1::ImportEntitiesRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> ImportEntities(
      ExperimentalTag, NoAwaitTag,
      google::datastore::admin::v1::ImportEntitiesRequest const& request)
      override;

  future<StatusOr<google::datastore::admin::v1::ImportEntitiesMetadata>>
  ImportEntities(ExperimentalTag,
                 google::longrunning::Operation const& operation) override;

  future<StatusOr<google::datastore::admin::v1::Index>> CreateIndex(
      google::datastore::admin::v1::CreateIndexRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateIndex(
      ExperimentalTag, NoAwaitTag,
      google::datastore::admin::v1::CreateIndexRequest const& request) override;

  future<StatusOr<google::datastore::admin::v1::Index>> CreateIndex(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::datastore::admin::v1::Index>> DeleteIndex(
      google::datastore::admin::v1::DeleteIndexRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteIndex(
      ExperimentalTag, NoAwaitTag,
      google::datastore::admin::v1::DeleteIndexRequest const& request) override;

  future<StatusOr<google::datastore::admin::v1::Index>> DeleteIndex(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::datastore::admin::v1::Index> GetIndex(
      google::datastore::admin::v1::GetIndexRequest const& request) override;

  StreamRange<google::datastore::admin::v1::Index> ListIndexes(
      google::datastore::admin::v1::ListIndexesRequest request) override;

 private:
  std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection>
MakeDatastoreAdminTracingConnection(
    std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_ADMIN_V1_INTERNAL_DATASTORE_ADMIN_TRACING_CONNECTION_H
