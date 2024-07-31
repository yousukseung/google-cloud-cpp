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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/documents_connection.h"
#include "google/cloud/dialogflow_es/documents_options.h"
#include "google/cloud/dialogflow_es/internal/documents_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/documents_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/documents_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/documents_tracing_connection.h"
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
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentsConnection::~DocumentsConnection() = default;

StreamRange<google::cloud::dialogflow::v2::Document>
DocumentsConnection::ListDocuments(
    google::cloud::dialogflow::v2::
        ListDocumentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Document>>();
}

StatusOr<google::cloud::dialogflow::v2::Document>
DocumentsConnection::GetDocument(
    google::cloud::dialogflow::v2::GetDocumentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::CreateDocument(
    google::cloud::dialogflow::v2::CreateDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::CreateDocument(
    NoAwaitTag, google::cloud::dialogflow::v2::CreateDocumentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::CreateDocument(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>
DocumentsConnection::ImportDocuments(
    google::cloud::dialogflow::v2::ImportDocumentsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::ImportDocuments(
    NoAwaitTag, google::cloud::dialogflow::v2::ImportDocumentsRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>
DocumentsConnection::ImportDocuments(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
DocumentsConnection::DeleteDocument(
    google::cloud::dialogflow::v2::DeleteDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::DeleteDocument(
    NoAwaitTag, google::cloud::dialogflow::v2::DeleteDocumentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
DocumentsConnection::DeleteDocument(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::UpdateDocument(
    google::cloud::dialogflow::v2::UpdateDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::UpdateDocument(
    NoAwaitTag, google::cloud::dialogflow::v2::UpdateDocumentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::UpdateDocument(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::ReloadDocument(
    google::cloud::dialogflow::v2::ReloadDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::ReloadDocument(
    NoAwaitTag, google::cloud::dialogflow::v2::ReloadDocumentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::ReloadDocument(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::ExportDocument(
    google::cloud::dialogflow::v2::ExportDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> DocumentsConnection::ExportDocument(
    NoAwaitTag, google::cloud::dialogflow::v2::ExportDocumentRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::Document>>
DocumentsConnection::ExportDocument(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::Document>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<DocumentsConnection> MakeDocumentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DocumentsPolicyOptionList>(options, __func__);
  options = dialogflow_es_internal::DocumentsDefaultOptions(location,
                                                            std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultDocumentsStub(
      std::move(auth), options);
  return dialogflow_es_internal::MakeDocumentsTracingConnection(
      std::make_shared<dialogflow_es_internal::DocumentsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<DocumentsConnection> MakeDocumentsConnection(Options options) {
  return MakeDocumentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
