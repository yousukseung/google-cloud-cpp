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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_DATASETS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_DATASETS_CLIENT_H

#include "google/cloud/dialogflow_es/conversation_datasets_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Conversation datasets.
///
/// Conversation datasets contain raw conversation files and their
/// customizable metadata that can be used for model training.
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
class ConversationDatasetsClient {
 public:
  explicit ConversationDatasetsClient(
      std::shared_ptr<ConversationDatasetsConnection> connection,
      Options opts = {});
  ~ConversationDatasetsClient();

  ///@{
  /// @name Copy and move support
  ConversationDatasetsClient(ConversationDatasetsClient const&) = default;
  ConversationDatasetsClient& operator=(ConversationDatasetsClient const&) =
      default;
  ConversationDatasetsClient(ConversationDatasetsClient&&) = default;
  ConversationDatasetsClient& operator=(ConversationDatasetsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConversationDatasetsClient const& a,
                         ConversationDatasetsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConversationDatasetsClient const& a,
                         ConversationDatasetsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new conversation dataset.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateConversationDatasetOperationMetadata][google.cloud.dialogflow.v2.CreateConversationDatasetOperationMetadata]
  /// - `response`:
  /// [ConversationDataset][google.cloud.dialogflow.v2.ConversationDataset]
  ///
  /// @param parent  Required. The project to create conversation dataset for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>`
  /// @param conversation_dataset  Required. The conversation dataset to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.v2.ConversationDataset] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.CreateConversationDatasetOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L327}
  /// [google.cloud.dialogflow.v2.CreateConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L205}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(
      std::string const& parent,
      google::cloud::dialogflow::v2::ConversationDataset const&
          conversation_dataset,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConversationDataset
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateConversationDataset(
      NoAwaitTag, std::string const& parent,
      google::cloud::dialogflow::v2::ConversationDataset const&
          conversation_dataset,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new conversation dataset.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateConversationDatasetOperationMetadata][google.cloud.dialogflow.v2.CreateConversationDatasetOperationMetadata]
  /// - `response`:
  /// [ConversationDataset][google.cloud.dialogflow.v2.ConversationDataset]
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateConversationDatasetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.v2.ConversationDataset] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.CreateConversationDatasetOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L327}
  /// [google.cloud.dialogflow.v2.CreateConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L205}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConversationDataset
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateConversationDataset(
      NoAwaitTag,
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateConversationDataset
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(google::longrunning::Operation const& operation,
                            Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified conversation dataset.
  ///
  /// @param name  Required. The conversation dataset to retrieve. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/conversationDatasets/<Conversation Dataset ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.ConversationDataset])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.GetConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L217}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified conversation dataset.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetConversationDatasetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.ConversationDataset])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.GetConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L217}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(
      google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all conversation datasets in the specified
  /// project and location.
  ///
  /// @param parent  Required. The project and location name to list all conversation datasets
  ///  for. Format: `projects/<Project ID>/locations/<Location ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.v2.ConversationDataset], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.ListConversationDatasetsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L231}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
  ListConversationDatasets(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all conversation datasets in the specified
  /// project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListConversationDatasetsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.v2.ConversationDataset], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ConversationDataset]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L170}
  /// [google.cloud.dialogflow.v2.ListConversationDatasetsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L231}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
  ListConversationDatasets(
      google::cloud::dialogflow::v2::ListConversationDatasetsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified conversation dataset.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [DeleteConversationDatasetOperationMetadata][google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata]
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param name  Required. The conversation dataset to delete. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/conversationDatasets/<Conversation Dataset ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L337}
  /// [google.cloud.dialogflow.v2.DeleteConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L262}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConversationDataset
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteConversationDataset(
      NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified conversation dataset.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [DeleteConversationDatasetOperationMetadata][google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata]
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteConversationDatasetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteConversationDatasetOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L337}
  /// [google.cloud.dialogflow.v2.DeleteConversationDatasetRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L262}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConversationDataset
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteConversationDataset(
      NoAwaitTag,
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteConversationDataset
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(google::longrunning::Operation const& operation,
                            Options opts = {});

  // clang-format off
  ///
  /// Import data into the specified conversation dataset. Note that it
  /// is not allowed to import data to a conversation dataset that
  /// already has data in it.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [ImportConversationDataOperationMetadata][google.cloud.dialogflow.v2.ImportConversationDataOperationMetadata]
  /// - `response`:
  /// [ImportConversationDataOperationResponse][google.cloud.dialogflow.v2.ImportConversationDataOperationResponse]
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ImportConversationDataRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.v2.ImportConversationDataOperationResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.ImportConversationDataOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L294}
  /// [google.cloud.dialogflow.v2.ImportConversationDataOperationResponse]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L314}
  /// [google.cloud.dialogflow.v2.ImportConversationDataRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/conversation_dataset.proto#L276}
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
  ImportConversationData(
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ImportConversationData
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> ImportConversationData(
      NoAwaitTag,
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief ImportConversationData
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
  ImportConversationData(google::longrunning::Operation const& operation,
                         Options opts = {});

 private:
  std::shared_ptr<ConversationDatasetsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONVERSATION_DATASETS_CLIENT_H
