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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/internal/conversation_models_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationModelsTracingConnection::ConversationModelsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationModelsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
ConversationModelsTracingConnection::CreateConversationModel(
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::CreateConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversationModel(request));
}

StatusOr<google::longrunning::Operation>
ConversationModelsTracingConnection::CreateConversationModel(
    NoAwaitTag,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::CreateConversationModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateConversationModel(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
ConversationModelsTracingConnection::CreateConversationModel(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::CreateConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversationModel(operation));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsTracingConnection::GetConversationModel(
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::GetConversationModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConversationModel(request));
}

StreamRange<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsTracingConnection::ListConversationModels(
    google::cloud::dialogflow::v2::ListConversationModelsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::ListConversationModels");
  internal::OTelScope scope(span);
  auto sr = child_->ListConversationModels(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::ConversationModel>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
ConversationModelsTracingConnection::DeleteConversationModel(
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeleteConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConversationModel(request));
}

StatusOr<google::longrunning::Operation>
ConversationModelsTracingConnection::DeleteConversationModel(
    NoAwaitTag,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeleteConversationModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteConversationModel(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
ConversationModelsTracingConnection::DeleteConversationModel(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeleteConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConversationModel(operation));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
ConversationModelsTracingConnection::DeployConversationModel(
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeployConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeployConversationModel(request));
}

StatusOr<google::longrunning::Operation>
ConversationModelsTracingConnection::DeployConversationModel(
    NoAwaitTag,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeployConversationModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeployConversationModel(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
ConversationModelsTracingConnection::DeployConversationModel(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::DeployConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeployConversationModel(operation));
}

future<StatusOr<
    google::cloud::dialogflow::v2::UndeployConversationModelOperationMetadata>>
ConversationModelsTracingConnection::UndeployConversationModel(
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::UndeployConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeployConversationModel(request));
}

StatusOr<google::longrunning::Operation>
ConversationModelsTracingConnection::UndeployConversationModel(
    NoAwaitTag,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::UndeployConversationModel");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UndeployConversationModel(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::dialogflow::v2::UndeployConversationModelOperationMetadata>>
ConversationModelsTracingConnection::UndeployConversationModel(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::UndeployConversationModel");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeployConversationModel(operation));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsTracingConnection::GetConversationModelEvaluation(
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::"
      "GetConversationModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetConversationModelEvaluation(request));
}

StreamRange<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsTracingConnection::ListConversationModelEvaluations(
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsRequest
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::"
      "ListConversationModelEvaluations");
  internal::OTelScope scope(span);
  auto sr = child_->ListConversationModelEvaluations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::ConversationModelEvaluation>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
ConversationModelsTracingConnection::CreateConversationModelEvaluation(
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::"
      "CreateConversationModelEvaluation");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversationModelEvaluation(request));
}

StatusOr<google::longrunning::Operation>
ConversationModelsTracingConnection::CreateConversationModelEvaluation(
    NoAwaitTag, google::cloud::dialogflow::v2::
                    CreateConversationModelEvaluationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::"
      "CreateConversationModelEvaluation");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateConversationModelEvaluation(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
ConversationModelsTracingConnection::CreateConversationModelEvaluation(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationModelsConnection::"
      "CreateConversationModelEvaluation");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateConversationModelEvaluation(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::ConversationModelsConnection>
MakeConversationModelsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationModelsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ConversationModelsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
