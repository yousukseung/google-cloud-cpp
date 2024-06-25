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
// source: google/cloud/retail/v2/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_COMPLETION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_COMPLETION_TRACING_CONNECTION_H

#include "google/cloud/retail/v2/completion_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CompletionServiceTracingConnection
    : public retail_v2::CompletionServiceConnection {
 public:
  ~CompletionServiceTracingConnection() override = default;

  explicit CompletionServiceTracingConnection(
      std::shared_ptr<retail_v2::CompletionServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::retail::v2::CompleteQueryResponse> CompleteQuery(
      google::cloud::retail::v2::CompleteQueryRequest const& request) override;

  future<StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
  ImportCompletionData(
      google::cloud::retail::v2::ImportCompletionDataRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportCompletionData(
      ExperimentalTag, NoAwaitTag,
      google::cloud::retail::v2::ImportCompletionDataRequest const& request)
      override;

  future<StatusOr<google::cloud::retail::v2::ImportCompletionDataResponse>>
  ImportCompletionData(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<retail_v2::CompletionServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<retail_v2::CompletionServiceConnection>
MakeCompletionServiceTracingConnection(
    std::shared_ptr<retail_v2::CompletionServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_COMPLETION_TRACING_CONNECTION_H
