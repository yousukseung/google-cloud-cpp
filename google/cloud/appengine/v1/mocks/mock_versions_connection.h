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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_VERSIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_VERSIONS_CONNECTION_H

#include "google/cloud/appengine/v1/versions_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace appengine_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VersionsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VersionsClient`. To do so,
 * construct an object of type `VersionsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVersionsConnection : public appengine_v1::VersionsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::appengine::v1::Version>), ListVersions,
              (google::appengine::v1::ListVersionsRequest request), (override));

  MOCK_METHOD(StatusOr<google::appengine::v1::Version>, GetVersion,
              (google::appengine::v1::GetVersionRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, CreateVersion)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, CreateVersion(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::appengine::v1::Version>>, CreateVersion,
              (google::appengine::v1::CreateVersionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateVersion,
              (NoAwaitTag,
               google::appengine::v1::CreateVersionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Version>>, CreateVersion,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, UpdateVersion)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, UpdateVersion(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::appengine::v1::Version>>, UpdateVersion,
              (google::appengine::v1::UpdateVersionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateVersion,
              (NoAwaitTag,
               google::appengine::v1::UpdateVersionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Version>>, UpdateVersion,
              (google::longrunning::Operation const& operation), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteVersion)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteVersion(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::appengine::v1::OperationMetadataV1>>,
              DeleteVersion,
              (google::appengine::v1::DeleteVersionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteVersion,
              (NoAwaitTag,
               google::appengine::v1::DeleteVersionRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::OperationMetadataV1>>,
              DeleteVersion, (google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_MOCKS_MOCK_VERSIONS_CONNECTION_H
