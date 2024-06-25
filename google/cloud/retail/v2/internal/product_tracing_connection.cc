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

#include "google/cloud/retail/v2/internal/product_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProductServiceTracingConnection::ProductServiceTracingConnection(
    std::shared_ptr<retail_v2::ProductServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::CreateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateProduct(request));
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::GetProduct(
    google::cloud::retail::v2::GetProductRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::GetProduct");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProduct(request));
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::ListProducts(
    google::cloud::retail::v2::ListProductsRequest request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::ListProducts");
  internal::OTelScope scope(span);
  auto sr = child_->ListProducts(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::retail::v2::Product>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingConnection::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::UpdateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateProduct(request));
}

Status ProductServiceTracingConnection::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::DeleteProduct");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteProduct(request));
}

future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
ProductServiceTracingConnection::PurgeProducts(
    google::cloud::retail::v2::PurgeProductsRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::PurgeProducts");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PurgeProducts(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::PurgeProducts(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::PurgeProductsRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::PurgeProducts");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->PurgeProducts(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
ProductServiceTracingConnection::PurgeProducts(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::PurgeProducts");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PurgeProducts(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceTracingConnection::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::ImportProducts");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportProducts(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::ImportProducts(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::ImportProducts");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ImportProducts(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceTracingConnection::ImportProducts(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::ImportProducts");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->ImportProducts(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceTracingConnection::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::SetInventory");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetInventory(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::SetInventory(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::SetInventory");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SetInventory(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceTracingConnection::SetInventory(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("retail_v2::ProductServiceConnection::SetInventory");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInventory(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceTracingConnection::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddFulfillmentPlaces");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddFulfillmentPlaces(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::AddFulfillmentPlaces(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddFulfillmentPlaces");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->AddFulfillmentPlaces(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceTracingConnection::AddFulfillmentPlaces(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddFulfillmentPlaces");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddFulfillmentPlaces(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceTracingConnection::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveFulfillmentPlaces");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveFulfillmentPlaces(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::RemoveFulfillmentPlaces(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveFulfillmentPlaces");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->RemoveFulfillmentPlaces(ExperimentalTag{}, NoAwaitTag{},
                                             request));
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceTracingConnection::RemoveFulfillmentPlaces(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveFulfillmentPlaces");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveFulfillmentPlaces(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceTracingConnection::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddLocalInventories");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddLocalInventories(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::AddLocalInventories(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddLocalInventories");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->AddLocalInventories(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceTracingConnection::AddLocalInventories(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::AddLocalInventories");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddLocalInventories(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceTracingConnection::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveLocalInventories");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveLocalInventories(request));
}

StatusOr<google::longrunning::Operation>
ProductServiceTracingConnection::RemoveLocalInventories(
    ExperimentalTag, NoAwaitTag,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveLocalInventories");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RemoveLocalInventories(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceTracingConnection::RemoveLocalInventories(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "retail_v2::ProductServiceConnection::RemoveLocalInventories");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveLocalInventories(
                                                ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<retail_v2::ProductServiceConnection>
MakeProductServiceTracingConnection(
    std::shared_ptr<retail_v2::ProductServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ProductServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
