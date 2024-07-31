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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/v2/product_connection.h"
#include "google/cloud/retail/v2/internal/product_connection_impl.h"
#include "google/cloud/retail/v2/internal/product_option_defaults.h"
#include "google/cloud/retail/v2/internal/product_stub_factory.h"
#include "google/cloud/retail/v2/internal/product_tracing_connection.h"
#include "google/cloud/retail/v2/product_options.h"
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
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductServiceConnection::~ProductServiceConnection() = default;

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnection::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnection::GetProduct(
    google::cloud::retail::v2::GetProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceConnection::ListProducts(
    google::cloud::retail::v2::
        ListProductsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::retail::v2::Product>>();
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnection::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductServiceConnection::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
ProductServiceConnection::PurgeProducts(
    google::cloud::retail::v2::PurgeProductsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::PurgeProducts(
    NoAwaitTag, google::cloud::retail::v2::PurgeProductsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
ProductServiceConnection::PurgeProducts(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceConnection::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::ImportProductsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::ImportProducts(
    NoAwaitTag, google::cloud::retail::v2::ImportProductsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceConnection::ImportProducts(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::ImportProductsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceConnection::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::SetInventoryResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ProductServiceConnection::SetInventory(
    NoAwaitTag, google::cloud::retail::v2::SetInventoryRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceConnection::SetInventory(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::SetInventoryResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceConnection::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::AddFulfillmentPlaces(
    NoAwaitTag, google::cloud::retail::v2::AddFulfillmentPlacesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceConnection::AddFulfillmentPlaces(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceConnection::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::RemoveFulfillmentPlaces(
    NoAwaitTag,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceConnection::RemoveFulfillmentPlaces(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceConnection::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::AddLocalInventories(
    NoAwaitTag, google::cloud::retail::v2::AddLocalInventoriesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceConnection::AddLocalInventories(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceConnection::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ProductServiceConnection::RemoveLocalInventories(
    NoAwaitTag,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceConnection::RemoveLocalInventories(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ProductServiceConnection> MakeProductServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ProductServicePolicyOptionList>(options,
                                                                 __func__);
  options =
      retail_v2_internal::ProductServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = retail_v2_internal::CreateDefaultProductServiceStub(
      std::move(auth), options);
  return retail_v2_internal::MakeProductServiceTracingConnection(
      std::make_shared<retail_v2_internal::ProductServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
