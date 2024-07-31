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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeaturestoreServiceTracingConnection::FeaturestoreServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::CreateFeaturestore(
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateFeaturestore(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::CreateFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeaturestore");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateFeaturestore(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::CreateFeaturestore(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateFeaturestore(operation));
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingConnection::GetFeaturestore(
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeaturestore(request));
}

StreamRange<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingConnection::ListFeaturestores(
    google::cloud::aiplatform::v1::ListFeaturestoresRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListFeaturestores");
  internal::OTelScope scope(span);
  auto sr = child_->ListFeaturestores(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Featurestore>(std::move(span),
                                                   std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::UpdateFeaturestore(
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateFeaturestore(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::UpdateFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeaturestore");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateFeaturestore(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::UpdateFeaturestore(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateFeaturestore(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeaturestore(
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeaturestore(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::DeleteFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeaturestore");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteFeaturestore(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeaturestore(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeaturestore");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeaturestore(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceTracingConnection::CreateEntityType(
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateEntityType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEntityType(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::CreateEntityType(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateEntityType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateEntityType(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceTracingConnection::CreateEntityType(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateEntityType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateEntityType(operation));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::GetEntityType(
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntityType(request));
}

StreamRange<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::ListEntityTypes(
    google::cloud::aiplatform::v1::ListEntityTypesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListEntityTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListEntityTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::EntityType>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::UpdateEntityType(
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntityType(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteEntityType(
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteEntityType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEntityType(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::DeleteEntityType(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteEntityType");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteEntityType(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteEntityType(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteEntityType");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteEntityType(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceTracingConnection::CreateFeature(
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeature");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFeature(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::CreateFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeature");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateFeature(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceTracingConnection::CreateFeature(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeature");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFeature(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceTracingConnection::BatchCreateFeatures(
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchCreateFeatures");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchCreateFeatures(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::BatchCreateFeatures(
    NoAwaitTag,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchCreateFeatures");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->BatchCreateFeatures(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceTracingConnection::BatchCreateFeatures(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchCreateFeatures");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchCreateFeatures(operation));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::GetFeature(
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeature(request));
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::ListFeatures(
    google::cloud::aiplatform::v1::ListFeaturesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListFeatures");
  internal::OTelScope scope(span);
  auto sr = child_->ListFeatures(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Feature>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::UpdateFeature(
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFeature(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeature(
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeature");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFeature(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::DeleteFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeature");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteFeature(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeature(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeature");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFeature(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ImportFeatureValues(
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ImportFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportFeatureValues(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::ImportFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ImportFeatureValues");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ImportFeatureValues(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ImportFeatureValues(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ImportFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportFeatureValues(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::BatchReadFeatureValues(
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchReadFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchReadFeatureValues(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::BatchReadFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchReadFeatureValues");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->BatchReadFeatureValues(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::BatchReadFeatureValues(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchReadFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchReadFeatureValues(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ExportFeatureValues(
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ExportFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportFeatureValues(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::ExportFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ExportFeatureValues");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ExportFeatureValues(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ExportFeatureValues(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ExportFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportFeatureValues(operation));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::DeleteFeatureValues(
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeatureValues(request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingConnection::DeleteFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeatureValues");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteFeatureValues(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::DeleteFeatureValues(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeatureValues");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeatureValues(operation));
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::SearchFeatures(
    google::cloud::aiplatform::v1::SearchFeaturesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::SearchFeatures");
  internal::OTelScope scope(span);
  auto sr = child_->SearchFeatures(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Feature>(std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection>
MakeFeaturestoreServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<FeaturestoreServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
