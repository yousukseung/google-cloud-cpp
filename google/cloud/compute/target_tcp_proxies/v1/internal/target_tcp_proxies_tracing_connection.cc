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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetTcpProxiesTracingConnection::TargetTcpProxiesTracingConnection(
    std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>
TargetTcpProxiesTracingConnection::AggregatedListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        AggregatedListTargetTcpProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "AggregatedListTargetTcpProxies");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListTargetTcpProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::DeleteTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "DeleteTargetTcpProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetTcpProxy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesTracingConnection::DeleteTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "DeleteTargetTcpProxy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->DeleteTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::DeleteTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "DeleteTargetTcpProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTargetTcpProxy(
                                                ExperimentalTag{}, operation));
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesTracingConnection::GetTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "GetTargetTcpProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetTcpProxy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::InsertTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "InsertTargetTcpProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetTcpProxy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesTracingConnection::InsertTargetTcpProxy(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "InsertTargetTcpProxy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->InsertTargetTcpProxy(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::InsertTargetTcpProxy(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "InsertTargetTcpProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertTargetTcpProxy(
                                                ExperimentalTag{}, operation));
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesTracingConnection::ListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        ListTargetTcpProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "ListTargetTcpProxies");
  internal::OTelScope scope(span);
  auto sr = child_->ListTargetTcpProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetTcpProxy>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::SetBackendService(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetBackendService");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetBackendService(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesTracingConnection::SetBackendService(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetBackendService");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->SetBackendService(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::SetBackendService(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetBackendService");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->SetBackendService(ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::SetProxyHeader(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetProxyHeader");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->SetProxyHeader(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetTcpProxiesTracingConnection::SetProxyHeader(
    ExperimentalTag, NoAwaitTag,
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetProxyHeader");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SetProxyHeader(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesTracingConnection::SetProxyHeader(
    ExperimentalTag,
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_target_tcp_proxies_v1::TargetTcpProxiesConnection::"
      "SetProxyHeader");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->SetProxyHeader(ExperimentalTag{}, operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
MakeTargetTcpProxiesTracingConnection(
    std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TargetTcpProxiesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google
