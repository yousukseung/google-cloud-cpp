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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/v3/internal/folders_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcemanager/v3/folders.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FoldersStub::~FoldersStub() = default;

StatusOr<google::cloud::resourcemanager::v3::Folder>
DefaultFoldersStub::GetFolder(
    grpc::ClientContext& client_context,
    google::cloud::resourcemanager::v3::GetFolderRequest const& request) {
  google::cloud::resourcemanager::v3::Folder response;
  auto status = grpc_stub_->GetFolder(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::resourcemanager::v3::ListFoldersResponse>
DefaultFoldersStub::ListFolders(
    grpc::ClientContext& client_context,
    google::cloud::resourcemanager::v3::ListFoldersRequest const& request) {
  google::cloud::resourcemanager::v3::ListFoldersResponse response;
  auto status = grpc_stub_->ListFolders(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::resourcemanager::v3::SearchFoldersResponse>
DefaultFoldersStub::SearchFolders(
    grpc::ClientContext& client_context,
    google::cloud::resourcemanager::v3::SearchFoldersRequest const& request) {
  google::cloud::resourcemanager::v3::SearchFoldersResponse response;
  auto status = grpc_stub_->SearchFolders(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFoldersStub::AsyncCreateFolder(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::CreateFolderRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::resourcemanager::v3::CreateFolderRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::resourcemanager::v3::CreateFolderRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFolder(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFoldersStub::AsyncUpdateFolder(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::resourcemanager::v3::UpdateFolderRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::resourcemanager::v3::UpdateFolderRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFolder(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFoldersStub::AsyncMoveFolder(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::MoveFolderRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::resourcemanager::v3::MoveFolderRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::resourcemanager::v3::MoveFolderRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncMoveFolder(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFoldersStub::AsyncDeleteFolder(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::resourcemanager::v3::DeleteFolderRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::resourcemanager::v3::DeleteFolderRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFolder(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFoldersStub::AsyncUndeleteFolder(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::resourcemanager::v3::UndeleteFolderRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::resourcemanager::v3::UndeleteFolderRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteFolder(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::iam::v1::Policy> DefaultFoldersStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultFoldersStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultFoldersStub::TestIamPermissions(
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
DefaultFoldersStub::AsyncGetOperation(
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

future<Status> DefaultFoldersStub::AsyncCancelOperation(
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
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
