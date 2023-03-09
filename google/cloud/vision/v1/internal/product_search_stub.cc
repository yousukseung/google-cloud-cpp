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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchStub::~ProductSearchStub() = default;

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::CreateProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status =
      grpc_stub_->CreateProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ListProductSetsResponse>
DefaultProductSearchStub::ListProductSets(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::ListProductSetsRequest const& request) {
  google::cloud::vision::v1::ListProductSetsResponse response;
  auto status =
      grpc_stub_->ListProductSets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::GetProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status = grpc_stub_->GetProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::UpdateProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status =
      grpc_stub_->UpdateProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::CreateProduct(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::CreateProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->CreateProduct(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ListProductsResponse>
DefaultProductSearchStub::ListProducts(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::ListProductsRequest const& request) {
  google::cloud::vision::v1::ListProductsResponse response;
  auto status = grpc_stub_->ListProducts(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::GetProduct(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::GetProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->GetProduct(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::UpdateProduct(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->UpdateProduct(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteProduct(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteProduct(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
DefaultProductSearchStub::CreateReferenceImage(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  google::cloud::vision::v1::ReferenceImage response;
  auto status =
      grpc_stub_->CreateReferenceImage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteReferenceImage(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteReferenceImage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
DefaultProductSearchStub::ListReferenceImages(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::ListReferenceImagesRequest const& request) {
  google::cloud::vision::v1::ListReferenceImagesResponse response;
  auto status =
      grpc_stub_->ListReferenceImages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
DefaultProductSearchStub::GetReferenceImage(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  google::cloud::vision::v1::ReferenceImage response;
  auto status =
      grpc_stub_->GetReferenceImage(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::AddProductToProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->AddProductToProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultProductSearchStub::RemoveProductFromProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->RemoveProductFromProductSet(&client_context,
                                                        request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
DefaultProductSearchStub::ListProductsInProductSet(
    grpc::ClientContext& client_context,
    google::cloud::vision::v1::ListProductsInProductSetRequest const& request) {
  google::cloud::vision::v1::ListProductsInProductSetResponse response;
  auto status =
      grpc_stub_->ListProductsInProductSet(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncImportProductSets(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::ImportProductSetsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::ImportProductSetsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportProductSets(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::PurgeProductsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::PurgeProductsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPurgeProducts(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultProductSearchStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
