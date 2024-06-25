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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_models_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationModelsTracingConnection
    : public dialogflow_es::ConversationModelsConnection {
 public:
  ~ConversationModelsTracingConnection() override = default;

  explicit ConversationModelsTracingConnection(
      std::shared_ptr<dialogflow_es::ConversationModelsConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
  CreateConversationModel(
      google::cloud::dialogflow::v2::CreateConversationModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConversationModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::CreateConversationModelRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
  CreateConversationModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationModel>
  GetConversationModel(
      google::cloud::dialogflow::v2::GetConversationModelRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::ConversationModel>
  ListConversationModels(
      google::cloud::dialogflow::v2::ListConversationModelsRequest request)
      override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
  DeleteConversationModel(
      google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConversationModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
          request) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
  DeleteConversationModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
  DeployConversationModel(
      google::cloud::dialogflow::v2::DeployConversationModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeployConversationModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::DeployConversationModelRequest const&
          request) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
  DeployConversationModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      UndeployConversationModelOperationMetadata>>
  UndeployConversationModel(
      google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UndeployConversationModel(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      UndeployConversationModelOperationMetadata>>
  UndeployConversationModel(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
  GetConversationModelEvaluation(
      google::cloud::dialogflow::v2::
          GetConversationModelEvaluationRequest const& request) override;

  StreamRange<google::cloud::dialogflow::v2::ConversationModelEvaluation>
  ListConversationModelEvaluations(
      google::cloud::dialogflow::v2::ListConversationModelEvaluationsRequest
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
  CreateConversationModelEvaluation(
      google::cloud::dialogflow::v2::
          CreateConversationModelEvaluationRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateConversationModelEvaluation(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::v2::
          CreateConversationModelEvaluationRequest const& request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
  CreateConversationModelEvaluation(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<dialogflow_es::ConversationModelsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_es::ConversationModelsConnection>
MakeConversationModelsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationModelsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_TRACING_CONNECTION_H
