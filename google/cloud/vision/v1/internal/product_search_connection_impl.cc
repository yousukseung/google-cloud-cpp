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

#include "google/cloud/vision/v1/internal/product_search_connection_impl.h"
#include "google/cloud/vision/v1/internal/product_search_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<vision_v1::ProductSearchRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<vision_v1::ProductSearchRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<vision_v1::ProductSearchBackoffPolicyOption>()->clone();
}

std::unique_ptr<vision_v1::ProductSearchConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<vision_v1::ProductSearchConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<vision_v1::ProductSearchPollingPolicyOption>()->clone();
}

}  // namespace

ProductSearchConnectionImpl::ProductSearchConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<vision_v1_internal::ProductSearchStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ProductSearchConnection::options())) {}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnectionImpl::CreateProductSet(
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateProductSet(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::CreateProductSetRequest const& request) {
        return stub_->CreateProductSet(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::vision::v1::ProductSet>
ProductSearchConnectionImpl::ListProductSets(
    google::cloud::vision::v1::ListProductSetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListProductSets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::ProductSet>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<vision_v1::ProductSearchRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::vision::v1::ListProductSetsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::vision::v1::ListProductSetsRequest const&
                       request) {
              return stub->ListProductSets(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::vision::v1::ListProductSetsResponse r) {
        std::vector<google::cloud::vision::v1::ProductSet> result(
            r.product_sets().size());
        auto& messages = *r.mutable_product_sets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnectionImpl::GetProductSet(
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetProductSet(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::GetProductSetRequest const& request) {
        return stub_->GetProductSet(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnectionImpl::UpdateProductSet(
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateProductSet(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::UpdateProductSetRequest const& request) {
        return stub_->UpdateProductSet(context, options, request);
      },
      *current, request, __func__);
}

Status ProductSearchConnectionImpl::DeleteProductSet(
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteProductSet(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::DeleteProductSetRequest const& request) {
        return stub_->DeleteProductSet(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnectionImpl::CreateProduct(
    google::cloud::vision::v1::CreateProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::CreateProductRequest const& request) {
        return stub_->CreateProduct(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchConnectionImpl::ListProducts(
    google::cloud::vision::v1::ListProductsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListProducts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::Product>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<vision_v1::ProductSearchRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::vision::v1::ListProductsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::vision::v1::ListProductsRequest const& request) {
              return stub->ListProducts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::vision::v1::ListProductsResponse r) {
        std::vector<google::cloud::vision::v1::Product> result(
            r.products().size());
        auto& messages = *r.mutable_products();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnectionImpl::GetProduct(
    google::cloud::vision::v1::GetProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::GetProductRequest const& request) {
        return stub_->GetProduct(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnectionImpl::UpdateProduct(
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::UpdateProductRequest const& request) {
        return stub_->UpdateProduct(context, options, request);
      },
      *current, request, __func__);
}

Status ProductSearchConnectionImpl::DeleteProduct(
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::DeleteProductRequest const& request) {
        return stub_->DeleteProduct(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnectionImpl::CreateReferenceImage(
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateReferenceImage(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::CreateReferenceImageRequest const&
                 request) {
        return stub_->CreateReferenceImage(context, options, request);
      },
      *current, request, __func__);
}

Status ProductSearchConnectionImpl::DeleteReferenceImage(
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteReferenceImage(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::DeleteReferenceImageRequest const&
                 request) {
        return stub_->DeleteReferenceImage(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnectionImpl::ListReferenceImages(
    google::cloud::vision::v1::ListReferenceImagesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListReferenceImages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::ReferenceImage>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<vision_v1::ProductSearchRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::vision::v1::ListReferenceImagesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::vision::v1::ListReferenceImagesRequest const&
                       request) {
              return stub->ListReferenceImages(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::vision::v1::ListReferenceImagesResponse r) {
        std::vector<google::cloud::vision::v1::ReferenceImage> result(
            r.reference_images().size());
        auto& messages = *r.mutable_reference_images();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnectionImpl::GetReferenceImage(
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetReferenceImage(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::GetReferenceImageRequest const& request) {
        return stub_->GetReferenceImage(context, options, request);
      },
      *current, request, __func__);
}

Status ProductSearchConnectionImpl::AddProductToProductSet(
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddProductToProductSet(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::AddProductToProductSetRequest const&
                 request) {
        return stub_->AddProductToProductSet(context, options, request);
      },
      *current, request, __func__);
}

Status ProductSearchConnectionImpl::RemoveProductFromProductSet(
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RemoveProductFromProductSet(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
              request) {
        return stub_->RemoveProductFromProductSet(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchConnectionImpl::ListProductsInProductSet(
    google::cloud::vision::v1::ListProductsInProductSetRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListProductsInProductSet(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::Product>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<vision_v1::ProductSearchRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::vision::v1::ListProductsInProductSetRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::vision::v1::
                       ListProductsInProductSetRequest const& request) {
              return stub->ListProductsInProductSet(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::vision::v1::ListProductsInProductSetResponse r) {
        std::vector<google::cloud::vision::v1::Product> result(
            r.products().size());
        auto& messages = *r.mutable_products();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
ProductSearchConnectionImpl::ImportProductSets(
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportProductSets(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vision::v1::ImportProductSetsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::vision::v1::ImportProductSetsRequest const& request) {
        return stub->AsyncImportProductSets(cq, std::move(context),
                                            std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::vision::v1::ImportProductSetsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ProductSearchConnectionImpl::ImportProductSets(
    NoAwaitTag,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportProductSets(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::vision::v1::ImportProductSetsRequest const& request) {
        return stub_->ImportProductSets(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
ProductSearchConnectionImpl::ImportProductSets(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::vision::v1::BatchOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportProductSets",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::vision::v1::ImportProductSetsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::vision::v1::ImportProductSetsResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
ProductSearchConnectionImpl::PurgeProducts(
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeProducts(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vision::v1::BatchOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::vision::v1::PurgeProductsRequest const& request) {
        return stub->AsyncPurgeProducts(cq, std::move(context),
                                        std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::vision::v1::BatchOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ProductSearchConnectionImpl::PurgeProducts(
    NoAwaitTag,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PurgeProducts(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::vision::v1::PurgeProductsRequest const& request) {
        return stub_->PurgeProducts(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
ProductSearchConnectionImpl::PurgeProducts(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::vision::v1::BatchOperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PurgeProducts",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::vision::v1::BatchOperationMetadata>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::vision::v1::BatchOperationMetadata>,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
