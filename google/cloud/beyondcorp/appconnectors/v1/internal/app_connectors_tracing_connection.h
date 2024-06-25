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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H

#include "google/cloud/beyondcorp/appconnectors/v1/app_connectors_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AppConnectorsServiceTracingConnection
    : public beyondcorp_appconnectors_v1::AppConnectorsServiceConnection {
 public:
  ~AppConnectorsServiceTracingConnection() override = default;

  explicit AppConnectorsServiceTracingConnection(
      std::shared_ptr<
          beyondcorp_appconnectors_v1::AppConnectorsServiceConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  ListAppConnectors(
      google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
          request) override;

  StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  GetAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                      GetAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         CreateAppConnectorRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateAppConnector(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnectors::v1::
          CreateAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         UpdateAppConnectorRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateAppConnector(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnectors::v1::
          UpdateAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                      AppConnectorOperationMetadata>>
  DeleteAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         DeleteAppConnectorRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteAppConnector(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnectors::v1::
          DeleteAppConnectorRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                      AppConnectorOperationMetadata>>
  DeleteAppConnector(ExperimentalTag,
                     google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ReportStatus(
      ExperimentalTag, NoAwaitTag,
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
          request) override;

  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(ExperimentalTag,
               google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<beyondcorp_appconnectors_v1::AppConnectorsServiceConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<beyondcorp_appconnectors_v1::AppConnectorsServiceConnection>
MakeAppConnectorsServiceTracingConnection(
    std::shared_ptr<beyondcorp_appconnectors_v1::AppConnectorsServiceConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_INTERNAL_APP_CONNECTORS_TRACING_CONNECTION_H
