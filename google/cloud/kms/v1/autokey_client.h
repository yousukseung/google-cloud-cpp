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
// source: google/cloud/kms/v1/autokey.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_AUTOKEY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_AUTOKEY_CLIENT_H

#include "google/cloud/kms/v1/autokey_connection.h"
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
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Provides interfaces for using Cloud KMS Autokey to provision new
/// [CryptoKeys][google.cloud.kms.v1.CryptoKey], ready for Customer Managed
/// Encryption Key (CMEK) use, on-demand. To support certain client tooling,
/// this feature is modeled around a [KeyHandle][google.cloud.kms.v1.KeyHandle]
/// resource: creating a [KeyHandle][google.cloud.kms.v1.KeyHandle] in a
/// resource project and given location triggers Cloud KMS Autokey to provision
/// a [CryptoKey][google.cloud.kms.v1.CryptoKey] in the configured key project
/// and the same location.
///
/// Prior to use in a given resource project,
/// [UpdateAutokeyConfig][google.cloud.kms.v1.AutokeyAdmin.UpdateAutokeyConfig]
/// should have been called on an ancestor folder, setting the key project where
/// Cloud KMS Autokey should create new
/// [CryptoKeys][google.cloud.kms.v1.CryptoKey]. See documentation for
/// additional prerequisites. To check what key project, if any, is currently
/// configured on a resource project's ancestor folder, see
/// [ShowEffectiveAutokeyConfig][google.cloud.kms.v1.AutokeyAdmin.ShowEffectiveAutokeyConfig].
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
/// [google.cloud.kms.v1.KeyHandle]:
/// @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
///
class AutokeyClient {
 public:
  explicit AutokeyClient(std::shared_ptr<AutokeyConnection> connection,
                         Options opts = {});
  ~AutokeyClient();

  ///@{
  /// @name Copy and move support
  AutokeyClient(AutokeyClient const&) = default;
  AutokeyClient& operator=(AutokeyClient const&) = default;
  AutokeyClient(AutokeyClient&&) = default;
  AutokeyClient& operator=(AutokeyClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AutokeyClient const& a, AutokeyClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AutokeyClient const& a, AutokeyClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new [KeyHandle][google.cloud.kms.v1.KeyHandle], triggering the
  /// provisioning of a new [CryptoKey][google.cloud.kms.v1.CryptoKey] for CMEK
  /// use with the given resource type in the configured key project and the same
  /// location. [GetOperation][Operations.GetOperation] should be used to resolve
  /// the resulting long-running operation and get the resulting
  /// [KeyHandle][google.cloud.kms.v1.KeyHandle] and
  /// [CryptoKey][google.cloud.kms.v1.CryptoKey].
  ///
  /// @param parent  Required. Name of the resource project and location to create the
  ///  [KeyHandle][google.cloud.kms.v1.KeyHandle] in, e.g.
  ///  `projects/{PROJECT_ID}/locations/{LOCATION}`.
  /// @param key_handle  Required. [KeyHandle][google.cloud.kms.v1.KeyHandle] to create.
  /// @param key_handle_id  Optional. Id of the [KeyHandle][google.cloud.kms.v1.KeyHandle]. Must be
  ///  unique to the resource project and location. If not provided by the caller,
  ///  a new UUID is used.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.kms.v1.KeyHandle] proto message.
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
  /// [google.cloud.kms.v1.CreateKeyHandleRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L92}
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  ///
  // clang-format on
  future<StatusOr<google::cloud::kms::v1::KeyHandle>> CreateKeyHandle(
      std::string const& parent,
      google::cloud::kms::v1::KeyHandle const& key_handle,
      std::string const& key_handle_id, Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateKeyHandle
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateKeyHandle(
      NoAwaitTag, std::string const& parent,
      google::cloud::kms::v1::KeyHandle const& key_handle,
      std::string const& key_handle_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new [KeyHandle][google.cloud.kms.v1.KeyHandle], triggering the
  /// provisioning of a new [CryptoKey][google.cloud.kms.v1.CryptoKey] for CMEK
  /// use with the given resource type in the configured key project and the same
  /// location. [GetOperation][Operations.GetOperation] should be used to resolve
  /// the resulting long-running operation and get the resulting
  /// [KeyHandle][google.cloud.kms.v1.KeyHandle] and
  /// [CryptoKey][google.cloud.kms.v1.CryptoKey].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.v1.CreateKeyHandleRequest].
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
  ///     [google.cloud.kms.v1.KeyHandle] proto message.
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
  /// [google.cloud.kms.v1.CreateKeyHandleRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L92}
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  ///
  // clang-format on
  future<StatusOr<google::cloud::kms::v1::KeyHandle>> CreateKeyHandle(
      google::cloud::kms::v1::CreateKeyHandleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateKeyHandle
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateKeyHandle(
      NoAwaitTag, google::cloud::kms::v1::CreateKeyHandleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateKeyHandle
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::kms::v1::KeyHandle>> CreateKeyHandle(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Returns the [KeyHandle][google.cloud.kms.v1.KeyHandle].
  ///
  /// @param name  Required. Name of the [KeyHandle][google.cloud.kms.v1.KeyHandle] resource,
  ///  e.g.
  ///  `projects/{PROJECT_ID}/locations/{LOCATION}/keyHandles/{KEY_HANDLE_ID}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.v1.KeyHandle])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.v1.GetKeyHandleRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L113}
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::v1::KeyHandle> GetKeyHandle(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns the [KeyHandle][google.cloud.kms.v1.KeyHandle].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.v1.GetKeyHandleRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.v1.KeyHandle])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.v1.GetKeyHandleRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L113}
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::v1::KeyHandle> GetKeyHandle(
      google::cloud::kms::v1::GetKeyHandleRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists [KeyHandles][google.cloud.kms.v1.KeyHandle].
  ///
  /// @param parent  Required. Name of the resource project and location from which to list
  ///  [KeyHandles][google.cloud.kms.v1.KeyHandle], e.g.
  ///  `projects/{PROJECT_ID}/locations/{LOCATION}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.v1.ListKeyHandlesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  /// [google.cloud.kms.v1.ListKeyHandlesRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L172}
  /// [google.cloud.kms.v1.ListKeyHandlesResponse]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L191}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::v1::ListKeyHandlesResponse> ListKeyHandles(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists [KeyHandles][google.cloud.kms.v1.KeyHandle].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.v1.ListKeyHandlesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.v1.ListKeyHandlesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.v1.KeyHandle]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L127}
  /// [google.cloud.kms.v1.ListKeyHandlesRequest]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L172}
  /// [google.cloud.kms.v1.ListKeyHandlesResponse]: @googleapis_reference_link{google/cloud/kms/v1/autokey.proto#L191}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::v1::ListKeyHandlesResponse> ListKeyHandles(
      google::cloud::kms::v1::ListKeyHandlesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<AutokeyConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_AUTOKEY_CLIENT_H
