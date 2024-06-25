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
// source: google/cloud/networksecurity/v1/network_security.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_MOCKS_MOCK_NETWORK_SECURITY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_MOCKS_MOCK_NETWORK_SECURITY_CONNECTION_H

#include "google/cloud/networksecurity/v1/network_security_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace networksecurity_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworkSecurityConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworkSecurityClient`. To do so,
 * construct an object of type `NetworkSecurityClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworkSecurityConnection
    : public networksecurity_v1::NetworkSecurityConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>),
      ListAuthorizationPolicies,
      (google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>,
      GetAuthorizationPolicy,
      (google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>,
      CreateAuthorizationPolicy,
      (google::cloud::networksecurity::v1::
           CreateAuthorizationPolicyRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              CreateAuthorizationPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networksecurity::v1::
                   CreateAuthorizationPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>,
      CreateAuthorizationPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>,
      UpdateAuthorizationPolicy,
      (google::cloud::networksecurity::v1::
           UpdateAuthorizationPolicyRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              UpdateAuthorizationPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networksecurity::v1::
                   UpdateAuthorizationPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>,
      UpdateAuthorizationPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteAuthorizationPolicy,
      (google::cloud::networksecurity::v1::
           DeleteAuthorizationPolicyRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteAuthorizationPolicy,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networksecurity::v1::
                   DeleteAuthorizationPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteAuthorizationPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>),
      ListServerTlsPolicies,
      (google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>,
      GetServerTlsPolicy,
      (google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>,
      CreateServerTlsPolicy,
      (google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateServerTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>,
      CreateServerTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>,
      UpdateServerTlsPolicy,
      (google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateServerTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>,
      UpdateServerTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteServerTlsPolicy,
      (google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteServerTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteServerTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>),
      ListClientTlsPolicies,
      (google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>,
      GetClientTlsPolicy,
      (google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>,
      CreateClientTlsPolicy,
      (google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateClientTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>,
      CreateClientTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>,
      UpdateClientTlsPolicy,
      (google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateClientTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>,
      UpdateClientTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteClientTlsPolicy,
      (google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteClientTlsPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>,
      DeleteClientTlsPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_MOCKS_MOCK_NETWORK_SECURITY_CONNECTION_H
