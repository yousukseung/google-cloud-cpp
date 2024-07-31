// Copyright 2024 Google LLC
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
// source: google/cloud/dataplex/v1/catalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_CONNECTION_IMPL_H

#include "google/cloud/dataplex/v1/catalog_connection.h"
#include "google/cloud/dataplex/v1/catalog_connection_idempotency_policy.h"
#include "google/cloud/dataplex/v1/catalog_options.h"
#include "google/cloud/dataplex/v1/internal/catalog_retry_traits.h"
#include "google/cloud/dataplex/v1/internal/catalog_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CatalogServiceConnectionImpl
    : public dataplex_v1::CatalogServiceConnection {
 public:
  ~CatalogServiceConnectionImpl() override = default;

  CatalogServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataplex_v1_internal::CatalogServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::dataplex::v1::EntryType>> CreateEntryType(
      google::cloud::dataplex::v1::CreateEntryTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntryType(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateEntryTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::EntryType>> CreateEntryType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::EntryType>> UpdateEntryType(
      google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEntryType(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::EntryType>> UpdateEntryType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEntryType(google::cloud::dataplex::v1::DeleteEntryTypeRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> DeleteEntryType(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEntryType(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::EntryType> ListEntryTypes(
      google::cloud::dataplex::v1::ListEntryTypesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::EntryType> GetEntryType(
      google::cloud::dataplex::v1::GetEntryTypeRequest const& request) override;

  future<StatusOr<google::cloud::dataplex::v1::AspectType>> CreateAspectType(
      google::cloud::dataplex::v1::CreateAspectTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAspectType(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateAspectTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::AspectType>> CreateAspectType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::AspectType>> UpdateAspectType(
      google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAspectType(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::AspectType>> UpdateAspectType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteAspectType(google::cloud::dataplex::v1::DeleteAspectTypeRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteAspectType(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteAspectType(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::AspectType> ListAspectTypes(
      google::cloud::dataplex::v1::ListAspectTypesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::AspectType> GetAspectType(
      google::cloud::dataplex::v1::GetAspectTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::EntryGroup>> CreateEntryGroup(
      google::cloud::dataplex::v1::CreateEntryGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntryGroup(
      NoAwaitTag,
      google::cloud::dataplex::v1::CreateEntryGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::EntryGroup>> CreateEntryGroup(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::EntryGroup>> UpdateEntryGroup(
      google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateEntryGroup(
      NoAwaitTag,
      google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::EntryGroup>> UpdateEntryGroup(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEntryGroup(google::cloud::dataplex::v1::DeleteEntryGroupRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteEntryGroup(
      NoAwaitTag,
      google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
  DeleteEntryGroup(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::dataplex::v1::EntryGroup> ListEntryGroups(
      google::cloud::dataplex::v1::ListEntryGroupsRequest request) override;

  StatusOr<google::cloud::dataplex::v1::EntryGroup> GetEntryGroup(
      google::cloud::dataplex::v1::GetEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Entry> CreateEntry(
      google::cloud::dataplex::v1::CreateEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> UpdateEntry(
      google::cloud::dataplex::v1::UpdateEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> DeleteEntry(
      google::cloud::dataplex::v1::DeleteEntryRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Entry> ListEntries(
      google::cloud::dataplex::v1::ListEntriesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> GetEntry(
      google::cloud::dataplex::v1::GetEntryRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entry> LookupEntry(
      google::cloud::dataplex::v1::LookupEntryRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::SearchEntriesResult> SearchEntries(
      google::cloud::dataplex::v1::SearchEntriesRequest request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataplex_v1_internal::CatalogServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CATALOG_CONNECTION_IMPL_H
