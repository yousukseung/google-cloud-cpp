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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H

#include "google/cloud/baremetalsolution/v2/bare_metal_solution_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BareMetalSolutionConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BareMetalSolutionClient`. To do so,
 * construct an object of type `BareMetalSolutionClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBareMetalSolutionConnection
    : public baremetalsolution_v2::BareMetalSolutionConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::Instance>),
      ListInstances,
      (google::cloud::baremetalsolution::v2::ListInstancesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Instance>, GetInstance,
      (google::cloud::baremetalsolution::v2::GetInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>,
      UpdateInstance,
      (google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateInstance,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>,
              UpdateInstance,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Instance>, RenameInstance,
      (google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::baremetalsolution::v2::ResetInstanceResponse>>,
              ResetInstance,
              (google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ResetInstance,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::baremetalsolution::v2::ResetInstanceResponse>>,
              ResetInstance,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::baremetalsolution::v2::StartInstanceResponse>>,
              StartInstance,
              (google::cloud::baremetalsolution::v2::StartInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StartInstance,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::StartInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::baremetalsolution::v2::StartInstanceResponse>>,
              StartInstance,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>,
      StopInstance,
      (google::cloud::baremetalsolution::v2::StopInstanceRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StopInstance,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::StopInstanceRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>,
      StopInstance,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::
                                  EnableInteractiveSerialConsoleResponse>>,
              EnableInteractiveSerialConsole,
              (google::cloud::baremetalsolution::v2::
                   EnableInteractiveSerialConsoleRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              EnableInteractiveSerialConsole,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::
                   EnableInteractiveSerialConsoleRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::
                                  EnableInteractiveSerialConsoleResponse>>,
              EnableInteractiveSerialConsole,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::
                                  DisableInteractiveSerialConsoleResponse>>,
              DisableInteractiveSerialConsole,
              (google::cloud::baremetalsolution::v2::
                   DisableInteractiveSerialConsoleRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DisableInteractiveSerialConsole,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::
                   DisableInteractiveSerialConsoleRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::
                                  DisableInteractiveSerialConsoleResponse>>,
              DisableInteractiveSerialConsole,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>,
      DetachLun,
      (google::cloud::baremetalsolution::v2::DetachLunRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DetachLun,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::DetachLunRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>,
              DetachLun,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::SSHKey>), ListSSHKeys,
      (google::cloud::baremetalsolution::v2::ListSSHKeysRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::baremetalsolution::v2::SSHKey>,
              CreateSSHKey,
              (google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteSSHKey,
              (google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::Volume>), ListVolumes,
      (google::cloud::baremetalsolution::v2::ListVolumesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Volume>, GetVolume,
      (google::cloud::baremetalsolution::v2::GetVolumeRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>,
              UpdateVolume,
              (google::cloud::baremetalsolution::v2::UpdateVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateVolume,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::UpdateVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>,
              UpdateVolume,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::baremetalsolution::v2::Volume>,
              RenameVolume,
              (google::cloud::baremetalsolution::v2::RenameVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      EvictVolume,
      (google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, EvictVolume,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      EvictVolume,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>,
              ResizeVolume,
              (google::cloud::baremetalsolution::v2::ResizeVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ResizeVolume,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::ResizeVolumeRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>,
              ResizeVolume,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::Network>),
      ListNetworks,
      (google::cloud::baremetalsolution::v2::ListNetworksRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>,
      ListNetworkUsage,
      (google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Network>, GetNetwork,
      (google::cloud::baremetalsolution::v2::GetNetworkRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Network>>,
              UpdateNetwork,
              (google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateNetwork,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::Network>>,
              UpdateNetwork,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>,
      CreateVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>,
      RestoreVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RestoreVolumeSnapshot,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>,
      RestoreVolumeSnapshot,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      Status, DeleteVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>,
      GetVolumeSnapshot,
      (google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>),
      ListVolumeSnapshots,
      (google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::Lun>, GetLun,
      (google::cloud::baremetalsolution::v2::GetLunRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::baremetalsolution::v2::Lun>),
              ListLuns,
              (google::cloud::baremetalsolution::v2::ListLunsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      EvictLun,
      (google::cloud::baremetalsolution::v2::EvictLunRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, EvictLun,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::EvictLunRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      EvictLun,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::NfsShare>, GetNfsShare,
      (google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::NfsShare>),
      ListNfsShares,
      (google::cloud::baremetalsolution::v2::ListNfsSharesRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>,
      UpdateNfsShare,
      (google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateNfsShare,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>,
              UpdateNfsShare,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>,
      CreateNfsShare,
      (google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateNfsShare,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>,
              CreateNfsShare,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::NfsShare>, RenameNfsShare,
      (google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      DeleteNfsShare,
      (google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteNfsShare,
      (ExperimentalTag, NoAwaitTag,
       google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>,
      DeleteNfsShare,
      (ExperimentalTag, google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::ProvisioningQuota>),
      ListProvisioningQuotas,
      (google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::baremetalsolution::v2::
                           SubmitProvisioningConfigResponse>,
              SubmitProvisioningConfig,
              (google::cloud::baremetalsolution::v2::
                   SubmitProvisioningConfigRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>,
      GetProvisioningConfig,
      (google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>,
      CreateProvisioningConfig,
      (google::cloud::baremetalsolution::v2::
           CreateProvisioningConfigRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>,
      UpdateProvisioningConfig,
      (google::cloud::baremetalsolution::v2::
           UpdateProvisioningConfigRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::baremetalsolution::v2::Network>,
              RenameNetwork,
              (google::cloud::baremetalsolution::v2::RenameNetworkRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::baremetalsolution::v2::OSImage>),
      ListOSImages,
      (google::cloud::baremetalsolution::v2::ListOSImagesRequest request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_MOCKS_MOCK_BARE_METAL_SOLUTION_CONNECTION_H
