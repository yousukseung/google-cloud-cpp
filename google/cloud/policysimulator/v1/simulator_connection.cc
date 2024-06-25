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
// source: google/cloud/policysimulator/v1/simulator.proto

#include "google/cloud/policysimulator/v1/simulator_connection.h"
#include "google/cloud/policysimulator/v1/internal/simulator_connection_impl.h"
#include "google/cloud/policysimulator/v1/internal/simulator_option_defaults.h"
#include "google/cloud/policysimulator/v1/internal/simulator_stub_factory.h"
#include "google/cloud/policysimulator/v1/internal/simulator_tracing_connection.h"
#include "google/cloud/policysimulator/v1/simulator_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace policysimulator_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SimulatorConnection::~SimulatorConnection() = default;

StatusOr<google::cloud::policysimulator::v1::Replay>
SimulatorConnection::GetReplay(
    google::cloud::policysimulator::v1::GetReplayRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::policysimulator::v1::Replay>>
SimulatorConnection::CreateReplay(
    google::cloud::policysimulator::v1::CreateReplayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::policysimulator::v1::Replay>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> SimulatorConnection::CreateReplay(
    ExperimentalTag, NoAwaitTag,
    google::cloud::policysimulator::v1::CreateReplayRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::policysimulator::v1::Replay>>
SimulatorConnection::CreateReplay(ExperimentalTag,
                                  google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::policysimulator::v1::Replay>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::policysimulator::v1::ReplayResult>
SimulatorConnection::ListReplayResults(
    google::cloud::policysimulator::v1::
        ListReplayResultsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::policysimulator::v1::ReplayResult>>();
}

std::shared_ptr<SimulatorConnection> MakeSimulatorConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SimulatorPolicyOptionList>(options, __func__);
  options =
      policysimulator_v1_internal::SimulatorDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = policysimulator_v1_internal::CreateDefaultSimulatorStub(
      std::move(auth), options);
  return policysimulator_v1_internal::MakeSimulatorTracingConnection(
      std::make_shared<policysimulator_v1_internal::SimulatorConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policysimulator_v1
}  // namespace cloud
}  // namespace google
