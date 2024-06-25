// Copyright 2024 Google LLC
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
// source: google/cloud/dataproc/v1/sessions.proto

#include "google/cloud/dataproc/v1/internal/session_controller_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionControllerTracingConnection::SessionControllerTracingConnection(
    std::shared_ptr<dataproc_v1::SessionControllerConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::CreateSession(
    google::cloud::dataproc::v1::CreateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::CreateSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSession(request));
}

StatusOr<google::longrunning::Operation>
SessionControllerTracingConnection::CreateSession(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::CreateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::CreateSession");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateSession(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::CreateSession(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::CreateSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateSession(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::dataproc::v1::Session>
SessionControllerTracingConnection::GetSession(
    google::cloud::dataproc::v1::GetSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::GetSession");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSession(request));
}

StreamRange<google::cloud::dataproc::v1::Session>
SessionControllerTracingConnection::ListSessions(
    google::cloud::dataproc::v1::ListSessionsRequest request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::ListSessions");
  internal::OTelScope scope(span);
  auto sr = child_->ListSessions(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::dataproc::v1::Session>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::TerminateSession(
    google::cloud::dataproc::v1::TerminateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::TerminateSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->TerminateSession(request));
}

StatusOr<google::longrunning::Operation>
SessionControllerTracingConnection::TerminateSession(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::TerminateSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::TerminateSession");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->TerminateSession(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::TerminateSession(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::TerminateSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->TerminateSession(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::DeleteSession(
    google::cloud::dataproc::v1::DeleteSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::DeleteSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSession(request));
}

StatusOr<google::longrunning::Operation>
SessionControllerTracingConnection::DeleteSession(
    ExperimentalTag, NoAwaitTag,
    google::cloud::dataproc::v1::DeleteSessionRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::DeleteSession");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteSession(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::Session>>
SessionControllerTracingConnection::DeleteSession(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::SessionControllerConnection::DeleteSession");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteSession(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dataproc_v1::SessionControllerConnection>
MakeSessionControllerTracingConnection(
    std::shared_ptr<dataproc_v1::SessionControllerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<SessionControllerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
