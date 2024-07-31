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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_datasets_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationDatasetsTracingConnection
    : public dialogflow_es::ConversationDatasetsConnection {
 public:
  ~ConversationDatasetsTracingConnection() override = default;

  explicit ConversationDatasetsTracingConnection(
      std::shared_ptr<dialogflow_es::ConversationDatasetsConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConversationDataset(
      NoAwaitTag,
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(
      google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
  ListConversationDatasets(
      google::cloud::dialogflow::v2::ListConversationDatasetsRequest request)
      override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConversationDataset(
      NoAwaitTag,
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
  ImportConversationData(
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ImportConversationData(
      NoAwaitTag,
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
  ImportConversationData(
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<dialogflow_es::ConversationDatasetsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_es::ConversationDatasetsConnection>
MakeConversationDatasetsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationDatasetsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_TRACING_CONNECTION_H
