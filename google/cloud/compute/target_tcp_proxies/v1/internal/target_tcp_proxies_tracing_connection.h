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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_TRACING_CONNECTION_H

#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TargetTcpProxiesTracingConnection
    : public compute_target_tcp_proxies_v1::TargetTcpProxiesConnection {
 public:
  ~TargetTcpProxiesTracingConnection() override = default;

  explicit TargetTcpProxiesTracingConnection(
      std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::TargetTcpProxiesScopedList>>
  AggregatedListTargetTcpProxies(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          AggregatedListTargetTcpProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxy(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           DeleteTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteTargetTcpProxy(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      DeleteTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy> GetTargetTcpProxy(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          GetTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxy(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           InsertTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertTargetTcpProxy(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      InsertTargetTcpProxyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
  ListTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           ListTargetTcpProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(google::cloud::cpp::compute::target_tcp_proxies::v1::
                        SetBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetBackendService(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      SetBackendServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          SetProxyHeaderRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetProxyHeader(
      NoAwaitTag, google::cloud::cpp::compute::target_tcp_proxies::v1::
                      SetProxyHeaderRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
MakeTargetTcpProxiesTracingConnection(
    std::shared_ptr<compute_target_tcp_proxies_v1::TargetTcpProxiesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_INTERNAL_TARGET_TCP_PROXIES_TRACING_CONNECTION_H
