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
// source: google/cloud/dataplex/v1/datascans.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_SCAN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_SCAN_CONNECTION_H

#include "google/cloud/dataplex/v1/data_scan_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataScanServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataScanServiceClient`. To do so,
 * construct an object of type `DataScanServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDataScanServiceConnection
    : public dataplex_v1::DataScanServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataScan>>, CreateDataScan,
      (google::cloud::dataplex::v1::CreateDataScanRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateDataScan,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::CreateDataScanRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::DataScan>>,
              CreateDataScan,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataScan>>, UpdateDataScan,
      (google::cloud::dataplex::v1::UpdateDataScanRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateDataScan,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::UpdateDataScanRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::DataScan>>,
              UpdateDataScan,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteDataScan,
      (google::cloud::dataplex::v1::DeleteDataScanRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDataScan,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::dataplex::v1::DeleteDataScanRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
              DeleteDataScan,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::DataScan>, GetDataScan,
              (google::cloud::dataplex::v1::GetDataScanRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::DataScan>),
              ListDataScans,
              (google::cloud::dataplex::v1::ListDataScansRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::RunDataScanResponse>,
              RunDataScan,
              (google::cloud::dataplex::v1::RunDataScanRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::DataScanJob>, GetDataScanJob,
      (google::cloud::dataplex::v1::GetDataScanJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::DataScanJob>),
              ListDataScanJobs,
              (google::cloud::dataplex::v1::ListDataScanJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::GenerateDataQualityRulesResponse>,
      GenerateDataQualityRules,
      (google::cloud::dataplex::v1::GenerateDataQualityRulesRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_SCAN_CONNECTION_H
