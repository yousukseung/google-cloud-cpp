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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CLIENT_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CLIENT_H

#include "generator/integration_tests/golden/v1/golden_kitchen_sink_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/protobuf/duration.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// GoldenKitchenSinkClient
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GoldenKitchenSinkClient {
 public:
  explicit GoldenKitchenSinkClient(std::shared_ptr<GoldenKitchenSinkConnection> connection, Options opts = {});
  ~GoldenKitchenSinkClient();

  ///@{
  /// @name Copy and move support
  GoldenKitchenSinkClient(GoldenKitchenSinkClient const&) = default;
  GoldenKitchenSinkClient& operator=(GoldenKitchenSinkClient const&) = default;
  GoldenKitchenSinkClient(GoldenKitchenSinkClient&&) = default;
  GoldenKitchenSinkClient& operator=(GoldenKitchenSinkClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GoldenKitchenSinkClient const& a, GoldenKitchenSinkClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GoldenKitchenSinkClient const& a, GoldenKitchenSinkClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Generates an OAuth 2.0 access token for a service account.
  ///
  /// @param name  Required. The resource name of the service account for which the credentials
  ///  are requested, in the following format:
  ///  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
  ///  character is required; replacing it with a project ID is invalid.
  /// @param not_used_anymore  Deprecated field for testing method signatures.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::GenerateAccessTokenResponse,generator/integration_tests/test.proto#L999}
  ///
  /// [google.test.admin.database.v1.GenerateAccessTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L959}
  /// [google.test.admin.database.v1.GenerateAccessTokenResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L999}
  ///
  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(std::string const& name, std::string const& not_used_anymore, Options opts = {});

  ///
  /// Generates an OAuth 2.0 access token for a service account.
  ///
  /// @param name  Required. The resource name of the service account for which the credentials
  ///  are requested, in the following format:
  ///  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
  ///  character is required; replacing it with a project ID is invalid.
  /// @param delegates  The sequence of service accounts in a delegation chain. Each service
  ///  account must be granted the `roles/iam.serviceAccountTokenCreator` role
  ///  on its next service account in the chain. The last service account in the
  ///  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
  ///  on the service account that is specified in the `name` field of the
  ///  request.
  ///  The delegates must have the following format:
  ///  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
  ///  character is required; replacing it with a project ID is invalid.
  /// @param scope  Required. Code to identify the scopes to be included in the OAuth 2.0 access token.
  ///  See https://developers.google.com/identity/protocols/googlescopes for more
  ///  information.
  ///  At least one value required.
  /// @param lifetime  The desired lifetime duration of the access token in seconds.
  ///  Must be set to a value less than or equal to 3600 (1 hour). If a value is
  ///  not specified, the token's lifetime will be set to a default value of one
  ///  hour.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::GenerateAccessTokenResponse,generator/integration_tests/test.proto#L999}
  ///
  /// [google.test.admin.database.v1.GenerateAccessTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L959}
  /// [google.test.admin.database.v1.GenerateAccessTokenResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L999}
  ///
  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(std::string const& name, std::vector<std::string> const& delegates, std::vector<std::string> const& scope, google::protobuf::Duration const& lifetime, Options opts = {});

  ///
  /// Generates an OAuth 2.0 access token for a service account.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::GenerateAccessTokenRequest,generator/integration_tests/test.proto#L959}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::GenerateAccessTokenResponse,generator/integration_tests/test.proto#L999}
  ///
  /// [google.test.admin.database.v1.GenerateAccessTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L959}
  /// [google.test.admin.database.v1.GenerateAccessTokenResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L999}
  ///
  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request, Options opts = {});

  ///
  /// Generates an OpenID Connect ID token for a service account.
  ///
  /// @param name  Required. The resource name of the service account for which the credentials
  ///  are requested, in the following format:
  ///  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
  ///  character is required; replacing it with a project ID is invalid.
  /// @param delegates  The sequence of service accounts in a delegation chain. Each service
  ///  account must be granted the `roles/iam.serviceAccountTokenCreator` role
  ///  on its next service account in the chain. The last service account in the
  ///  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
  ///  on the service account that is specified in the `name` field of the
  ///  request.
  ///  The delegates must have the following format:
  ///  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
  ///  character is required; replacing it with a project ID is invalid.
  /// @param audience  Required. The audience for the token, such as the API or account that this token
  ///  grants access to.
  /// @param include_email  Include the service account email in the token. If set to `true`, the
  ///  token will contain `email` and `email_verified` claims.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::GenerateIdTokenResponse,generator/integration_tests/test.proto#L1041}
  ///
  /// [google.test.admin.database.v1.GenerateIdTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1008}
  /// [google.test.admin.database.v1.GenerateIdTokenResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1041}
  ///
  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(std::string const& name, std::vector<std::string> const& delegates, std::string const& audience, bool include_email, Options opts = {});

  ///
  /// Generates an OpenID Connect ID token for a service account.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::GenerateIdTokenRequest,generator/integration_tests/test.proto#L1008}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::GenerateIdTokenResponse,generator/integration_tests/test.proto#L1041}
  ///
  /// [google.test.admin.database.v1.GenerateIdTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1008}
  /// [google.test.admin.database.v1.GenerateIdTokenResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1041}
  ///
  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request, Options opts = {});

  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param log_name  Optional. A default log resource name that is assigned to all log entries
  ///  in `entries` that do not specify a value for `log_name`:
  ///      "projects/[PROJECT_ID]/logs/[LOG_ID]"
  ///      "organizations/[ORGANIZATION_ID]/logs/[LOG_ID]"
  ///      "billingAccounts/[BILLING_ACCOUNT_ID]/logs/[LOG_ID]"
  ///      "folders/[FOLDER_ID]/logs/[LOG_ID]"
  ///  `[LOG_ID]` must be URL-encoded. For example:
  ///      "projects/my-project-id/logs/syslog"
  ///      "organizations/1234567890/logs/cloudresourcemanager.googleapis.com%2Factivity"
  ///  The permission `logging.logEntries.create` is needed on each project,
  ///  organization, billing account, or folder that is receiving new log
  ///  entries, whether the resource is specified in `logName` or in an
  ///  individual log entry. $Test delimiter.
  /// @param labels  Optional. Default labels that are added to the `labels` field of all log
  ///  entries in `entries`. If a log entry already has a label with the same key
  ///  as a label in this parameter, then the log entry's label is not changed.
  ///  See [LogEntry][google.logging.v2.LogEntry]. Test delimiter$
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::WriteLogEntriesResponse,generator/integration_tests/test.proto#L1080}
  ///
  /// [google.test.admin.database.v1.WriteLogEntriesRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1047}
  /// [google.test.admin.database.v1.WriteLogEntriesResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1080}
  ///
  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(std::string const& log_name, std::map<std::string, std::string> const& labels, Options opts = {});

  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::WriteLogEntriesRequest,generator/integration_tests/test.proto#L1047}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::WriteLogEntriesResponse,generator/integration_tests/test.proto#L1080}
  ///
  /// [google.test.admin.database.v1.WriteLogEntriesRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1047}
  /// [google.test.admin.database.v1.WriteLogEntriesResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1080}
  ///
  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request, Options opts = {});

  ///
  /// Lists the logs in projects, organizations, folders, or billing accounts.
  /// Only logs that have entries are listed.
  ///
  /// @param parent  Required. The resource name that owns the logs:
  ///      "projects/[PROJECT_ID]"
  ///      "organizations/[ORGANIZATION_ID]"
  ///      "billingAccounts/[BILLING_ACCOUNT_ID]"
  ///      "folders/[FOLDER_ID]"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return std::string
  ///
  /// [google.test.admin.database.v1.ListLogsRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1083}
  ///
  StreamRange<std::string>
  ListLogs(std::string const& parent, Options opts = {});

  ///
  /// Lists the logs in projects, organizations, folders, or billing accounts.
  /// Only logs that have entries are listed.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::ListLogsRequest,generator/integration_tests/test.proto#L1083}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return std::string
  ///
  /// [google.test.admin.database.v1.ListLogsRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1083}
  ///
  StreamRange<std::string>
  ListLogs(google::test::admin::database::v1::ListLogsRequest request, Options opts = {});

  ///
  /// Lists every [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey] for a service account.
  ///
  /// @param name  Required. The resource name of the service account in the following format:
  ///  `projects/{PROJECT_ID}/serviceAccounts/{ACCOUNT}`.
  ///  Using `-` as a wildcard for the `PROJECT_ID`, will infer the project from
  ///  the account. The `ACCOUNT` value can be the `email` address or the
  ///  `unique_id` of the service account.
  /// @param key_types  Filters the types of keys the user wants to include in the list
  ///  response. Duplicate key types are not allowed. If no key type
  ///  is provided, all keys are returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::ListServiceAccountKeysResponse,generator/integration_tests/test.proto#L1341}
  ///
  /// [google.test.admin.database.v1.ListServiceAccountKeysRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1309}
  /// [google.test.admin.database.v1.ListServiceAccountKeysResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1341}
  ///
  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(std::string const& name, std::vector<google::test::admin::database::v1::ListServiceAccountKeysRequest::KeyType> const& key_types, Options opts = {});

  ///
  /// Lists every [ServiceAccountKey][google.iam.admin.v1.ServiceAccountKey] for a service account.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::ListServiceAccountKeysRequest,generator/integration_tests/test.proto#L1309}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::ListServiceAccountKeysResponse,generator/integration_tests/test.proto#L1341}
  ///
  /// [google.test.admin.database.v1.ListServiceAccountKeysRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1309}
  /// [google.test.admin.database.v1.ListServiceAccountKeysResponse]: @googleapis_reference_link{generator/integration_tests/test.proto#L1341}
  ///
  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request, Options opts = {});

  ///
  /// Does Nothing.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.protobuf.Empty]: @googleapis_reference_link{google/protobuf/empty.proto#L51}
  ///
  Status
  DoNothing(Options opts = {});

  ///
  /// Does Nothing.
  ///
  /// @param request @googleapis_link{google::protobuf::Empty,google/protobuf/empty.proto#L51}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.protobuf.Empty]: @googleapis_reference_link{google/protobuf/empty.proto#L51}
  ///
  Status
  DoNothing(google::protobuf::Empty const& request, Options opts = {});

  ///
  /// A deprecated RPC for which we force API generation.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.test.admin.database.v1.GenerateAccessTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L959}
  ///
  Status
  Deprecated2(Options opts = {});

  ///
  /// A deprecated RPC for which we force API generation.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::GenerateAccessTokenRequest,generator/integration_tests/test.proto#L959}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.test.admin.database.v1.GenerateAccessTokenRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L959}
  ///
  Status
  Deprecated2(google::test::admin::database::v1::GenerateAccessTokenRequest const& request, Options opts = {});

  ///
  /// Tests the generator for streaming read RPCs (aka server-side streaming)
  ///
  /// @param stream  A placeholder to test method signatures
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::Response,generator/integration_tests/test.proto#L954}
  ///
  /// [google.test.admin.database.v1.Request]: @googleapis_reference_link{generator/integration_tests/test.proto#L948}
  /// [google.test.admin.database.v1.Response]: @googleapis_reference_link{generator/integration_tests/test.proto#L954}
  ///
  StreamRange<google::test::admin::database::v1::Response>
  StreamingRead(std::string const& stream, Options opts = {});

  ///
  /// Tests the generator for streaming read RPCs (aka server-side streaming)
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::Request,generator/integration_tests/test.proto#L948}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return @googleapis_link{google::test::admin::database::v1::Response,generator/integration_tests/test.proto#L954}
  ///
  /// [google.test.admin.database.v1.Request]: @googleapis_reference_link{generator/integration_tests/test.proto#L948}
  /// [google.test.admin.database.v1.Response]: @googleapis_reference_link{generator/integration_tests/test.proto#L954}
  ///
  StreamRange<google::test::admin::database::v1::Response>
  StreamingRead(google::test::admin::database::v1::Request const& request, Options opts = {});

  ///
  /// Tests the generator for streaming read-write RPCs (aka bidir streaming)
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A bidirectional streaming interface with request (write) type: @googleapis_link{google::test::admin::database::v1::Request,generator/integration_tests/test.proto#L948} and response (read) type: @googleapis_link{google::test::admin::database::v1::Response,generator/integration_tests/test.proto#L954}
  ///
  /// [google.test.admin.database.v1.Request]: @googleapis_reference_link{generator/integration_tests/test.proto#L948}
  /// [google.test.admin.database.v1.Response]: @googleapis_reference_link{generator/integration_tests/test.proto#L954}
  ///
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  AsyncStreamingReadWrite(Options opts = {});

  ///
  /// An RPC to test that explicit routing headers are supported.
  ///
  /// We copy the most testing example given in the `google.api.routing` proto:
  /// https://github.com/googleapis/googleapis/blob/f46dc249e1987a6bef1a70a371e8288ea4c17481/google/api/routing.proto#L353-L385
  ///
  /// Our integration test should verify that, given the message:
  ///
  ///    {
  ///      table_name: projects/proj_foo/instances/instance_bar/table/table_baz
  ///      app_profile_id: profiles/prof_qux
  ///    }
  ///
  /// ... our metadata decorator sets:
  ///
  ///    x-goog-request-params:
  ///    table_location=instances/instance_bar&routing_id=prof_qux
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::ExplicitRoutingRequest,generator/integration_tests/test.proto#L1348}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.test.admin.database.v1.ExplicitRoutingRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1348}
  ///
  Status
  ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request, Options opts = {});

  ///
  /// We use this RPC to verify the special case where a routing parameter key
  /// does not require a regex in order to match the correct value.
  ///
  /// @param request @googleapis_link{google::test::admin::database::v1::ExplicitRoutingRequest,generator/integration_tests/test.proto#L1348}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.test.admin.database.v1.ExplicitRoutingRequest]: @googleapis_reference_link{generator/integration_tests/test.proto#L1348}
  ///
  Status
  ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request, Options opts = {});

 private:
  std::shared_ptr<GoldenKitchenSinkConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_GOLDEN_KITCHEN_SINK_CLIENT_H
