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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatastreamTracingConnection::DatastreamTracingConnection(
    std::shared_ptr<datastream_v1::DatastreamConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::datastream::v1::ConnectionProfile>
DatastreamTracingConnection::ListConnectionProfiles(
    google::cloud::datastream::v1::ListConnectionProfilesRequest request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::ListConnectionProfiles");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnectionProfiles(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datastream::v1::ConnectionProfile>(std::move(span),
                                                        std::move(sr));
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamTracingConnection::GetConnectionProfile(
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::GetConnectionProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnectionProfile(request));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamTracingConnection::CreateConnectionProfile(
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConnectionProfile(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::CreateConnectionProfile(
    NoAwaitTag,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreateConnectionProfile");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateConnectionProfile(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamTracingConnection::CreateConnectionProfile(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConnectionProfile(operation));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamTracingConnection::UpdateConnectionProfile(
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::UpdateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateConnectionProfile(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::UpdateConnectionProfile(
    NoAwaitTag,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::UpdateConnectionProfile");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UpdateConnectionProfile(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamTracingConnection::UpdateConnectionProfile(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::UpdateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateConnectionProfile(operation));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteConnectionProfile(
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeleteConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConnectionProfile(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::DeleteConnectionProfile(
    NoAwaitTag,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeleteConnectionProfile");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteConnectionProfile(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteConnectionProfile(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeleteConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConnectionProfile(operation));
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamTracingConnection::DiscoverConnectionProfile(
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DiscoverConnectionProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DiscoverConnectionProfile(request));
}

StreamRange<google::cloud::datastream::v1::Stream>
DatastreamTracingConnection::ListStreams(
    google::cloud::datastream::v1::ListStreamsRequest request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::ListStreams");
  internal::OTelScope scope(span);
  auto sr = child_->ListStreams(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datastream::v1::Stream>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::datastream::v1::Stream>
DatastreamTracingConnection::GetStream(
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::GetStream");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetStream(request));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamTracingConnection::CreateStream(
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateStream(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::CreateStream(
    NoAwaitTag,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateStream");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateStream(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamTracingConnection::CreateStream(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateStream(operation));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamTracingConnection::UpdateStream(
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::UpdateStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateStream(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::UpdateStream(
    NoAwaitTag,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::UpdateStream");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateStream(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamTracingConnection::UpdateStream(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::UpdateStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateStream(operation));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteStream(
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteStream(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::DeleteStream(
    NoAwaitTag,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteStream");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteStream(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteStream(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteStream");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteStream(operation));
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamTracingConnection::GetStreamObject(
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::GetStreamObject");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetStreamObject(request));
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamTracingConnection::LookupStreamObject(
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::LookupStreamObject");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->LookupStreamObject(request));
}

StreamRange<google::cloud::datastream::v1::StreamObject>
DatastreamTracingConnection::ListStreamObjects(
    google::cloud::datastream::v1::ListStreamObjectsRequest request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::ListStreamObjects");
  internal::OTelScope scope(span);
  auto sr = child_->ListStreamObjects(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datastream::v1::StreamObject>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamTracingConnection::StartBackfillJob(
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::StartBackfillJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StartBackfillJob(request));
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamTracingConnection::StopBackfillJob(
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::StopBackfillJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StopBackfillJob(request));
}

StreamRange<std::string> DatastreamTracingConnection::FetchStaticIps(
    google::cloud::datastream::v1::FetchStaticIpsRequest request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::FetchStaticIps");
  internal::OTelScope scope(span);
  auto sr = child_->FetchStaticIps(std::move(request));
  return internal::MakeTracedStreamRange<std::string>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamTracingConnection::CreatePrivateConnection(
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreatePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreatePrivateConnection(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::CreatePrivateConnection(
    NoAwaitTag,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreatePrivateConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreatePrivateConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamTracingConnection::CreatePrivateConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::CreatePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreatePrivateConnection(operation));
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamTracingConnection::GetPrivateConnection(
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::GetPrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPrivateConnection(request));
}

StreamRange<google::cloud::datastream::v1::PrivateConnection>
DatastreamTracingConnection::ListPrivateConnections(
    google::cloud::datastream::v1::ListPrivateConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::ListPrivateConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListPrivateConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datastream::v1::PrivateConnection>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeletePrivateConnection(
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeletePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePrivateConnection(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::DeletePrivateConnection(
    NoAwaitTag,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeletePrivateConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeletePrivateConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeletePrivateConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastream_v1::DatastreamConnection::DeletePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePrivateConnection(operation));
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamTracingConnection::CreateRoute(
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRoute(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::CreateRoute(
    NoAwaitTag,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateRoute");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateRoute(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamTracingConnection::CreateRoute(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::CreateRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRoute(operation));
}

StatusOr<google::cloud::datastream::v1::Route>
DatastreamTracingConnection::GetRoute(
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::GetRoute");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRoute(request));
}

StreamRange<google::cloud::datastream::v1::Route>
DatastreamTracingConnection::ListRoutes(
    google::cloud::datastream::v1::ListRoutesRequest request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::ListRoutes");
  internal::OTelScope scope(span);
  auto sr = child_->ListRoutes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datastream::v1::Route>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteRoute(
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRoute(request));
}

StatusOr<google::longrunning::Operation>
DatastreamTracingConnection::DeleteRoute(
    NoAwaitTag,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteRoute");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteRoute(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamTracingConnection::DeleteRoute(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("datastream_v1::DatastreamConnection::DeleteRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRoute(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datastream_v1::DatastreamConnection>
MakeDatastreamTracingConnection(
    std::shared_ptr<datastream_v1::DatastreamConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DatastreamTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
