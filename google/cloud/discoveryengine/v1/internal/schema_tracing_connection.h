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
// source: google/cloud/discoveryengine/v1/schema_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_TRACING_CONNECTION_H

#include "google/cloud/discoveryengine/v1/schema_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SchemaServiceTracingConnection
    : public discoveryengine_v1::SchemaServiceConnection {
 public:
  ~SchemaServiceTracingConnection() override = default;

  explicit SchemaServiceTracingConnection(
      std::shared_ptr<discoveryengine_v1::SchemaServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::discoveryengine::v1::Schema> GetSchema(
      google::cloud::discoveryengine::v1::GetSchemaRequest const& request)
      override;

  StreamRange<google::cloud::discoveryengine::v1::Schema> ListSchemas(
      google::cloud::discoveryengine::v1::ListSchemasRequest request) override;

  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> CreateSchema(
      google::cloud::discoveryengine::v1::CreateSchemaRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSchema(
      NoAwaitTag,
      google::cloud::discoveryengine::v1::CreateSchemaRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> CreateSchema(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> UpdateSchema(
      google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSchema(
      NoAwaitTag,
      google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> UpdateSchema(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::discoveryengine::v1::DeleteSchemaMetadata>>
  DeleteSchema(google::cloud::discoveryengine::v1::DeleteSchemaRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteSchema(
      NoAwaitTag,
      google::cloud::discoveryengine::v1::DeleteSchemaRequest const& request)
      override;

  future<StatusOr<google::cloud::discoveryengine::v1::DeleteSchemaMetadata>>
  DeleteSchema(google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<discoveryengine_v1::SchemaServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<discoveryengine_v1::SchemaServiceConnection>
MakeSchemaServiceTracingConnection(
    std::shared_ptr<discoveryengine_v1::SchemaServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_TRACING_CONNECTION_H
