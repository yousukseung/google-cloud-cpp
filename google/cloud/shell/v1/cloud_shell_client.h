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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CLIENT_H

#include "google/cloud/shell/v1/cloud_shell_connection.h"
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
namespace shell_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API for interacting with Google Cloud Shell. Each user of Cloud Shell has at
/// least one environment, which has the ID "default". Environment consists of a
/// Docker image defining what is installed on the environment and a home
/// directory containing the user's data that will remain across sessions.
/// Clients use this API to start and fetch information about their environment,
/// which can then be used to connect to that environment via a separate SSH
/// client.
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
class CloudShellServiceClient {
 public:
  explicit CloudShellServiceClient(
      std::shared_ptr<CloudShellServiceConnection> connection,
      Options opts = {});
  ~CloudShellServiceClient();

  ///@{
  /// @name Copy and move support
  CloudShellServiceClient(CloudShellServiceClient const&) = default;
  CloudShellServiceClient& operator=(CloudShellServiceClient const&) = default;
  CloudShellServiceClient(CloudShellServiceClient&&) = default;
  CloudShellServiceClient& operator=(CloudShellServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudShellServiceClient const& a,
                         CloudShellServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudShellServiceClient const& a,
                         CloudShellServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets an environment. Returns NOT_FOUND if the environment does not exist.
  ///
  /// @param name  Required. Name of the requested resource, for example `users/me/environments/default`
  ///  or `users/someone@example.com/environments/default`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.shell.v1.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.shell.v1.Environment]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L116}
  /// [google.cloud.shell.v1.GetEnvironmentRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L191}
  ///
  // clang-format on
  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets an environment. Returns NOT_FOUND if the environment does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.shell.v1.GetEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.shell.v1.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.shell.v1.Environment]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L116}
  /// [google.cloud.shell.v1.GetEnvironmentRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L191}
  ///
  // clang-format on
  StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts an existing environment, allowing clients to connect to it. The
  /// returned operation will contain an instance of StartEnvironmentMetadata in
  /// its metadata field. Users can wait for the environment to start by polling
  /// this operation via GetOperation. Once the environment has finished starting
  /// and is ready to accept connections, the operation will contain a
  /// StartEnvironmentResponse in its response field.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.shell.v1.StartEnvironmentRequest].
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
  ///     [google.cloud.shell.v1.StartEnvironmentResponse] proto message.
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
  /// [google.cloud.shell.v1.StartEnvironmentRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L216}
  /// [google.cloud.shell.v1.StartEnvironmentResponse]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L303}
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief StartEnvironment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> StartEnvironment(
      NoAwaitTag,
      google::cloud::shell::v1::StartEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief StartEnvironment
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(google::longrunning::Operation const& operation,
                   Options opts = {});

  // clang-format off
  ///
  /// Sends OAuth credentials to a running environment on behalf of a user. When
  /// this completes, the environment will be authorized to run various Google
  /// Cloud command line tools without requiring the user to manually
  /// authenticate.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.shell.v1.AuthorizeEnvironmentRequest].
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
  ///     [google.cloud.shell.v1.AuthorizeEnvironmentResponse] proto message.
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
  /// [google.cloud.shell.v1.AuthorizeEnvironmentRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L234}
  /// [google.cloud.shell.v1.AuthorizeEnvironmentResponse]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L253}
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief AuthorizeEnvironment
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> AuthorizeEnvironment(
      NoAwaitTag,
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief AuthorizeEnvironment
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(google::longrunning::Operation const& operation,
                       Options opts = {});

  // clang-format off
  ///
  /// Adds a public SSH key to an environment, allowing clients with the
  /// corresponding private key to connect to that environment via SSH. If a key
  /// with the same content already exists, this will error with ALREADY_EXISTS.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.shell.v1.AddPublicKeyRequest].
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
  ///     [google.cloud.shell.v1.AddPublicKeyResponse] proto message.
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
  /// [google.cloud.shell.v1.AddPublicKeyRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L310}
  /// [google.cloud.shell.v1.AddPublicKeyResponse]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L326}
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>> AddPublicKey(
      google::cloud::shell::v1::AddPublicKeyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief AddPublicKey
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> AddPublicKey(
      NoAwaitTag, google::cloud::shell::v1::AddPublicKeyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief AddPublicKey
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>> AddPublicKey(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Removes a public SSH key from an environment. Clients will no longer be
  /// able to connect to the environment using the corresponding private key.
  /// If a key with the same content is not present, this will error with
  /// NOT_FOUND.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.shell.v1.RemovePublicKeyRequest].
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
  ///     [google.cloud.shell.v1.RemovePublicKeyResponse] proto message.
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
  /// [google.cloud.shell.v1.RemovePublicKeyRequest]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L339}
  /// [google.cloud.shell.v1.RemovePublicKeyResponse]: @googleapis_reference_link{google/cloud/shell/v1/cloudshell.proto#L350}
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief RemovePublicKey
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> RemovePublicKey(
      NoAwaitTag,
      google::cloud::shell::v1::RemovePublicKeyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief RemovePublicKey
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(google::longrunning::Operation const& operation,
                  Options opts = {});

 private:
  std::shared_ptr<CloudShellServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_V1_CLOUD_SHELL_CLIENT_H
