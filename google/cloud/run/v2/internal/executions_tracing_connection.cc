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
// source: google/cloud/run/v2/execution.proto

#include "google/cloud/run/v2/internal/executions_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExecutionsTracingConnection::ExecutionsTracingConnection(
    std::shared_ptr<run_v2::ExecutionsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::run::v2::Execution>
ExecutionsTracingConnection::GetExecution(
    google::cloud::run::v2::GetExecutionRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ExecutionsConnection::GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetExecution(request));
}

StreamRange<google::cloud::run::v2::Execution>
ExecutionsTracingConnection::ListExecutions(
    google::cloud::run::v2::ListExecutionsRequest request) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::ListExecutions");
  internal::OTelScope scope(span);
  auto sr = child_->ListExecutions(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::run::v2::Execution>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::run::v2::Execution>>
ExecutionsTracingConnection::DeleteExecution(
    google::cloud::run::v2::DeleteExecutionRequest const& request) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::DeleteExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteExecution(request));
}

StatusOr<google::longrunning::Operation>
ExecutionsTracingConnection::DeleteExecution(
    NoAwaitTag, google::cloud::run::v2::DeleteExecutionRequest const& request) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::DeleteExecution");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteExecution(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Execution>>
ExecutionsTracingConnection::DeleteExecution(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::DeleteExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteExecution(operation));
}

future<StatusOr<google::cloud::run::v2::Execution>>
ExecutionsTracingConnection::CancelExecution(
    google::cloud::run::v2::CancelExecutionRequest const& request) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::CancelExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CancelExecution(request));
}

StatusOr<google::longrunning::Operation>
ExecutionsTracingConnection::CancelExecution(
    NoAwaitTag, google::cloud::run::v2::CancelExecutionRequest const& request) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::CancelExecution");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CancelExecution(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Execution>>
ExecutionsTracingConnection::CancelExecution(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("run_v2::ExecutionsConnection::CancelExecution");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CancelExecution(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<run_v2::ExecutionsConnection> MakeExecutionsTracingConnection(
    std::shared_ptr<run_v2::ExecutionsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ExecutionsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
