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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_MOCKS_MOCK_METRICS_SCOPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_MOCKS_MOCK_METRICS_SCOPES_CONNECTION_H

#include "google/cloud/monitoring/metricsscope/v1/metrics_scopes_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `MetricsScopesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `MetricsScopesClient`. To do so,
 * construct an object of type `MetricsScopesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockMetricsScopesConnection
    : public monitoring_metricsscope_v1::MetricsScopesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::metricsscope::v1::MetricsScope>,
      GetMetricsScope,
      (google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::monitoring::metricsscope::v1::
                           ListMetricsScopesByMonitoredProjectResponse>,
              ListMetricsScopesByMonitoredProject,
              (google::monitoring::metricsscope::v1::
                   ListMetricsScopesByMonitoredProjectRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>,
      CreateMonitoredProject,
      (google::monitoring::metricsscope::v1::
           CreateMonitoredProjectRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateMonitoredProject,
              (ExperimentalTag, NoAwaitTag,
               google::monitoring::metricsscope::v1::
                   CreateMonitoredProjectRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>,
      CreateMonitoredProject,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>,
      DeleteMonitoredProject,
      (google::monitoring::metricsscope::v1::
           DeleteMonitoredProjectRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteMonitoredProject,
              (ExperimentalTag, NoAwaitTag,
               google::monitoring::metricsscope::v1::
                   DeleteMonitoredProjectRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>,
      DeleteMonitoredProject,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_MOCKS_MOCK_METRICS_SCOPES_CONNECTION_H
