// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/database/v1/spanner_database_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminStub::~DatabaseAdminStub() = default;

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DefaultDatabaseAdminStub::ListDatabases(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  google::spanner::admin::database::v1::ListDatabasesResponse response;
  auto status = grpc_stub_->ListDatabases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncCreateDatabase(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::database::v1::CreateDatabaseRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::database::v1::CreateDatabaseRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDatabase(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::spanner::admin::database::v1::Database>
DefaultDatabaseAdminStub::GetDatabase(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  google::spanner::admin::database::v1::Database response;
  auto status = grpc_stub_->GetDatabase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncUpdateDatabaseDdl(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDatabaseDdl(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultDatabaseAdminStub::DropDatabase(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DropDatabase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DefaultDatabaseAdminStub::GetDatabaseDdl(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  google::spanner::admin::database::v1::GetDatabaseDdlResponse response;
  auto status = grpc_stub_->GetDatabaseDdl(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDatabaseAdminStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::database::v1::CreateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::database::v1::CreateBackupRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackup(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::database::v1::CopyBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::database::v1::CopyBackupRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCopyBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminStub::GetBackup(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  google::spanner::admin::database::v1::Backup response;
  auto status = grpc_stub_->GetBackup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminStub::UpdateBackup(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  google::spanner::admin::database::v1::Backup response;
  auto status = grpc_stub_->UpdateBackup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDatabaseAdminStub::DeleteBackup(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBackup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DefaultDatabaseAdminStub::ListBackups(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  google::spanner::admin::database::v1::ListBackupsResponse response;
  auto status = grpc_stub_->ListBackups(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncRestoreDatabase(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::spanner::admin::database::v1::RestoreDatabaseRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::spanner::admin::database::v1::RestoreDatabaseRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreDatabase(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DefaultDatabaseAdminStub::ListDatabaseOperations(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  google::spanner::admin::database::v1::ListDatabaseOperationsResponse response;
  auto status =
      grpc_stub_->ListDatabaseOperations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DefaultDatabaseAdminStub::ListBackupOperations(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  google::spanner::admin::database::v1::ListBackupOperationsResponse response;
  auto status =
      grpc_stub_->ListBackupOperations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DefaultDatabaseAdminStub::ListDatabaseRoles(
    grpc::ClientContext& client_context,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  google::spanner::admin::database::v1::ListDatabaseRolesResponse response;
  auto status =
      grpc_stub_->ListDatabaseRoles(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDatabaseAdminStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
