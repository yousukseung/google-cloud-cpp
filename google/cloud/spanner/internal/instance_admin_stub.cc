// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/internal/instance_admin_stub.h"
#include "google/cloud/spanner/internal/instance_admin_logging.h"
#include "google/cloud/spanner/internal/instance_admin_metadata.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/log.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/instance/v1/spanner_instance_admin.grpc.pb.h>
#include <grpcpp/grpcpp.h>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace gsai = ::google::spanner::admin::instance;

InstanceAdminStub::~InstanceAdminStub() = default;

class DefaultInstanceAdminStub : public InstanceAdminStub {
 public:
  DefaultInstanceAdminStub(
      std::unique_ptr<gsai::v1::InstanceAdmin::StubInterface> instance_admin,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : instance_admin_(std::move(instance_admin)),
        operations_(std::move(operations)) {}

  ~DefaultInstanceAdminStub() override = default;

  StatusOr<gsai::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      gsai::v1::GetInstanceRequest const& request) override {
    gsai::v1::Instance response;
    auto status = instance_admin_->GetInstance(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      CompletionQueue& cq, std::unique_ptr<grpc::ClientContext> context,
      gsai::v1::CreateInstanceRequest const& request) override {
    return internal::MakeUnaryRpcImpl<gsai::v1::CreateInstanceRequest,
                                      google::longrunning::Operation>(
        cq,
        [this](grpc::ClientContext* context,
               gsai::v1::CreateInstanceRequest const& request,
               grpc::CompletionQueue* cq) {
          return instance_admin_->AsyncCreateInstance(context, request, cq);
        },
        request, std::move(context));
  }

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      CompletionQueue& cq, std::unique_ptr<grpc::ClientContext> context,
      gsai::v1::UpdateInstanceRequest const& request) override {
    return internal::MakeUnaryRpcImpl<gsai::v1::UpdateInstanceRequest,
                                      google::longrunning::Operation>(
        cq,
        [this](grpc::ClientContext* context,
               gsai::v1::UpdateInstanceRequest const& request,
               grpc::CompletionQueue* cq) {
          return instance_admin_->AsyncUpdateInstance(context, request, cq);
        },
        request, std::move(context));
  }

  Status DeleteInstance(
      grpc::ClientContext& context,
      gsai::v1::DeleteInstanceRequest const& request) override {
    google::protobuf::Empty response;
    grpc::Status status =
        instance_admin_->DeleteInstance(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
  }

  StatusOr<gsai::v1::InstanceConfig> GetInstanceConfig(
      grpc::ClientContext& context,
      gsai::v1::GetInstanceConfigRequest const& request) override {
    gsai::v1::InstanceConfig response;
    auto status =
        instance_admin_->GetInstanceConfig(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  StatusOr<gsai::v1::ListInstanceConfigsResponse> ListInstanceConfigs(
      grpc::ClientContext& context,
      gsai::v1::ListInstanceConfigsRequest const& request) override {
    gsai::v1::ListInstanceConfigsResponse response;
    auto status =
        instance_admin_->ListInstanceConfigs(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  StatusOr<gsai::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      gsai::v1::ListInstancesRequest const& request) override {
    gsai::v1::ListInstancesResponse response;
    auto status = instance_admin_->ListInstances(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override {
    google::iam::v1::Policy response;
    auto status = instance_admin_->GetIamPolicy(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override {
    google::iam::v1::Policy response;
    auto status = instance_admin_->SetIamPolicy(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override {
    google::iam::v1::TestIamPermissionsResponse response;
    auto status =
        instance_admin_->TestIamPermissions(&context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
  }

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      CompletionQueue& cq, std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override {
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

  future<Status> AsyncCancelOperation(
      CompletionQueue& cq, std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override {
    return internal::MakeUnaryRpcImpl<
               google::longrunning::CancelOperationRequest,
               google::protobuf::Empty>(
               cq,
               [this](
                   grpc::ClientContext* context,
                   google::longrunning::CancelOperationRequest const& request,
                   grpc::CompletionQueue* cq) {
                 return operations_->AsyncCancelOperation(context, request, cq);
               },
               request, std::move(context))
        .then([](future<StatusOr<google::protobuf::Empty>> f) {
          return f.get().status();
        });
  }

 private:
  std::unique_ptr<gsai::v1::InstanceAdmin::StubInterface> instance_admin_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

std::shared_ptr<InstanceAdminStub> CreateDefaultInstanceAdminStub(
    Options const& opts) {
  auto channel_args = internal::MakeChannelArguments(opts);
  auto channel =
      grpc::CreateCustomChannel(opts.get<EndpointOption>(),
                                opts.get<GrpcCredentialOption>(), channel_args);
  auto spanner_grpc_stub = gsai::v1::InstanceAdmin::NewStub(channel);
  auto longrunning_grpc_stub =
      google::longrunning::Operations::NewStub(channel);

  std::shared_ptr<InstanceAdminStub> stub =
      std::make_shared<DefaultInstanceAdminStub>(
          std::move(spanner_grpc_stub), std::move(longrunning_grpc_stub));

  stub = std::make_shared<InstanceAdminMetadata>(std::move(stub));

  if (internal::Contains(opts.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<InstanceAdminLogging>(
        std::move(stub), opts.get<GrpcTracingOptionsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google
