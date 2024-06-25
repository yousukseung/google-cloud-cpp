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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/v1/internal/cluster_controller_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ClusterControllerTracingConnection::ClusterControllerTracingConnection(
    std::shared_ptr<dataproc_v1::ClusterControllerConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::CreateCluster(
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::CreateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::CreateCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::CreateCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::CreateCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::CreateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateCluster(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::UpdateCluster(
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::UpdateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::UpdateCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::UpdateCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::UpdateCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::UpdateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateCluster(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::StopCluster(
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StopCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::StopCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StopCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StopCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::StopCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StopCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopCluster(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::StartCluster(
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StartCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::StartCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StartCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->StartCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerTracingConnection::StartCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::StartCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartCluster(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
ClusterControllerTracingConnection::DeleteCluster(
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DeleteCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::DeleteCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DeleteCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
ClusterControllerTracingConnection::DeleteCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DeleteCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteCluster(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::dataproc::v1::Cluster>
ClusterControllerTracingConnection::GetCluster(
    google::cloud::dataproc::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCluster(request));
}

StreamRange<google::cloud::dataproc::v1::Cluster>
ClusterControllerTracingConnection::ListClusters(
    google::cloud::dataproc::v1::ListClustersRequest request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::ListClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListClusters(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::dataproc::v1::Cluster>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
ClusterControllerTracingConnection::DiagnoseCluster(
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DiagnoseCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseCluster(request));
}

StatusOr<google::longrunning::Operation>
ClusterControllerTracingConnection::DiagnoseCluster(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DiagnoseCluster");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DiagnoseCluster(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
ClusterControllerTracingConnection::DiagnoseCluster(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::ClusterControllerConnection::DiagnoseCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DiagnoseCluster(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dataproc_v1::ClusterControllerConnection>
MakeClusterControllerTracingConnection(
    std::shared_ptr<dataproc_v1::ClusterControllerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ClusterControllerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
