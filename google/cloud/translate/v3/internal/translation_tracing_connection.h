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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_TRACING_CONNECTION_H

#include "google/cloud/translate/v3/translation_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TranslationServiceTracingConnection
    : public translate_v3::TranslationServiceConnection {
 public:
  ~TranslationServiceTracingConnection() override = default;

  explicit TranslationServiceTracingConnection(
      std::shared_ptr<translate_v3::TranslationServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchTranslateText(
      NoAwaitTag,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchTranslateDocument(
      NoAwaitTag,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::translation::v3::Glossary>> CreateGlossary(
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateGlossary(
      NoAwaitTag,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::Glossary>> CreateGlossary(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::translation::v3::Glossary> ListGlossaries(
      google::cloud::translation::v3::ListGlossariesRequest request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(google::cloud::translation::v3::DeleteGlossaryRequest const&
                     request) override;

  StatusOr<google::longrunning::Operation> DeleteGlossary(
      NoAwaitTag,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request) override;

  Status DeleteAdaptiveMtDataset(
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request) override;

  StreamRange<google::cloud::translation::v3::AdaptiveMtDataset>
  ListAdaptiveMtDatasets(
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtFile> GetAdaptiveMtFile(
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request)
      override;

  Status DeleteAdaptiveMtFile(
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request) override;

  StreamRange<google::cloud::translation::v3::AdaptiveMtFile>
  ListAdaptiveMtFiles(google::cloud::translation::v3::ListAdaptiveMtFilesRequest
                          request) override;

  StreamRange<google::cloud::translation::v3::AdaptiveMtSentence>
  ListAdaptiveMtSentences(
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest request)
      override;

 private:
  std::shared_ptr<translate_v3::TranslationServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<translate_v3::TranslationServiceConnection>
MakeTranslationServiceTracingConnection(
    std::shared_ptr<translate_v3::TranslationServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_TRACING_CONNECTION_H
