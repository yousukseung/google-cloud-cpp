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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_TRACING_CONNECTION_H

#include "google/cloud/datacatalog/v1/data_catalog_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataCatalogTracingConnection
    : public datacatalog_v1::DataCatalogConnection {
 public:
  ~DataCatalogTracingConnection() override = default;

  explicit DataCatalogTracingConnection(
      std::shared_ptr<datacatalog_v1::DataCatalogConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
  SearchCatalog(
      google::cloud::datacatalog::v1::SearchCatalogRequest request) override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> CreateEntryGroup(
      google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> GetEntryGroup(
      google::cloud::datacatalog::v1::GetEntryGroupRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::EntryGroup> UpdateEntryGroup(
      google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request)
      override;

  Status DeleteEntryGroup(
      google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::v1::EntryGroup> ListEntryGroups(
      google::cloud::datacatalog::v1::ListEntryGroupsRequest request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> CreateEntry(
      google::cloud::datacatalog::v1::CreateEntryRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Entry> UpdateEntry(
      google::cloud::datacatalog::v1::UpdateEntryRequest const& request)
      override;

  Status DeleteEntry(google::cloud::datacatalog::v1::DeleteEntryRequest const&
                         request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> GetEntry(
      google::cloud::datacatalog::v1::GetEntryRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::Entry> LookupEntry(
      google::cloud::datacatalog::v1::LookupEntryRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::v1::Entry> ListEntries(
      google::cloud::datacatalog::v1::ListEntriesRequest request) override;

  StatusOr<google::cloud::datacatalog::v1::EntryOverview> ModifyEntryOverview(
      google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Contacts> ModifyEntryContacts(
      google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> CreateTagTemplate(
      google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> GetTagTemplate(
      google::cloud::datacatalog::v1::GetTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplate> UpdateTagTemplate(
      google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request)
      override;

  Status DeleteTagTemplate(
      google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  CreateTagTemplateField(
      google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  UpdateTagTemplateField(
      google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateField(
      google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
  RenameTagTemplateFieldEnumValue(
      google::cloud::datacatalog::v1::
          RenameTagTemplateFieldEnumValueRequest const& request) override;

  Status DeleteTagTemplateField(
      google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::v1::Tag> CreateTag(
      google::cloud::datacatalog::v1::CreateTagRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::Tag> UpdateTag(
      google::cloud::datacatalog::v1::UpdateTagRequest const& request) override;

  Status DeleteTag(
      google::cloud::datacatalog::v1::DeleteTagRequest const& request) override;

  StreamRange<google::cloud::datacatalog::v1::Tag> ListTags(
      google::cloud::datacatalog::v1::ListTagsRequest request) override;

  future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
  ReconcileTags(google::cloud::datacatalog::v1::ReconcileTagsRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> ReconcileTags(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request)
      override;

  future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
  ReconcileTags(ExperimentalTag,
                google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::datacatalog::v1::StarEntryResponse> StarEntry(
      google::cloud::datacatalog::v1::StarEntryRequest const& request) override;

  StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse> UnstarEntry(
      google::cloud::datacatalog::v1::UnstarEntryRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
  ImportEntries(google::cloud::datacatalog::v1::ImportEntriesRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> ImportEntries(
      ExperimentalTag, NoAwaitTag,
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request)
      override;

  future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
  ImportEntries(ExperimentalTag,
                google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<datacatalog_v1::DataCatalogConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<datacatalog_v1::DataCatalogConnection>
MakeDataCatalogTracingConnection(
    std::shared_ptr<datacatalog_v1::DataCatalogConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_DATA_CATALOG_TRACING_CONNECTION_H
