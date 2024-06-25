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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_MOCKS_MOCK_VIDEO_STITCHER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_MOCKS_MOCK_VIDEO_STITCHER_CONNECTION_H

#include "google/cloud/video/stitcher/v1/video_stitcher_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace video_stitcher_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VideoStitcherServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VideoStitcherServiceClient`. To do
 * so, construct an object of type `VideoStitcherServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVideoStitcherServiceConnection
    : public video_stitcher_v1::VideoStitcherServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>,
      CreateCdnKey,
      (google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCdnKey,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>,
              CreateCdnKey,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::video::stitcher::v1::CdnKey>),
              ListCdnKeys,
              (google::cloud::video::stitcher::v1::ListCdnKeysRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::CdnKey>, GetCdnKey,
      (google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteCdnKey,
      (google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCdnKey,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteCdnKey,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>,
      UpdateCdnKey,
      (google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCdnKey,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>,
              UpdateCdnKey,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::VodSession>,
      CreateVodSession,
      (google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::VodSession>, GetVodSession,
      (google::cloud::video::stitcher::v1::GetVodSessionRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>),
      ListVodStitchDetails,
      (google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>,
      GetVodStitchDetail,
      (google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>),
      ListVodAdTagDetails,
      (google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>,
      GetVodAdTagDetail,
      (google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>),
      ListLiveAdTagDetails,
      (google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>,
      GetLiveAdTagDetail,
      (google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::Slate>>, CreateSlate,
      (google::cloud::video::stitcher::v1::CreateSlateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateSlate,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::CreateSlateRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::Slate>>,
              CreateSlate,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::video::stitcher::v1::Slate>),
              ListSlates,
              (google::cloud::video::stitcher::v1::ListSlatesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::Slate>, GetSlate,
      (google::cloud::video::stitcher::v1::GetSlateRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::Slate>>, UpdateSlate,
      (google::cloud::video::stitcher::v1::UpdateSlateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateSlate,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::UpdateSlateRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::Slate>>,
              UpdateSlate,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteSlate,
      (google::cloud::video::stitcher::v1::DeleteSlateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteSlate,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::DeleteSlateRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteSlate,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::LiveSession>,
      CreateLiveSession,
      (google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::video::stitcher::v1::LiveSession>,
              GetLiveSession,
              (google::cloud::video::stitcher::v1::GetLiveSessionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>,
      CreateLiveConfig,
      (google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateLiveConfig,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>,
              CreateLiveConfig,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::stitcher::v1::LiveConfig>),
      ListLiveConfigs,
      (google::cloud::video::stitcher::v1::ListLiveConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::LiveConfig>, GetLiveConfig,
      (google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteLiveConfig,
      (google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteLiveConfig,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteLiveConfig,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>,
      UpdateLiveConfig,
      (google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateLiveConfig,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>,
              UpdateLiveConfig,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>,
              CreateVodConfig,
              (google::cloud::video::stitcher::v1::CreateVodConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateVodConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::video::stitcher::v1::CreateVodConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>,
              CreateVodConfig,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::stitcher::v1::VodConfig>),
      ListVodConfigs,
      (google::cloud::video::stitcher::v1::ListVodConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::stitcher::v1::VodConfig>, GetVodConfig,
      (google::cloud::video::stitcher::v1::GetVodConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteVodConfig,
      (google::cloud::video::stitcher::v1::DeleteVodConfigRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteVodConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::video::stitcher::v1::DeleteVodConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>,
      DeleteVodConfig,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>,
              UpdateVodConfig,
              (google::cloud::video::stitcher::v1::UpdateVodConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateVodConfig,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::video::stitcher::v1::UpdateVodConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>,
              UpdateVodConfig,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_MOCKS_MOCK_VIDEO_STITCHER_CONNECTION_H
