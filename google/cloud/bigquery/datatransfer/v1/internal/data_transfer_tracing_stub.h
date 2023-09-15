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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_INTERNAL_DATA_TRANSFER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_INTERNAL_DATA_TRANSFER_TRACING_STUB_H

#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataTransferServiceTracingStub : public DataTransferServiceStub {
 public:
  ~DataTransferServiceTracingStub() override = default;

  explicit DataTransferServiceTracingStub(
      std::shared_ptr<DataTransferServiceStub> child);

  StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource> GetDataSource(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::ListDataSourcesResponse>
  ListDataSources(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  CreateTransferConfig(grpc::ClientContext& context,
                       google::cloud::bigquery::datatransfer::v1::
                           CreateTransferConfigRequest const& request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  UpdateTransferConfig(grpc::ClientContext& context,
                       google::cloud::bigquery::datatransfer::v1::
                           UpdateTransferConfigRequest const& request) override;

  Status DeleteTransferConfig(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::
          DeleteTransferConfigRequest const& request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  GetTransferConfig(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::datatransfer::v1::ListTransferConfigsResponse>
  ListTransferConfigs(grpc::ClientContext& context,
                      google::cloud::bigquery::datatransfer::v1::
                          ListTransferConfigsRequest const& request) override;

  StatusOr<
      google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
  ScheduleTransferRuns(grpc::ClientContext& context,
                       google::cloud::bigquery::datatransfer::v1::
                           ScheduleTransferRunsRequest const& request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::
               StartManualTransferRunsResponse>
  StartManualTransferRuns(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::
          StartManualTransferRunsRequest const& request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
  GetTransferRun(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
          request) override;

  Status DeleteTransferRun(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferRunsResponse>
  ListTransferRuns(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferLogsResponse>
  ListTransferLogs(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
  CheckValidCreds(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
          request) override;

  Status EnrollDataSources(
      grpc::ClientContext& context,
      google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
          request) override;

 private:
  std::shared_ptr<DataTransferServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<DataTransferServiceStub> MakeDataTransferServiceTracingStub(
    std::shared_ptr<DataTransferServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_INTERNAL_DATA_TRANSFER_TRACING_STUB_H
