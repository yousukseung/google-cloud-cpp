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
// source: google/cloud/speech/v1/cloud_speech.proto

#include "google/cloud/speech/v1/internal/speech_connection_impl.h"
#include "google/cloud/speech/v1/internal/speech_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<speech_v1::SpeechRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<speech_v1::SpeechRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<speech_v1::SpeechBackoffPolicyOption>()->clone();
}

std::unique_ptr<speech_v1::SpeechConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<speech_v1::SpeechConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<speech_v1::SpeechPollingPolicyOption>()->clone();
}

}  // namespace

SpeechConnectionImpl::SpeechConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<speech_v1_internal::SpeechStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SpeechConnection::options())) {}

StatusOr<google::cloud::speech::v1::RecognizeResponse>
SpeechConnectionImpl::Recognize(
    google::cloud::speech::v1::RecognizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Recognize(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::speech::v1::RecognizeRequest const& request) {
        return stub_->Recognize(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechConnectionImpl::LongRunningRecognize(
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->LongRunningRecognize(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v1::LongRunningRecognizeResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::speech::v1::LongRunningRecognizeRequest const&
              request) {
        return stub->AsyncLongRunningRecognize(cq, std::move(context),
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
          google::cloud::speech::v1::LongRunningRecognizeResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
SpeechConnectionImpl::LongRunningRecognize(
    ExperimentalTag, NoAwaitTag,
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->LongRunningRecognize(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::speech::v1::LongRunningRecognizeRequest const&
                 request) {
        return stub_->LongRunningRecognize(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
SpeechConnectionImpl::LongRunningRecognize(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::speech::v1::
                   LongRunningRecognizeMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to LongRunningRecognize",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::speech::v1::LongRunningRecognizeResponse>(
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
          google::cloud::speech::v1::LongRunningRecognizeResponse>,
      polling_policy(*current), __func__);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v1::StreamingRecognizeRequest,
    google::cloud::speech::v1::StreamingRecognizeResponse>>
SpeechConnectionImpl::AsyncStreamingRecognize() {
  return stub_->AsyncStreamingRecognize(background_->cq(),
                                        std::make_shared<grpc::ClientContext>(),
                                        internal::SaveCurrentOptions());
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google
