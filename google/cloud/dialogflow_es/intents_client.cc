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
// source: google/cloud/dialogflow/v2/intent.proto

#include "google/cloud/dialogflow_es/intents_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IntentsClient::IntentsClient(std::shared_ptr<IntentsConnection> connection,
                             Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
IntentsClient::~IntentsClient() = default;

StreamRange<google::cloud::dialogflow::v2::Intent> IntentsClient::ListIntents(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::ListIntentsRequest request;
  request.set_parent(parent);
  return connection_->ListIntents(request);
}

StreamRange<google::cloud::dialogflow::v2::Intent> IntentsClient::ListIntents(
    std::string const& parent, std::string const& language_code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::ListIntentsRequest request;
  request.set_parent(parent);
  request.set_language_code(language_code);
  return connection_->ListIntents(request);
}

StreamRange<google::cloud::dialogflow::v2::Intent> IntentsClient::ListIntents(
    google::cloud::dialogflow::v2::ListIntentsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListIntents(std::move(request));
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::GetIntent(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetIntentRequest request;
  request.set_name(name);
  return connection_->GetIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::GetIntent(
    std::string const& name, std::string const& language_code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetIntentRequest request;
  request.set_name(name);
  request.set_language_code(language_code);
  return connection_->GetIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::GetIntent(
    google::cloud::dialogflow::v2::GetIntentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::CreateIntent(
    std::string const& parent,
    google::cloud::dialogflow::v2::Intent const& intent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::CreateIntentRequest request;
  request.set_parent(parent);
  *request.mutable_intent() = intent;
  return connection_->CreateIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::CreateIntent(
    std::string const& parent,
    google::cloud::dialogflow::v2::Intent const& intent,
    std::string const& language_code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::CreateIntentRequest request;
  request.set_parent(parent);
  *request.mutable_intent() = intent;
  request.set_language_code(language_code);
  return connection_->CreateIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::CreateIntent(
    google::cloud::dialogflow::v2::CreateIntentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::UpdateIntent(
    google::cloud::dialogflow::v2::Intent const& intent,
    std::string const& language_code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::UpdateIntentRequest request;
  *request.mutable_intent() = intent;
  request.set_language_code(language_code);
  return connection_->UpdateIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::UpdateIntent(
    google::cloud::dialogflow::v2::Intent const& intent,
    std::string const& language_code,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::UpdateIntentRequest request;
  *request.mutable_intent() = intent;
  request.set_language_code(language_code);
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateIntent(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent> IntentsClient::UpdateIntent(
    google::cloud::dialogflow::v2::UpdateIntentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateIntent(request);
}

Status IntentsClient::DeleteIntent(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::DeleteIntentRequest request;
  request.set_name(name);
  return connection_->DeleteIntent(request);
}

Status IntentsClient::DeleteIntent(
    google::cloud::dialogflow::v2::DeleteIntentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteIntent(request);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateIntentsResponse>>
IntentsClient::BatchUpdateIntents(std::string const& parent,
                                  std::string const& intent_batch_uri,
                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchUpdateIntentsRequest request;
  request.set_parent(parent);
  request.set_intent_batch_uri(intent_batch_uri);
  return connection_->BatchUpdateIntents(request);
}

StatusOr<google::longrunning::Operation> IntentsClient::BatchUpdateIntents(
    NoAwaitTag, std::string const& parent, std::string const& intent_batch_uri,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchUpdateIntentsRequest request;
  request.set_parent(parent);
  request.set_intent_batch_uri(intent_batch_uri);
  return connection_->BatchUpdateIntents(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateIntentsResponse>>
IntentsClient::BatchUpdateIntents(
    std::string const& parent,
    google::cloud::dialogflow::v2::IntentBatch const& intent_batch_inline,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchUpdateIntentsRequest request;
  request.set_parent(parent);
  *request.mutable_intent_batch_inline() = intent_batch_inline;
  return connection_->BatchUpdateIntents(request);
}

StatusOr<google::longrunning::Operation> IntentsClient::BatchUpdateIntents(
    NoAwaitTag, std::string const& parent,
    google::cloud::dialogflow::v2::IntentBatch const& intent_batch_inline,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchUpdateIntentsRequest request;
  request.set_parent(parent);
  *request.mutable_intent_batch_inline() = intent_batch_inline;
  return connection_->BatchUpdateIntents(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateIntentsResponse>>
IntentsClient::BatchUpdateIntents(
    google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateIntents(request);
}

StatusOr<google::longrunning::Operation> IntentsClient::BatchUpdateIntents(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateIntents(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateIntentsResponse>>
IntentsClient::BatchUpdateIntents(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchUpdateIntents(operation);
}

future<StatusOr<google::protobuf::Struct>> IntentsClient::BatchDeleteIntents(
    std::string const& parent,
    std::vector<google::cloud::dialogflow::v2::Intent> const& intents,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchDeleteIntentsRequest request;
  request.set_parent(parent);
  *request.mutable_intents() = {intents.begin(), intents.end()};
  return connection_->BatchDeleteIntents(request);
}

StatusOr<google::longrunning::Operation> IntentsClient::BatchDeleteIntents(
    NoAwaitTag, std::string const& parent,
    std::vector<google::cloud::dialogflow::v2::Intent> const& intents,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::BatchDeleteIntentsRequest request;
  request.set_parent(parent);
  *request.mutable_intents() = {intents.begin(), intents.end()};
  return connection_->BatchDeleteIntents(NoAwaitTag{}, request);
}

future<StatusOr<google::protobuf::Struct>> IntentsClient::BatchDeleteIntents(
    google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteIntents(request);
}

StatusOr<google::longrunning::Operation> IntentsClient::BatchDeleteIntents(
    NoAwaitTag,
    google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteIntents(NoAwaitTag{}, request);
}

future<StatusOr<google::protobuf::Struct>> IntentsClient::BatchDeleteIntents(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteIntents(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
