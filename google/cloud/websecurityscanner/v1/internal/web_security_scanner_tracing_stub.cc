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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#include "google/cloud/websecurityscanner/v1/internal/web_security_scanner_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace websecurityscanner_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebSecurityScannerTracingStub::WebSecurityScannerTracingStub(
    std::shared_ptr<WebSecurityScannerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingStub::CreateScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "CreateScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateScanConfig(context, request));
}

Status WebSecurityScannerTracingStub::DeleteScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "DeleteScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteScanConfig(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingStub::GetScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "GetScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetScanConfig(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ListScanConfigsResponse>
WebSecurityScannerTracingStub::ListScanConfigs(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListScanConfigsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "ListScanConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListScanConfigs(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
WebSecurityScannerTracingStub::UpdateScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "UpdateScanConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateScanConfig(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingStub::StartScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::StartScanRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "StartScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StartScanRun(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingStub::GetScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetScanRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "GetScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetScanRun(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ListScanRunsResponse>
WebSecurityScannerTracingStub::ListScanRuns(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListScanRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "ListScanRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListScanRuns(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
WebSecurityScannerTracingStub::StopScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::StopScanRunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "StopScanRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StopScanRun(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse>
WebSecurityScannerTracingStub::ListCrawledUrls(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "ListCrawledUrls");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCrawledUrls(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::Finding>
WebSecurityScannerTracingStub::GetFinding(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetFindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "GetFinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFinding(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingsResponse>
WebSecurityScannerTracingStub::ListFindings(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListFindingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner", "ListFindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFindings(context, request));
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
WebSecurityScannerTracingStub::ListFindingTypeStats(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.websecurityscanner.v1.WebSecurityScanner",
      "ListFindingTypeStats");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFindingTypeStats(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<WebSecurityScannerStub> MakeWebSecurityScannerTracingStub(
    std::shared_ptr<WebSecurityScannerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<WebSecurityScannerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_v1_internal
}  // namespace cloud
}  // namespace google
