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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_MOCKS_MOCK_EVENTARC_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_MOCKS_MOCK_EVENTARC_CONNECTION_H

#include "google/cloud/eventarc/v1/eventarc_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace eventarc_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `EventarcConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `EventarcClient`. To do so,
 * construct an object of type `EventarcClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockEventarcConnection : public eventarc_v1::EventarcConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::eventarc::v1::Trigger>, GetTrigger,
              (google::cloud::eventarc::v1::GetTriggerRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::eventarc::v1::Trigger>), ListTriggers,
              (google::cloud::eventarc::v1::ListTriggersRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Trigger>>, CreateTrigger,
      (google::cloud::eventarc::v1::CreateTriggerRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateTrigger,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::CreateTriggerRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Trigger>>,
              CreateTrigger,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Trigger>>, UpdateTrigger,
      (google::cloud::eventarc::v1::UpdateTriggerRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateTrigger,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::UpdateTriggerRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Trigger>>,
              UpdateTrigger,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Trigger>>, DeleteTrigger,
      (google::cloud::eventarc::v1::DeleteTriggerRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteTrigger,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::DeleteTriggerRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Trigger>>,
              DeleteTrigger,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::eventarc::v1::Channel>, GetChannel,
              (google::cloud::eventarc::v1::GetChannelRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::eventarc::v1::Channel>), ListChannels,
              (google::cloud::eventarc::v1::ListChannelsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Channel>>, CreateChannel,
      (google::cloud::eventarc::v1::CreateChannelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateChannel,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::CreateChannelRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Channel>>,
              CreateChannel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Channel>>, UpdateChannel,
      (google::cloud::eventarc::v1::UpdateChannelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateChannel,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::UpdateChannelRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Channel>>,
              UpdateChannel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::Channel>>, DeleteChannel,
      (google::cloud::eventarc::v1::DeleteChannelRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteChannel,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::DeleteChannelRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::Channel>>,
              DeleteChannel,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::eventarc::v1::Provider>, GetProvider,
              (google::cloud::eventarc::v1::GetProviderRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::eventarc::v1::Provider>),
              ListProviders,
              (google::cloud::eventarc::v1::ListProvidersRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::eventarc::v1::ChannelConnection>,
      GetChannelConnection,
      (google::cloud::eventarc::v1::GetChannelConnectionRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::eventarc::v1::ChannelConnection>),
      ListChannelConnections,
      (google::cloud::eventarc::v1::ListChannelConnectionsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>,
      CreateChannelConnection,
      (google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateChannelConnection,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>,
              CreateChannelConnection,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>,
      DeleteChannelConnection,
      (google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteChannelConnection,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::eventarc::v1::ChannelConnection>>,
              DeleteChannelConnection,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>,
              GetGoogleChannelConfig,
              (google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>,
      UpdateGoogleChannelConfig,
      (google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_MOCKS_MOCK_EVENTARC_CONNECTION_H
