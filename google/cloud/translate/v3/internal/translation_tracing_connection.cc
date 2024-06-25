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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/v3/internal/translation_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TranslationServiceTracingConnection::TranslationServiceTracingConnection(
    std::shared_ptr<translate_v3::TranslationServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceTracingConnection::TranslateText(
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::TranslateText");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TranslateText(request));
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceTracingConnection::DetectLanguage(
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DetectLanguage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DetectLanguage(request));
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceTracingConnection::GetSupportedLanguages(
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::GetSupportedLanguages");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSupportedLanguages(request));
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceTracingConnection::TranslateDocument(
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::TranslateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TranslateDocument(request));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceTracingConnection::BatchTranslateText(
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateText");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchTranslateText(request));
}

StatusOr<google::longrunning::Operation>
TranslationServiceTracingConnection::BatchTranslateText(
    ExperimentalTag, NoAwaitTag,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateText");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->BatchTranslateText(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceTracingConnection::BatchTranslateText(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateText");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchTranslateText(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceTracingConnection::BatchTranslateDocument(
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateDocument");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchTranslateDocument(request));
}

StatusOr<google::longrunning::Operation>
TranslationServiceTracingConnection::BatchTranslateDocument(
    ExperimentalTag, NoAwaitTag,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateDocument");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->BatchTranslateDocument(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceTracingConnection::BatchTranslateDocument(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::BatchTranslateDocument");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchTranslateDocument(
                                                ExperimentalTag{}, operation));
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceTracingConnection::CreateGlossary(
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::CreateGlossary");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateGlossary(request));
}

StatusOr<google::longrunning::Operation>
TranslationServiceTracingConnection::CreateGlossary(
    ExperimentalTag, NoAwaitTag,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::CreateGlossary");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateGlossary(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceTracingConnection::CreateGlossary(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::CreateGlossary");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->CreateGlossary(ExperimentalTag{}, operation));
}

StreamRange<google::cloud::translation::v3::Glossary>
TranslationServiceTracingConnection::ListGlossaries(
    google::cloud::translation::v3::ListGlossariesRequest request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::ListGlossaries");
  internal::OTelScope scope(span);
  auto sr = child_->ListGlossaries(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::translation::v3::Glossary>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceTracingConnection::GetGlossary(
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::GetGlossary");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGlossary(request));
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceTracingConnection::DeleteGlossary(
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DeleteGlossary");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteGlossary(request));
}

StatusOr<google::longrunning::Operation>
TranslationServiceTracingConnection::DeleteGlossary(
    ExperimentalTag, NoAwaitTag,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DeleteGlossary");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteGlossary(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceTracingConnection::DeleteGlossary(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DeleteGlossary");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->DeleteGlossary(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceTracingConnection::CreateAdaptiveMtDataset(
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::CreateAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateAdaptiveMtDataset(request));
}

Status TranslationServiceTracingConnection::DeleteAdaptiveMtDataset(
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DeleteAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAdaptiveMtDataset(request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceTracingConnection::GetAdaptiveMtDataset(
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::GetAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAdaptiveMtDataset(request));
}

StreamRange<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceTracingConnection::ListAdaptiveMtDatasets(
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::ListAdaptiveMtDatasets");
  internal::OTelScope scope(span);
  auto sr = child_->ListAdaptiveMtDatasets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::translation::v3::AdaptiveMtDataset>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceTracingConnection::AdaptiveMtTranslate(
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::AdaptiveMtTranslate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AdaptiveMtTranslate(request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceTracingConnection::GetAdaptiveMtFile(
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::GetAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAdaptiveMtFile(request));
}

Status TranslationServiceTracingConnection::DeleteAdaptiveMtFile(
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::DeleteAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAdaptiveMtFile(request));
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceTracingConnection::ImportAdaptiveMtFile(
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::ImportAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ImportAdaptiveMtFile(request));
}

StreamRange<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceTracingConnection::ListAdaptiveMtFiles(
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::ListAdaptiveMtFiles");
  internal::OTelScope scope(span);
  auto sr = child_->ListAdaptiveMtFiles(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::translation::v3::AdaptiveMtFile>(std::move(span),
                                                      std::move(sr));
}

StreamRange<google::cloud::translation::v3::AdaptiveMtSentence>
TranslationServiceTracingConnection::ListAdaptiveMtSentences(
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest request) {
  auto span = internal::MakeSpan(
      "translate_v3::TranslationServiceConnection::ListAdaptiveMtSentences");
  internal::OTelScope scope(span);
  auto sr = child_->ListAdaptiveMtSentences(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::translation::v3::AdaptiveMtSentence>(std::move(span),
                                                          std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<translate_v3::TranslationServiceConnection>
MakeTranslationServiceTracingConnection(
    std::shared_ptr<translate_v3::TranslationServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<TranslationServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
