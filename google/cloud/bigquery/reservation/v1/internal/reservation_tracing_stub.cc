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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/reservation/v1/internal/reservation_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigquery_reservation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReservationServiceTracingStub::ReservationServiceTracingStub(
    std::shared_ptr<ReservationServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "CreateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateReservation(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
ReservationServiceTracingStub::ListReservations(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "ListReservations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListReservations(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::GetReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetReservation(context, request));
}

Status ReservationServiceTracingStub::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "DeleteReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteReservation(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "UpdateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateReservation(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::CreateCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "CreateCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCapacityCommitment(context, request));
}

StatusOr<
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
ReservationServiceTracingStub::ListCapacityCommitments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "ListCapacityCommitments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCapacityCommitments(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::GetCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "GetCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCapacityCommitment(context, request));
}

Status ReservationServiceTracingStub::DeleteCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "DeleteCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteCapacityCommitment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::UpdateCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "UpdateCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCapacityCommitment(context, request));
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
ReservationServiceTracingStub::SplitCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "SplitCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SplitCapacityCommitment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::MergeCapacityCommitments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "MergeCapacityCommitments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MergeCapacityCommitments(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::CreateAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "CreateAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateAssignment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
ReservationServiceTracingStub::ListAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "ListAssignments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAssignments(context, request));
}

Status ReservationServiceTracingStub::DeleteAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "DeleteAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAssignment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
ReservationServiceTracingStub::SearchAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "SearchAssignments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchAssignments(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
ReservationServiceTracingStub::SearchAllAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "SearchAllAssignments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchAllAssignments(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::MoveAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "MoveAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MoveAssignment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::UpdateAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "UpdateAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateAssignment(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingStub::GetBiReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "GetBiReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBiReservation(context, request));
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingStub::UpdateBiReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.reservation.v1.ReservationService",
      "UpdateBiReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateBiReservation(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ReservationServiceStub> MakeReservationServiceTracingStub(
    std::shared_ptr<ReservationServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ReservationServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1_internal
}  // namespace cloud
}  // namespace google
