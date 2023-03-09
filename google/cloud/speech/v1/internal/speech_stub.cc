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

#include "google/cloud/speech/v1/internal/speech_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/speech/v1/cloud_speech.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechStub::~SpeechStub() = default;

StatusOr<google::cloud::speech::v1::RecognizeResponse>
DefaultSpeechStub::Recognize(
    grpc::ClientContext& client_context,
    google::cloud::speech::v1::RecognizeRequest const& request) {
  google::cloud::speech::v1::RecognizeResponse response;
  auto status = grpc_stub_->Recognize(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncLongRunningRecognize(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v1::LongRunningRecognizeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::speech::v1::LongRunningRecognizeRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::speech::v1::LongRunningRecognizeRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncLongRunningRecognize(context, request, cq);
      },
      request, std::move(context));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v1::StreamingRecognizeRequest,
    google::cloud::speech::v1::StreamingRecognizeResponse>>
DefaultSpeechStub::AsyncStreamingRecognize(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::speech::v1::StreamingRecognizeRequest,
      google::cloud::speech::v1::StreamingRecognizeResponse>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingRecognize(context, cq);
      });
}

future<StatusOr<google::longrunning::Operation>>
DefaultSpeechStub::AsyncGetOperation(
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

future<Status> DefaultSpeechStub::AsyncCancelOperation(
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
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google
