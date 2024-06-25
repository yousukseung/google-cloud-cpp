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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/intents_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IntentsTracingConnection : public dialogflow_cx::IntentsConnection {
 public:
  ~IntentsTracingConnection() override = default;

  explicit IntentsTracingConnection(
      std::shared_ptr<dialogflow_cx::IntentsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::cx::v3::Intent> ListIntents(
      google::cloud::dialogflow::cx::v3::ListIntentsRequest request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> GetIntent(
      google::cloud::dialogflow::cx::v3::GetIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> CreateIntent(
      google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> UpdateIntent(
      google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request)
      override;

  Status DeleteIntent(
      google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>
  ImportIntents(google::cloud::dialogflow::cx::v3::ImportIntentsRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> ImportIntents(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>
  ImportIntents(ExperimentalTag,
                google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>
  ExportIntents(google::cloud::dialogflow::cx::v3::ExportIntentsRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> ExportIntents(
      ExperimentalTag, NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>
  ExportIntents(ExperimentalTag,
                google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<dialogflow_cx::IntentsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_cx::IntentsConnection> MakeIntentsTracingConnection(
    std::shared_ptr<dialogflow_cx::IntentsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_TRACING_CONNECTION_H
