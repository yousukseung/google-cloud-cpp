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
// source: google/cloud/metastore/v1/metastore_federation.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_federation_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataprocMetastoreFederationTracingConnection::
    DataprocMetastoreFederationTracingConnection(
        std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection>
            child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationTracingConnection::ListFederations(
    google::cloud::metastore::v1::ListFederationsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::ListFederations");
  internal::OTelScope scope(span);
  auto sr = child_->ListFederations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::metastore::v1::Federation>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationTracingConnection::GetFederation(
    google::cloud::metastore::v1::GetFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::GetFederation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFederation(request));
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationTracingConnection::CreateFederation(
    google::cloud::metastore::v1::CreateFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::CreateFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFederation(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingConnection::CreateFederation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::metastore::v1::CreateFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::CreateFederation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->CreateFederation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationTracingConnection::CreateFederation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::CreateFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateFederation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationTracingConnection::UpdateFederation(
    google::cloud::metastore::v1::UpdateFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::UpdateFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateFederation(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingConnection::UpdateFederation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::metastore::v1::UpdateFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::UpdateFederation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->UpdateFederation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationTracingConnection::UpdateFederation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::UpdateFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->UpdateFederation(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationTracingConnection::DeleteFederation(
    google::cloud::metastore::v1::DeleteFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::DeleteFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFederation(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingConnection::DeleteFederation(
    ExperimentalTag, NoAwaitTag,
    google::cloud::metastore::v1::DeleteFederationRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::DeleteFederation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteFederation(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationTracingConnection::DeleteFederation(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreFederationConnection::DeleteFederation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteFederation(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection>
MakeDataprocMetastoreFederationTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DataprocMetastoreFederationTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
