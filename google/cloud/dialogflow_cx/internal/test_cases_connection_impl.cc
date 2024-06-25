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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/internal/test_cases_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/test_cases_option_defaults.h"
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
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::TestCasesRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::TestCasesRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::TestCasesBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::TestCasesConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_cx::TestCasesConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dialogflow_cx::TestCasesPollingPolicyOption>()->clone();
}

}  // namespace

TestCasesConnectionImpl::TestCasesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::TestCasesStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TestCasesConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesConnectionImpl::ListTestCases(
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTestCases(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::TestCase>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::TestCasesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::cx::v3::ListTestCasesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::dialogflow::cx::v3::ListTestCasesRequest const&
                    request) {
              return stub->ListTestCases(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListTestCasesResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::TestCase> result(
            r.test_cases().size());
        auto& messages = *r.mutable_test_cases();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status TestCasesConnectionImpl::BatchDeleteTestCases(
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchDeleteTestCases(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
              request) {
        return stub_->BatchDeleteTestCases(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesConnectionImpl::GetTestCase(
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTestCase(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::GetTestCaseRequest const&
                 request) {
        return stub_->GetTestCase(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesConnectionImpl::CreateTestCase(
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTestCase(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const&
                 request) {
        return stub_->CreateTestCase(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesConnectionImpl::UpdateTestCase(
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTestCase(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const&
                 request) {
        return stub_->UpdateTestCase(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
TestCasesConnectionImpl::RunTestCase(
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RunTestCase(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::RunTestCaseResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::RunTestCaseRequest const&
              request) {
        return stub->AsyncRunTestCase(cq, std::move(context),
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
          google::cloud::dialogflow::cx::v3::RunTestCaseResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> TestCasesConnectionImpl::RunTestCase(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RunTestCase(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::RunTestCaseRequest const&
                 request) {
        return stub_->RunTestCase(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
TestCasesConnectionImpl::RunTestCase(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   RunTestCaseMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to RunTestCase",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::RunTestCaseResponse>(
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
          google::cloud::dialogflow::cx::v3::RunTestCaseResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
TestCasesConnectionImpl::BatchRunTestCases(
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchRunTestCases(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
              request) {
        return stub->AsyncBatchRunTestCases(cq, std::move(context),
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
          google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
TestCasesConnectionImpl::BatchRunTestCases(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchRunTestCases(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
                 request) {
        return stub_->BatchRunTestCases(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
TestCasesConnectionImpl::BatchRunTestCases(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   BatchRunTestCasesMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to BatchRunTestCases",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>(
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
          google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesConnectionImpl::CalculateCoverage(
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CalculateCoverage(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
                 request) {
        return stub_->CalculateCoverage(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
TestCasesConnectionImpl::ImportTestCases(
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportTestCases(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const&
              request) {
        return stub->AsyncImportTestCases(cq, std::move(context),
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
          google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
TestCasesConnectionImpl::ImportTestCases(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportTestCases(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const&
                 request) {
        return stub_->ImportTestCases(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
TestCasesConnectionImpl::ImportTestCases(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   ImportTestCasesMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportTestCases",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>(
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
          google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
TestCasesConnectionImpl::ExportTestCases(
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ExportTestCases(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const&
              request) {
        return stub->AsyncExportTestCases(cq, std::move(context),
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
          google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
TestCasesConnectionImpl::ExportTestCases(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportTestCases(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const&
                 request) {
        return stub_->ExportTestCases(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
TestCasesConnectionImpl::ExportTestCases(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   ExportTestCasesMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ExportTestCases",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>(
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
          google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesConnectionImpl::ListTestCaseResults(
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTestCaseResults(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::TestCasesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::cx::v3::
                       ListTestCaseResultsRequest const& request) {
              return stub->ListTestCaseResults(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::TestCaseResult> result(
            r.test_case_results().size());
        auto& messages = *r.mutable_test_case_results();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesConnectionImpl::GetTestCaseResult(
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTestCaseResult(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
                 request) {
        return stub_->GetTestCaseResult(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
