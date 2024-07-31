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
// source: google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_MOCKS_MOCK_TARGET_SSL_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_MOCKS_MOCK_TARGET_SSL_PROXIES_CONNECTION_H

#include "google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_target_ssl_proxies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TargetSslProxiesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TargetSslProxiesClient`. To do so,
 * construct an object of type `TargetSslProxiesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTargetSslProxiesConnection
    : public compute_target_ssl_proxies_v1::TargetSslProxiesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, DeleteTargetSslProxy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, DeleteTargetSslProxy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetSslProxy,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   DeleteTargetSslProxyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteTargetSslProxy,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               DeleteTargetSslProxyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetSslProxy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::TargetSslProxy>,
              GetTargetSslProxy,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   GetTargetSslProxyRequest const& request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, InsertTargetSslProxy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, InsertTargetSslProxy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetSslProxy,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   InsertTargetSslProxyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertTargetSslProxy,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               InsertTargetSslProxyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetSslProxy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::TargetSslProxy>),
              ListTargetSslProxies,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   ListTargetSslProxiesRequest request),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetBackendService)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetBackendService(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetBackendService,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   SetBackendServiceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetBackendService,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               SetBackendServiceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetBackendService,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetCertificateMap)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetCertificateMap(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCertificateMap,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   SetCertificateMapRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetCertificateMap,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               SetCertificateMapRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCertificateMap,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetProxyHeader)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetProxyHeader(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetProxyHeader,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   SetProxyHeaderRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetProxyHeader,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               SetProxyHeaderRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetProxyHeader,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetSslCertificates)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetSslCertificates(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslCertificates,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   SetSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetSslCertificates,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               SetSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslCertificates,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, SetSslPolicy)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, SetSslPolicy(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslPolicy,
              (google::cloud::cpp::compute::target_ssl_proxies::v1::
                   SetSslPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              SetSslPolicy,
              (NoAwaitTag, google::cloud::cpp::compute::target_ssl_proxies::v1::
                               SetSslPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_ssl_proxies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_MOCKS_MOCK_TARGET_SSL_PROXIES_CONNECTION_H
