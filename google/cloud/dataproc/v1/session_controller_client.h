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
// source: google/cloud/dataproc/v1/sessions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_CONTROLLER_CLIENT_H

#include "google/cloud/dataproc/v1/session_controller_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The `SessionController` provides methods to manage interactive sessions.
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
class SessionControllerClient {
 public:
  explicit SessionControllerClient(
      std::shared_ptr<SessionControllerConnection> connection,
      Options opts = {});
  ~SessionControllerClient();

  ///@{
  /// @name Copy and move support
  SessionControllerClient(SessionControllerClient const&) = default;
  SessionControllerClient& operator=(SessionControllerClient const&) = default;
  SessionControllerClient(SessionControllerClient&&) = default;
  SessionControllerClient& operator=(SessionControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SessionControllerClient const& a,
                         SessionControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SessionControllerClient const& a,
                         SessionControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Create an interactive session asynchronously.
  ///
  /// @param parent  Required. The parent resource where this session will be created.
  /// @param session  Required. The interactive session to create.
  /// @param session_id  Required. The ID to use for the session, which becomes the final component
  ///  of the session's resource name.
  ///  @n
  ///  This value must be 4-63 characters. Valid characters
  ///  are /[a-z][0-9]-/.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.CreateSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L98}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> CreateSession(
      std::string const& parent,
      google::cloud::dataproc::v1::Session const& session,
      std::string const& session_id, Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateSession(
      NoAwaitTag, std::string const& parent,
      google::cloud::dataproc::v1::Session const& session,
      std::string const& session_id, Options opts = {});

  // clang-format off
  ///
  /// Create an interactive session asynchronously.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.CreateSessionRequest].
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
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.CreateSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L98}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> CreateSession(
      google::cloud::dataproc::v1::CreateSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateSession(
      NoAwaitTag,
      google::cloud::dataproc::v1::CreateSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateSession
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> CreateSession(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Gets the resource representation for an interactive session.
  ///
  /// @param name  Required. The name of the session to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dataproc.v1.Session])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dataproc.v1.GetSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L133}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  StatusOr<google::cloud::dataproc::v1::Session> GetSession(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets the resource representation for an interactive session.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.GetSessionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dataproc.v1.Session])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dataproc.v1.GetSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L133}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  StatusOr<google::cloud::dataproc::v1::Session> GetSession(
      google::cloud::dataproc::v1::GetSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists interactive sessions.
  ///
  /// @param parent  Required. The parent, which owns this collection of sessions.
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
  ///     [google.cloud.dataproc.v1.Session], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dataproc.v1.ListSessionsRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L144}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  StreamRange<google::cloud::dataproc::v1::Session> ListSessions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists interactive sessions.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.ListSessionsRequest].
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
  ///     [google.cloud.dataproc.v1.Session], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dataproc.v1.ListSessionsRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L144}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  StreamRange<google::cloud::dataproc::v1::Session> ListSessions(
      google::cloud::dataproc::v1::ListSessionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Terminates the interactive session.
  ///
  /// @param name  Required. The name of the session resource to terminate.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  /// [google.cloud.dataproc.v1.TerminateSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L189}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> TerminateSession(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief TerminateSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> TerminateSession(
      NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Terminates the interactive session.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.TerminateSessionRequest].
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
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  /// [google.cloud.dataproc.v1.TerminateSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L189}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> TerminateSession(
      google::cloud::dataproc::v1::TerminateSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief TerminateSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> TerminateSession(
      NoAwaitTag,
      google::cloud::dataproc::v1::TerminateSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief TerminateSession
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> TerminateSession(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Deletes the interactive session resource. If the session is not in terminal
  /// state, it is terminated, and then deleted.
  ///
  /// @param name  Required. The name of the session resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.DeleteSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L212}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> DeleteSession(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteSession(
      NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the interactive session resource. If the session is not in terminal
  /// state, it is terminated, and then deleted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.DeleteSessionRequest].
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
  ///     [google.cloud.dataproc.v1.Session] proto message.
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
  /// [google.cloud.dataproc.v1.DeleteSessionRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L212}
  /// [google.cloud.dataproc.v1.Session]: @googleapis_reference_link{google/cloud/dataproc/v1/sessions.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> DeleteSession(
      google::cloud::dataproc::v1::DeleteSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteSession
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteSession(
      NoAwaitTag,
      google::cloud::dataproc::v1::DeleteSessionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteSession
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Session>> DeleteSession(
      google::longrunning::Operation const& operation, Options opts = {});

 private:
  std::shared_ptr<SessionControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_SESSION_CONTROLLER_CLIENT_H
