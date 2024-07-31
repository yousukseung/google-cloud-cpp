// Copyright 2023 Google LLC
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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_CONSUMER_PROCUREMENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_CONSUMER_PROCUREMENT_CLIENT_H

#include "google/cloud/commerce/consumer/procurement/v1/consumer_procurement_connection.h"
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
namespace commerce_consumer_procurement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// ConsumerProcurementService allows customers to make purchases of products
/// served by the Cloud Commerce platform.
///
///
/// When purchases are made, the
/// [ConsumerProcurementService][google.cloud.commerce.consumer.procurement.v1.ConsumerProcurementService]
/// programs the appropriate backends, including both Google's own
/// infrastructure, as well as third-party systems, and to enable billing setup
/// for charging for the procured item.
///
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
/// [google.cloud.commerce.consumer.procurement.v1.ConsumerProcurementService]:
/// @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L43}
///
class ConsumerProcurementServiceClient {
 public:
  explicit ConsumerProcurementServiceClient(
      std::shared_ptr<ConsumerProcurementServiceConnection> connection,
      Options opts = {});
  ~ConsumerProcurementServiceClient();

  ///@{
  /// @name Copy and move support
  ConsumerProcurementServiceClient(ConsumerProcurementServiceClient const&) =
      default;
  ConsumerProcurementServiceClient& operator=(
      ConsumerProcurementServiceClient const&) = default;
  ConsumerProcurementServiceClient(ConsumerProcurementServiceClient&&) =
      default;
  ConsumerProcurementServiceClient& operator=(
      ConsumerProcurementServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConsumerProcurementServiceClient const& a,
                         ConsumerProcurementServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConsumerProcurementServiceClient const& a,
                         ConsumerProcurementServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new [Order][google.cloud.commerce.consumer.procurement.v1.Order].
  ///
  /// This API only supports GCP spend-based committed use
  /// discounts specified by GCP documentation.
  ///
  /// The returned long-running operation is in-progress until the backend
  /// completes the creation of the resource. Once completed, the order is
  /// in
  /// [OrderState.ORDER_STATE_ACTIVE][google.cloud.commerce.consumer.procurement.v1.OrderState.ORDER_STATE_ACTIVE].
  /// In case of failure, the order resource will be removed.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.commerce.consumer.procurement.v1.PlaceOrderRequest].
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
  ///     [google.cloud.commerce.consumer.procurement.v1.Order] proto message.
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
  /// [google.cloud.commerce.consumer.procurement.v1.Order]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/order.proto#L109}
  /// [google.cloud.commerce.consumer.procurement.v1.PlaceOrderRequest]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L92}
  ///
  // clang-format on
  future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
  PlaceOrder(google::cloud::commerce::consumer::procurement::v1::
                 PlaceOrderRequest const& request,
             Options opts = {});

  // clang-format off
  ///
  /// @copybrief PlaceOrder
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> PlaceOrder(
      NoAwaitTag,
      google::cloud::commerce::consumer::procurement::v1::
          PlaceOrderRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief PlaceOrder
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>
  PlaceOrder(google::longrunning::Operation const& operation,
             Options opts = {});

  // clang-format off
  ///
  /// Returns the requested
  /// [Order][google.cloud.commerce.consumer.procurement.v1.Order] resource.
  ///
  /// @param name  Required. The name of the order to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.commerce.consumer.procurement.v1.Order])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.commerce.consumer.procurement.v1.GetOrderRequest]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L125}
  /// [google.cloud.commerce.consumer.procurement.v1.Order]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/order.proto#L109}
  ///
  // clang-format on
  StatusOr<google::cloud::commerce::consumer::procurement::v1::Order> GetOrder(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns the requested
  /// [Order][google.cloud.commerce.consumer.procurement.v1.Order] resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.commerce.consumer.procurement.v1.GetOrderRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.commerce.consumer.procurement.v1.Order])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.commerce.consumer.procurement.v1.GetOrderRequest]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L125}
  /// [google.cloud.commerce.consumer.procurement.v1.Order]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/order.proto#L109}
  ///
  // clang-format on
  StatusOr<google::cloud::commerce::consumer::procurement::v1::Order> GetOrder(
      google::cloud::commerce::consumer::procurement::v1::GetOrderRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists [Order][google.cloud.commerce.consumer.procurement.v1.Order]
  /// resources that the user has access to, within the scope of the parent
  /// resource.
  ///
  /// @param parent  Required. The parent resource to query for orders.
  ///  This field has the form `billingAccounts/{billing-account-id}`.
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
  ///     [google.cloud.commerce.consumer.procurement.v1.Order], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.commerce.consumer.procurement.v1.ListOrdersRequest]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L132}
  /// [google.cloud.commerce.consumer.procurement.v1.Order]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/order.proto#L109}
  ///
  // clang-format on
  StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
  ListOrders(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists [Order][google.cloud.commerce.consumer.procurement.v1.Order]
  /// resources that the user has access to, within the scope of the parent
  /// resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.commerce.consumer.procurement.v1.ListOrdersRequest].
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
  ///     [google.cloud.commerce.consumer.procurement.v1.Order], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.commerce.consumer.procurement.v1.ListOrdersRequest]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/procurement_service.proto#L132}
  /// [google.cloud.commerce.consumer.procurement.v1.Order]: @googleapis_reference_link{google/cloud/commerce/consumer/procurement/v1/order.proto#L109}
  ///
  // clang-format on
  StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>
  ListOrders(
      google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
          request,
      Options opts = {});

 private:
  std::shared_ptr<ConsumerProcurementServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_CONSUMER_PROCUREMENT_CLIENT_H
