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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/internal/key_management_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

KeyManagementServiceTracingStub::KeyManagementServiceTracingStub(
    std::shared_ptr<KeyManagementServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::kms::v1::ListKeyRingsResponse>
KeyManagementServiceTracingStub::ListKeyRings(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListKeyRingsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListKeyRings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListKeyRings(context, request));
}

StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
KeyManagementServiceTracingStub::ListCryptoKeys(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListCryptoKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCryptoKeys(context, request));
}

StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
KeyManagementServiceTracingStub::ListCryptoKeyVersions(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListCryptoKeyVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCryptoKeyVersions(context, request));
}

StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
KeyManagementServiceTracingStub::ListImportJobs(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListImportJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ListImportJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListImportJobs(context, request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingStub::GetKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKeyRing(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::GetCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCryptoKey(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::GetCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceTracingStub::GetPublicKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetPublicKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPublicKey(context, request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingStub::GetImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GetImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetImportJob(context, request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingStub::CreateKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateKeyRing(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::CreateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCryptoKey(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::CreateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::ImportCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "ImportCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ImportCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingStub::CreateImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "CreateImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateImportJob(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::UpdateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCryptoKey(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::UpdateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingStub::UpdateCryptoKeyPrimaryVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "UpdateCryptoKeyPrimaryVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateCryptoKeyPrimaryVersion(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::DestroyCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "DestroyCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DestroyCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingStub::RestoreCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RestoreCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RestoreCryptoKeyVersion(context, request));
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceTracingStub::Encrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::EncryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "Encrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Encrypt(context, request));
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceTracingStub::Decrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "Decrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->Decrypt(context, request));
}

StatusOr<google::cloud::kms::v1::RawEncryptResponse>
KeyManagementServiceTracingStub::RawEncrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RawEncryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RawEncrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RawEncrypt(context, request));
}

StatusOr<google::cloud::kms::v1::RawDecryptResponse>
KeyManagementServiceTracingStub::RawDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RawDecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "RawDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RawDecrypt(context, request));
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceTracingStub::AsymmetricSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "AsymmetricSign");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AsymmetricSign(context, request));
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceTracingStub::AsymmetricDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "AsymmetricDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AsymmetricDecrypt(context, request));
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceTracingStub::MacSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacSignRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "MacSign");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->MacSign(context, request));
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceTracingStub::MacVerify(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "MacVerify");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->MacVerify(context, request));
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceTracingStub::GenerateRandomBytes(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.KeyManagementService",
                                     "GenerateRandomBytes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GenerateRandomBytes(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<KeyManagementServiceStub> MakeKeyManagementServiceTracingStub(
    std::shared_ptr<KeyManagementServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<KeyManagementServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
