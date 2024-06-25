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
// source: google/cloud/networkservices/v1/network_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_MOCKS_MOCK_NETWORK_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_MOCKS_MOCK_NETWORK_SERVICES_CONNECTION_H

#include "google/cloud/networkservices/v1/network_services_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace networkservices_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworkServicesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworkServicesClient`. To do so,
 * construct an object of type `NetworkServicesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworkServicesConnection
    : public networkservices_v1::NetworkServicesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::EndpointPolicy>),
      ListEndpointPolicies,
      (google::cloud::networkservices::v1::ListEndpointPoliciesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::EndpointPolicy>,
      GetEndpointPolicy,
      (google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>,
      CreateEndpointPolicy,
      (google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateEndpointPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>,
      CreateEndpointPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>,
      UpdateEndpointPolicy,
      (google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateEndpointPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>,
      UpdateEndpointPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteEndpointPolicy,
      (google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteEndpointPolicy,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteEndpointPolicy,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::networkservices::v1::Gateway>),
              ListGateways,
              (google::cloud::networkservices::v1::ListGatewaysRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::Gateway>, GetGateway,
      (google::cloud::networkservices::v1::GetGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::Gateway>>,
      CreateGateway,
      (google::cloud::networkservices::v1::CreateGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateGateway,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::CreateGatewayRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::Gateway>>,
              CreateGateway,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::Gateway>>,
      UpdateGateway,
      (google::cloud::networkservices::v1::UpdateGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateGateway,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::UpdateGatewayRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::Gateway>>,
              UpdateGateway,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteGateway,
      (google::cloud::networkservices::v1::DeleteGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteGateway,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::DeleteGatewayRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteGateway,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::GrpcRoute>),
      ListGrpcRoutes,
      (google::cloud::networkservices::v1::ListGrpcRoutesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::GrpcRoute>, GetGrpcRoute,
      (google::cloud::networkservices::v1::GetGrpcRouteRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>,
              CreateGrpcRoute,
              (google::cloud::networkservices::v1::CreateGrpcRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateGrpcRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::CreateGrpcRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>,
              CreateGrpcRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>,
              UpdateGrpcRoute,
              (google::cloud::networkservices::v1::UpdateGrpcRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateGrpcRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::UpdateGrpcRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>,
              UpdateGrpcRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteGrpcRoute,
      (google::cloud::networkservices::v1::DeleteGrpcRouteRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteGrpcRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::DeleteGrpcRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteGrpcRoute,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::HttpRoute>),
      ListHttpRoutes,
      (google::cloud::networkservices::v1::ListHttpRoutesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::HttpRoute>, GetHttpRoute,
      (google::cloud::networkservices::v1::GetHttpRouteRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>,
              CreateHttpRoute,
              (google::cloud::networkservices::v1::CreateHttpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateHttpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::CreateHttpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>,
              CreateHttpRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>,
              UpdateHttpRoute,
              (google::cloud::networkservices::v1::UpdateHttpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateHttpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::UpdateHttpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>,
              UpdateHttpRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteHttpRoute,
      (google::cloud::networkservices::v1::DeleteHttpRouteRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteHttpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::DeleteHttpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteHttpRoute,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::TcpRoute>),
      ListTcpRoutes,
      (google::cloud::networkservices::v1::ListTcpRoutesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::TcpRoute>, GetTcpRoute,
      (google::cloud::networkservices::v1::GetTcpRouteRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TcpRoute>>,
              CreateTcpRoute,
              (google::cloud::networkservices::v1::CreateTcpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateTcpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::CreateTcpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TcpRoute>>,
              CreateTcpRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TcpRoute>>,
              UpdateTcpRoute,
              (google::cloud::networkservices::v1::UpdateTcpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateTcpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::UpdateTcpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TcpRoute>>,
              UpdateTcpRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteTcpRoute,
      (google::cloud::networkservices::v1::DeleteTcpRouteRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteTcpRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::DeleteTcpRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteTcpRoute,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::TlsRoute>),
      ListTlsRoutes,
      (google::cloud::networkservices::v1::ListTlsRoutesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::TlsRoute>, GetTlsRoute,
      (google::cloud::networkservices::v1::GetTlsRouteRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TlsRoute>>,
              CreateTlsRoute,
              (google::cloud::networkservices::v1::CreateTlsRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateTlsRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::CreateTlsRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TlsRoute>>,
              CreateTlsRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TlsRoute>>,
              UpdateTlsRoute,
              (google::cloud::networkservices::v1::UpdateTlsRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateTlsRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::UpdateTlsRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::TlsRoute>>,
              UpdateTlsRoute,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteTlsRoute,
      (google::cloud::networkservices::v1::DeleteTlsRouteRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteTlsRoute,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::networkservices::v1::DeleteTlsRouteRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteTlsRoute,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::networkservices::v1::ServiceBinding>),
      ListServiceBindings,
      (google::cloud::networkservices::v1::ListServiceBindingsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::ServiceBinding>,
      GetServiceBinding,
      (google::cloud::networkservices::v1::GetServiceBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::ServiceBinding>>,
      CreateServiceBinding,
      (google::cloud::networkservices::v1::CreateServiceBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateServiceBinding,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::CreateServiceBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::ServiceBinding>>,
      CreateServiceBinding,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteServiceBinding,
      (google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteServiceBinding,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteServiceBinding,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::networkservices::v1::Mesh>),
              ListMeshes,
              (google::cloud::networkservices::v1::ListMeshesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::networkservices::v1::Mesh>, GetMesh,
      (google::cloud::networkservices::v1::GetMeshRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::Mesh>>, CreateMesh,
      (google::cloud::networkservices::v1::CreateMeshRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateMesh,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::CreateMeshRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::Mesh>>,
              CreateMesh,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::Mesh>>, UpdateMesh,
      (google::cloud::networkservices::v1::UpdateMeshRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateMesh,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::UpdateMeshRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::networkservices::v1::Mesh>>,
              UpdateMesh,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteMesh,
      (google::cloud::networkservices::v1::DeleteMeshRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteMesh,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::networkservices::v1::DeleteMeshRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>,
      DeleteMesh,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_MOCKS_MOCK_NETWORK_SERVICES_CONNECTION_H
