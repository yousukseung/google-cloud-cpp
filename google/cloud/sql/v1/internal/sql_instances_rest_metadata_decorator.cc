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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#include "google/cloud/sql/v1/internal/sql_instances_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlInstancesServiceRestMetadata::SqlInstancesServiceRestMetadata(
    std::shared_ptr<SqlInstancesServiceRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::AddServerCa(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AddServerCa(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Clone(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesCloneRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Clone(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Delete(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesDeleteRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Delete(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::DemoteMaster(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DemoteMaster(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Export(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesExportRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Export(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Failover(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesFailoverRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Failover(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Reencrypt(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesReencryptRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Reencrypt(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::DatabaseInstance>
SqlInstancesServiceRestMetadata::Get(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesGetRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Get(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Import(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesImportRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Import(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Insert(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesInsertRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Insert(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::InstancesListResponse>
SqlInstancesServiceRestMetadata::List(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesListRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->List(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
SqlInstancesServiceRestMetadata::ListServerCas(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListServerCas(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Patch(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesPatchRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Patch(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::PromoteReplica(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->PromoteReplica(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Switchover(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesSwitchoverRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Switchover(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::ResetSslConfig(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ResetSslConfig(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Restart(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesRestartRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Restart(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::RestoreBackup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->RestoreBackup(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::RotateServerCa(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->RotateServerCa(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::StartReplica(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->StartReplica(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::StopReplica(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->StopReplica(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::TruncateLog(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TruncateLog(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::Update(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesUpdateRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Update(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::SslCert>
SqlInstancesServiceRestMetadata::CreateEphemeral(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->CreateEphemeral(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::RescheduleMaintenance(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->RescheduleMaintenance(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
SqlInstancesServiceRestMetadata::VerifyExternalSyncSettings(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->VerifyExternalSyncSettings(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::StartExternalSync(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->StartExternalSync(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::PerformDiskShrink(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->PerformDiskShrink(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
SqlInstancesServiceRestMetadata::GetDiskShrinkConfig(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetDiskShrinkConfig(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceRestMetadata::ResetReplicaSize(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ResetReplicaSize(rest_context, options, request);
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
SqlInstancesServiceRestMetadata::GetLatestRecoveryTime(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetLatestRecoveryTime(rest_context, options, request);
}

void SqlInstancesServiceRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
