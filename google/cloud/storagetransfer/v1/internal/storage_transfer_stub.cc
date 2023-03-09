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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/v1/internal/storage_transfer_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/storagetransfer/v1/transfer.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceStub::~StorageTransferServiceStub() = default;

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
DefaultStorageTransferServiceStub::GetGoogleServiceAccount(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  google::storagetransfer::v1::GoogleServiceAccount response;
  auto status =
      grpc_stub_->GetGoogleServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::TransferJob>
DefaultStorageTransferServiceStub::CreateTransferJob(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  google::storagetransfer::v1::TransferJob response;
  auto status =
      grpc_stub_->CreateTransferJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::TransferJob>
DefaultStorageTransferServiceStub::UpdateTransferJob(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  google::storagetransfer::v1::TransferJob response;
  auto status =
      grpc_stub_->UpdateTransferJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::TransferJob>
DefaultStorageTransferServiceStub::GetTransferJob(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  google::storagetransfer::v1::TransferJob response;
  auto status = grpc_stub_->GetTransferJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
DefaultStorageTransferServiceStub::ListTransferJobs(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::ListTransferJobsRequest const& request) {
  google::storagetransfer::v1::ListTransferJobsResponse response;
  auto status =
      grpc_stub_->ListTransferJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultStorageTransferServiceStub::PauseTransferOperation(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->PauseTransferOperation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultStorageTransferServiceStub::ResumeTransferOperation(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->ResumeTransferOperation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultStorageTransferServiceStub::AsyncRunTransferJob(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::storagetransfer::v1::RunTransferJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::storagetransfer::v1::RunTransferJobRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRunTransferJob(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultStorageTransferServiceStub::DeleteTransferJob(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteTransferJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::storagetransfer::v1::AgentPool>
DefaultStorageTransferServiceStub::CreateAgentPool(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  google::storagetransfer::v1::AgentPool response;
  auto status =
      grpc_stub_->CreateAgentPool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::AgentPool>
DefaultStorageTransferServiceStub::UpdateAgentPool(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  google::storagetransfer::v1::AgentPool response;
  auto status =
      grpc_stub_->UpdateAgentPool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::AgentPool>
DefaultStorageTransferServiceStub::GetAgentPool(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  google::storagetransfer::v1::AgentPool response;
  auto status = grpc_stub_->GetAgentPool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::storagetransfer::v1::ListAgentPoolsResponse>
DefaultStorageTransferServiceStub::ListAgentPools(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::ListAgentPoolsRequest const& request) {
  google::storagetransfer::v1::ListAgentPoolsResponse response;
  auto status = grpc_stub_->ListAgentPools(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultStorageTransferServiceStub::DeleteAgentPool(
    grpc::ClientContext& client_context,
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteAgentPool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultStorageTransferServiceStub::AsyncGetOperation(
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

future<Status> DefaultStorageTransferServiceStub::AsyncCancelOperation(
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
}  // namespace storagetransfer_v1_internal
}  // namespace cloud
}  // namespace google
