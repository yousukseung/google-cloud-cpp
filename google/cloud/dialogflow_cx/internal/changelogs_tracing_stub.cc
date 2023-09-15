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
// source: google/cloud/dialogflow/cx/v3/changelog.proto

#include "google/cloud/dialogflow_cx/internal/changelogs_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ChangelogsTracingStub::ChangelogsTracingStub(
    std::shared_ptr<ChangelogsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListChangelogsResponse>
ChangelogsTracingStub::ListChangelogs(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListChangelogsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Changelogs",
                                     "ListChangelogs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListChangelogs(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Changelog>
ChangelogsTracingStub::GetChangelog(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetChangelogRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Changelogs",
                                     "GetChangelog");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetChangelog(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ChangelogsStub> MakeChangelogsTracingStub(
    std::shared_ptr<ChangelogsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ChangelogsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
