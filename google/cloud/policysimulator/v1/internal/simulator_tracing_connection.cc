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
// source: google/cloud/policysimulator/v1/simulator.proto

#include "google/cloud/policysimulator/v1/internal/simulator_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace policysimulator_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SimulatorTracingConnection::SimulatorTracingConnection(
    std::shared_ptr<policysimulator_v1::SimulatorConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::policysimulator::v1::Replay>
SimulatorTracingConnection::GetReplay(
    google::cloud::policysimulator::v1::GetReplayRequest const& request) {
  auto span =
      internal::MakeSpan("policysimulator_v1::SimulatorConnection::GetReplay");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReplay(request));
}

future<StatusOr<google::cloud::policysimulator::v1::Replay>>
SimulatorTracingConnection::CreateReplay(
    google::cloud::policysimulator::v1::CreateReplayRequest const& request) {
  auto span = internal::MakeSpan(
      "policysimulator_v1::SimulatorConnection::CreateReplay");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateReplay(request));
}

StatusOr<google::longrunning::Operation>
SimulatorTracingConnection::CreateReplay(
    NoAwaitTag,
    google::cloud::policysimulator::v1::CreateReplayRequest const& request) {
  auto span = internal::MakeSpan(
      "policysimulator_v1::SimulatorConnection::CreateReplay");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateReplay(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::policysimulator::v1::Replay>>
SimulatorTracingConnection::CreateReplay(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "policysimulator_v1::SimulatorConnection::CreateReplay");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateReplay(operation));
}

StreamRange<google::cloud::policysimulator::v1::ReplayResult>
SimulatorTracingConnection::ListReplayResults(
    google::cloud::policysimulator::v1::ListReplayResultsRequest request) {
  auto span = internal::MakeSpan(
      "policysimulator_v1::SimulatorConnection::ListReplayResults");
  internal::OTelScope scope(span);
  auto sr = child_->ListReplayResults(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::policysimulator::v1::ReplayResult>(std::move(span),
                                                        std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<policysimulator_v1::SimulatorConnection>
MakeSimulatorTracingConnection(
    std::shared_ptr<policysimulator_v1::SimulatorConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SimulatorTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policysimulator_v1_internal
}  // namespace cloud
}  // namespace google
