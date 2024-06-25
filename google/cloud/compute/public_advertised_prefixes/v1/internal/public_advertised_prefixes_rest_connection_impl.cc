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

#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_connection_impl.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation_custom.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_lro_helpers.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublicAdvertisedPrefixesRestConnectionImpl::
    PublicAdvertisedPrefixesRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_public_advertised_prefixes_v1_internal::
                            PublicAdvertisedPrefixesRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), PublicAdvertisedPrefixesConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::Announce(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        AnnounceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::public_advertised_prefixes::
                         v1::AnnounceRequest const& request) {
        return stub->AsyncAnnounce(cq, std::move(context), std::move(options),
                                   request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Announce(request), polling_policy(*current),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesRestConnectionImpl::Announce(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        AnnounceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Announce(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 AnnounceRequest const& request) {
        return stub_->Announce(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::Announce(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::DeletePublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        DeletePublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::public_advertised_prefixes::v1::
              DeletePublicAdvertisedPrefixRequest const& request) {
        return stub->AsyncDeletePublicAdvertisedPrefix(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeletePublicAdvertisedPrefix(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesRestConnectionImpl::DeletePublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        DeletePublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeletePublicAdvertisedPrefix(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 DeletePublicAdvertisedPrefixRequest const& request) {
        return stub_->DeletePublicAdvertisedPrefix(rest_context, options,
                                                   request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::DeletePublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      });
}

StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesRestConnectionImpl::GetPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        GetPublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPublicAdvertisedPrefix(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 GetPublicAdvertisedPrefixRequest const& request) {
        return stub_->GetPublicAdvertisedPrefix(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::InsertPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        InsertPublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::public_advertised_prefixes::v1::
              InsertPublicAdvertisedPrefixRequest const& request) {
        return stub->AsyncInsertPublicAdvertisedPrefix(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertPublicAdvertisedPrefix(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesRestConnectionImpl::InsertPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        InsertPublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertPublicAdvertisedPrefix(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 InsertPublicAdvertisedPrefixRequest const& request) {
        return stub_->InsertPublicAdvertisedPrefix(rest_context, options,
                                                   request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::InsertPublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      });
}

StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
PublicAdvertisedPrefixesRestConnectionImpl::ListPublicAdvertisedPrefixes(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        ListPublicAdvertisedPrefixesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListPublicAdvertisedPrefixes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_public_advertised_prefixes_v1::
                                   PublicAdvertisedPrefixesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::public_advertised_prefixes::v1::
              ListPublicAdvertisedPrefixesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::public_advertised_prefixes::v1::
                       ListPublicAdvertisedPrefixesRequest const& request) {
              return stub->ListPublicAdvertisedPrefixes(rest_context, options,
                                                        request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::PublicAdvertisedPrefixList r) {
        std::vector<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::PatchPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        PatchPublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::cpp::compute::public_advertised_prefixes::v1::
              PatchPublicAdvertisedPrefixRequest const& request) {
        return stub->AsyncPatchPublicAdvertisedPrefix(
            cq, std::move(context), std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchPublicAdvertisedPrefix(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesRestConnectionImpl::PatchPublicAdvertisedPrefix(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        PatchPublicAdvertisedPrefixRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchPublicAdvertisedPrefix(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 PatchPublicAdvertisedPrefixRequest const& request) {
        return stub_->PatchPublicAdvertisedPrefix(rest_context, options,
                                                  request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::PatchPublicAdvertisedPrefix(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::Withdraw(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        WithdrawRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::public_advertised_prefixes::
                         v1::WithdrawRequest const& request) {
        return stub->AsyncWithdraw(cq, std::move(context), std::move(options),
                                   request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Withdraw(request), polling_policy(*current),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
PublicAdvertisedPrefixesRestConnectionImpl::Withdraw(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        WithdrawRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Withdraw(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::public_advertised_prefixes::v1::
                 WithdrawRequest const& request) {
        return stub_->Withdraw(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicAdvertisedPrefixesRestConnectionImpl::Withdraw(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::global_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_operation(info.operation);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
