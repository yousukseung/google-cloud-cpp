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
// source:
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_H

#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `PublicAdvertisedPrefixesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `PublicAdvertisedPrefixesClient`. To
 * do so, construct an object of type `PublicAdvertisedPrefixesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockPublicAdvertisedPrefixesConnection
    : public compute_public_advertised_prefixes_v1::
          PublicAdvertisedPrefixesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Announce)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Announce(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Announce,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   AnnounceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Announce,
              (NoAwaitTag,
               google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   AnnounceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Announce,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeletePublicAdvertisedPrefix)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeletePublicAdvertisedPrefix(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePublicAdvertisedPrefix,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   DeletePublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeletePublicAdvertisedPrefix,
              (NoAwaitTag,
               google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   DeletePublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePublicAdvertisedPrefix,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>,
              GetPublicAdvertisedPrefix,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   GetPublicAdvertisedPrefixRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertPublicAdvertisedPrefix)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertPublicAdvertisedPrefix(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertPublicAdvertisedPrefix,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   InsertPublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertPublicAdvertisedPrefix,
              (NoAwaitTag,
               google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   InsertPublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertPublicAdvertisedPrefix,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>),
      ListPublicAdvertisedPrefixes,
      (google::cloud::cpp::compute::public_advertised_prefixes::v1::
           ListPublicAdvertisedPrefixesRequest request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PatchPublicAdvertisedPrefix)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PatchPublicAdvertisedPrefix(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPublicAdvertisedPrefix,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   PatchPublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchPublicAdvertisedPrefix,
              (NoAwaitTag,
               google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   PatchPublicAdvertisedPrefixRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPublicAdvertisedPrefix,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, Withdraw)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, Withdraw(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Withdraw,
              (google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   WithdrawRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, Withdraw,
              (NoAwaitTag,
               google::cloud::cpp::compute::public_advertised_prefixes::v1::
                   WithdrawRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Withdraw,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_H
