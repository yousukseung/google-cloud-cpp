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

#include "google/cloud/aiplatform/v1/featurestore_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreServiceClient::FeaturestoreServiceClient(
    std::shared_ptr<FeaturestoreServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FeaturestoreServiceClient::~FeaturestoreServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::CreateFeaturestore(
    std::string const& parent,
    google::cloud::aiplatform::v1::Featurestore const& featurestore,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeaturestoreRequest request;
  request.set_parent(parent);
  *request.mutable_featurestore() = featurestore;
  return connection_->CreateFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeaturestore(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Featurestore const& featurestore,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeaturestoreRequest request;
  request.set_parent(parent);
  *request.mutable_featurestore() = featurestore;
  return connection_->CreateFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::CreateFeaturestore(
    std::string const& parent,
    google::cloud::aiplatform::v1::Featurestore const& featurestore,
    std::string const& featurestore_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeaturestoreRequest request;
  request.set_parent(parent);
  *request.mutable_featurestore() = featurestore;
  request.set_featurestore_id(featurestore_id);
  return connection_->CreateFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeaturestore(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Featurestore const& featurestore,
    std::string const& featurestore_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeaturestoreRequest request;
  request.set_parent(parent);
  *request.mutable_featurestore() = featurestore;
  request.set_featurestore_id(featurestore_id);
  return connection_->CreateFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::CreateFeaturestore(
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::CreateFeaturestore(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeaturestore(operation);
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceClient::GetFeaturestore(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetFeaturestoreRequest request;
  request.set_name(name);
  return connection_->GetFeaturestore(request);
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceClient::GetFeaturestore(
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFeaturestore(request);
}

StreamRange<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceClient::ListFeaturestores(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListFeaturestoresRequest request;
  request.set_parent(parent);
  return connection_->ListFeaturestores(request);
}

StreamRange<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceClient::ListFeaturestores(
    google::cloud::aiplatform::v1::ListFeaturestoresRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFeaturestores(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::UpdateFeaturestore(
    google::cloud::aiplatform::v1::Featurestore const& featurestore,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeaturestoreRequest request;
  *request.mutable_featurestore() = featurestore;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::UpdateFeaturestore(
    NoAwaitTag, google::cloud::aiplatform::v1::Featurestore const& featurestore,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeaturestoreRequest request;
  *request.mutable_featurestore() = featurestore;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::UpdateFeaturestore(
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::UpdateFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceClient::UpdateFeaturestore(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeaturestore(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeaturestore(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeaturestoreRequest request;
  request.set_name(name);
  return connection_->DeleteFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeaturestore(NoAwaitTag,
                                              std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeaturestoreRequest request;
  request.set_name(name);
  return connection_->DeleteFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeaturestore(std::string const& name,
                                              bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeaturestoreRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeaturestore(NoAwaitTag,
                                              std::string const& name,
                                              bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeaturestoreRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeaturestore(
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeaturestore(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeaturestore(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeaturestore(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeaturestore(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeaturestore(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceClient::CreateEntityType(
    std::string const& parent,
    google::cloud::aiplatform::v1::EntityType const& entity_type,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateEntityTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entity_type() = entity_type;
  return connection_->CreateEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateEntityType(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::EntityType const& entity_type,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateEntityTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entity_type() = entity_type;
  return connection_->CreateEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceClient::CreateEntityType(
    std::string const& parent,
    google::cloud::aiplatform::v1::EntityType const& entity_type,
    std::string const& entity_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateEntityTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entity_type() = entity_type;
  request.set_entity_type_id(entity_type_id);
  return connection_->CreateEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateEntityType(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::EntityType const& entity_type,
    std::string const& entity_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateEntityTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entity_type() = entity_type;
  request.set_entity_type_id(entity_type_id);
  return connection_->CreateEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceClient::CreateEntityType(
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateEntityType(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceClient::CreateEntityType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntityType(operation);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::GetEntityType(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetEntityTypeRequest request;
  request.set_name(name);
  return connection_->GetEntityType(request);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::GetEntityType(
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntityType(request);
}

StreamRange<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::ListEntityTypes(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListEntityTypesRequest request;
  request.set_parent(parent);
  return connection_->ListEntityTypes(request);
}

StreamRange<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::ListEntityTypes(
    google::cloud::aiplatform::v1::ListEntityTypesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntityTypes(std::move(request));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::UpdateEntityType(
    google::cloud::aiplatform::v1::EntityType const& entity_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateEntityTypeRequest request;
  *request.mutable_entity_type() = entity_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntityType(request);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceClient::UpdateEntityType(
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntityType(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteEntityType(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteEntityTypeRequest request;
  request.set_name(name);
  return connection_->DeleteEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteEntityType(NoAwaitTag, std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteEntityTypeRequest request;
  request.set_name(name);
  return connection_->DeleteEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteEntityType(std::string const& name, bool force,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteEntityTypeRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteEntityType(NoAwaitTag, std::string const& name,
                                            bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteEntityTypeRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteEntityType(
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntityType(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteEntityType(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntityType(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteEntityType(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntityType(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceClient::CreateFeature(
    std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  return connection_->CreateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeature(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  return connection_->CreateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceClient::CreateFeature(
    std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature,
    std::string const& feature_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  request.set_feature_id(feature_id);
  return connection_->CreateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeature(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature,
    std::string const& feature_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  request.set_feature_id(feature_id);
  return connection_->CreateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceClient::CreateFeature(
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::CreateFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceClient::CreateFeature(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceClient::BatchCreateFeatures(
    std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::CreateFeatureRequest> const&
        requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchCreateFeaturesRequest request;
  request.set_parent(parent);
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->BatchCreateFeatures(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::BatchCreateFeatures(
    NoAwaitTag, std::string const& parent,
    std::vector<google::cloud::aiplatform::v1::CreateFeatureRequest> const&
        requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchCreateFeaturesRequest request;
  request.set_parent(parent);
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->BatchCreateFeatures(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceClient::BatchCreateFeatures(
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateFeatures(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::BatchCreateFeatures(
    NoAwaitTag,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateFeatures(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceClient::BatchCreateFeatures(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchCreateFeatures(operation);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::GetFeature(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetFeatureRequest request;
  request.set_name(name);
  return connection_->GetFeature(request);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::GetFeature(
    google::cloud::aiplatform::v1::GetFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFeature(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::ListFeatures(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListFeaturesRequest request;
  request.set_parent(parent);
  return connection_->ListFeatures(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::ListFeatures(
    google::cloud::aiplatform::v1::ListFeaturesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFeatures(std::move(request));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::UpdateFeature(
    google::cloud::aiplatform::v1::Feature const& feature,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeatureRequest request;
  *request.mutable_feature() = feature;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeature(request);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::UpdateFeature(
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeature(request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeature(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureRequest request;
  request.set_name(name);
  return connection_->DeleteFeature(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeature(NoAwaitTag, std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureRequest request;
  request.set_name(name);
  return connection_->DeleteFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeature(
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceClient::DeleteFeature(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceClient::ImportFeatureValues(std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ImportFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->ImportFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::ImportFeatureValues(NoAwaitTag,
                                               std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ImportFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->ImportFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceClient::ImportFeatureValues(
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::ImportFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceClient::ImportFeatureValues(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportFeatureValues(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceClient::BatchReadFeatureValues(
    std::string const& featurestore, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest request;
  request.set_featurestore(featurestore);
  return connection_->BatchReadFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::BatchReadFeatureValues(
    NoAwaitTag, std::string const& featurestore, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest request;
  request.set_featurestore(featurestore);
  return connection_->BatchReadFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceClient::BatchReadFeatureValues(
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchReadFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::BatchReadFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchReadFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceClient::BatchReadFeatureValues(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchReadFeatureValues(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceClient::ExportFeatureValues(std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->ExportFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::ExportFeatureValues(NoAwaitTag,
                                               std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExportFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->ExportFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceClient::ExportFeatureValues(
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::ExportFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceClient::ExportFeatureValues(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportFeatureValues(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceClient::DeleteFeatureValues(std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->DeleteFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeatureValues(NoAwaitTag,
                                               std::string const& entity_type,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->DeleteFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceClient::DeleteFeatureValues(
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureValues(request);
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceClient::DeleteFeatureValues(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureValues(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceClient::DeleteFeatureValues(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureValues(operation);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::SearchFeatures(std::string const& location,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::SearchFeaturesRequest request;
  request.set_location(location);
  return connection_->SearchFeatures(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::SearchFeatures(std::string const& location,
                                          std::string const& query,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::SearchFeaturesRequest request;
  request.set_location(location);
  request.set_query(query);
  return connection_->SearchFeatures(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceClient::SearchFeatures(
    google::cloud::aiplatform::v1::SearchFeaturesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchFeatures(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
