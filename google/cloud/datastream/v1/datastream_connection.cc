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

#include "google/cloud/datastream/v1/datastream_connection.h"
#include "google/cloud/datastream/v1/datastream_options.h"
#include "google/cloud/datastream/v1/internal/datastream_connection_impl.h"
#include "google/cloud/datastream/v1/internal/datastream_option_defaults.h"
#include "google/cloud/datastream/v1/internal/datastream_stub_factory.h"
#include "google/cloud/datastream/v1/internal/datastream_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastream_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamConnection::~DatastreamConnection() = default;

StreamRange<google::cloud::datastream::v1::ConnectionProfile>
DatastreamConnection::ListConnectionProfiles(
    google::cloud::datastream::v1::
        ListConnectionProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datastream::v1::ConnectionProfile>>();
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamConnection::GetConnectionProfile(
    google::cloud::datastream::v1::GetConnectionProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnection::CreateConnectionProfile(
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DatastreamConnection::CreateConnectionProfile(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnection::CreateConnectionProfile(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnection::UpdateConnectionProfile(
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DatastreamConnection::UpdateConnectionProfile(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnection::UpdateConnectionProfile(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteConnectionProfile(
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DatastreamConnection::DeleteConnectionProfile(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteConnectionProfile(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamConnection::DiscoverConnectionProfile(
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datastream::v1::Stream>
DatastreamConnection::ListStreams(
    google::cloud::datastream::v1::
        ListStreamsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datastream::v1::Stream>>();
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamConnection::GetStream(
    google::cloud::datastream::v1::GetStreamRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnection::CreateStream(
    google::cloud::datastream::v1::CreateStreamRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Stream>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DatastreamConnection::CreateStream(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::CreateStreamRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnection::CreateStream(ExperimentalTag,
                                   google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Stream>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnection::UpdateStream(
    google::cloud::datastream::v1::UpdateStreamRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Stream>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DatastreamConnection::UpdateStream(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::UpdateStreamRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnection::UpdateStream(ExperimentalTag,
                                   google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Stream>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteStream(
    google::cloud::datastream::v1::DeleteStreamRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DatastreamConnection::DeleteStream(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::DeleteStreamRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteStream(ExperimentalTag,
                                   google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamConnection::GetStreamObject(
    google::cloud::datastream::v1::GetStreamObjectRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamConnection::LookupStreamObject(
    google::cloud::datastream::v1::LookupStreamObjectRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datastream::v1::StreamObject>
DatastreamConnection::ListStreamObjects(
    google::cloud::datastream::v1::
        ListStreamObjectsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datastream::v1::StreamObject>>();
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamConnection::StartBackfillJob(
    google::cloud::datastream::v1::StartBackfillJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamConnection::StopBackfillJob(
    google::cloud::datastream::v1::StopBackfillJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> DatastreamConnection::FetchStaticIps(
    google::cloud::datastream::v1::
        FetchStaticIpsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamConnection::CreatePrivateConnection(
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::PrivateConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DatastreamConnection::CreatePrivateConnection(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamConnection::CreatePrivateConnection(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::PrivateConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamConnection::GetPrivateConnection(
    google::cloud::datastream::v1::GetPrivateConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datastream::v1::PrivateConnection>
DatastreamConnection::ListPrivateConnections(
    google::cloud::datastream::v1::
        ListPrivateConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datastream::v1::PrivateConnection>>();
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeletePrivateConnection(
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
DatastreamConnection::DeletePrivateConnection(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeletePrivateConnection(
    ExperimentalTag, google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamConnection::CreateRoute(
    google::cloud::datastream::v1::CreateRouteRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Route>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DatastreamConnection::CreateRoute(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::CreateRouteRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamConnection::CreateRoute(ExperimentalTag,
                                  google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::Route>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamConnection::GetRoute(
    google::cloud::datastream::v1::GetRouteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datastream::v1::Route>
DatastreamConnection::ListRoutes(
    google::cloud::datastream::v1::
        ListRoutesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datastream::v1::Route>>();
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteRoute(
    google::cloud::datastream::v1::DeleteRouteRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DatastreamConnection::DeleteRoute(
    ExperimentalTag, NoAwaitTag,
    google::cloud::datastream::v1::DeleteRouteRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnection::DeleteRoute(ExperimentalTag,
                                  google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datastream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<DatastreamConnection> MakeDatastreamConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DatastreamPolicyOptionList>(options, __func__);
  options =
      datastream_v1_internal::DatastreamDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = datastream_v1_internal::CreateDefaultDatastreamStub(
      std::move(auth), options);
  return datastream_v1_internal::MakeDatastreamTracingConnection(
      std::make_shared<datastream_v1_internal::DatastreamConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1
}  // namespace cloud
}  // namespace google
