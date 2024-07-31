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
// source: google/cloud/channel/v1/reports_service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_reports_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudChannelReportsServiceTracingConnection::
    CloudChannelReportsServiceTracingConnection(
        std::shared_ptr<channel_v1::CloudChannelReportsServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceTracingConnection::RunReportJob(
    google::cloud::channel::v1::RunReportJobRequest const& request) {
  auto span = internal::MakeSpan(
      "channel_v1::CloudChannelReportsServiceConnection::RunReportJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RunReportJob(request));
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceTracingConnection::RunReportJob(
    NoAwaitTag,
    google::cloud::channel::v1::RunReportJobRequest const& request) {
  auto span = internal::MakeSpan(
      "channel_v1::CloudChannelReportsServiceConnection::RunReportJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->RunReportJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceTracingConnection::RunReportJob(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "channel_v1::CloudChannelReportsServiceConnection::RunReportJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RunReportJob(operation));
}

StreamRange<google::cloud::channel::v1::Row>
CloudChannelReportsServiceTracingConnection::FetchReportResults(
    google::cloud::channel::v1::FetchReportResultsRequest request) {
  auto span = internal::MakeSpan(
      "channel_v1::CloudChannelReportsServiceConnection::FetchReportResults");
  internal::OTelScope scope(span);
  auto sr = child_->FetchReportResults(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::channel::v1::Row>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::channel::v1::Report>
CloudChannelReportsServiceTracingConnection::ListReports(
    google::cloud::channel::v1::ListReportsRequest request) {
  auto span = internal::MakeSpan(
      "channel_v1::CloudChannelReportsServiceConnection::ListReports");
  internal::OTelScope scope(span);
  auto sr = child_->ListReports(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::channel::v1::Report>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<channel_v1::CloudChannelReportsServiceConnection>
MakeCloudChannelReportsServiceTracingConnection(
    std::shared_ptr<channel_v1::CloudChannelReportsServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudChannelReportsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
