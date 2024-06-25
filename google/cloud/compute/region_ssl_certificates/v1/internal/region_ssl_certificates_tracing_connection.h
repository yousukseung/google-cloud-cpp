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
// google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_INTERNAL_REGION_SSL_CERTIFICATES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_INTERNAL_REGION_SSL_CERTIFICATES_TRACING_CONNECTION_H

#include "google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_certificates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionSslCertificatesTracingConnection
    : public compute_region_ssl_certificates_v1::
          RegionSslCertificatesConnection {
 public:
  ~RegionSslCertificatesTracingConnection() override = default;

  explicit RegionSslCertificatesTracingConnection(
      std::shared_ptr<
          compute_region_ssl_certificates_v1::RegionSslCertificatesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSslCertificate(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          DeleteSslCertificateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteSslCertificate(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          DeleteSslCertificateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSslCertificate(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::SslCertificate> GetSslCertificate(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          GetSslCertificateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSslCertificate(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          InsertSslCertificateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertSslCertificate(
      ExperimentalTag, NoAwaitTag,
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          InsertSslCertificateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSslCertificate(
      ExperimentalTag,
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::SslCertificate>
  ListRegionSslCertificates(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          ListRegionSslCertificatesRequest request) override;

 private:
  std::shared_ptr<
      compute_region_ssl_certificates_v1::RegionSslCertificatesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<
    compute_region_ssl_certificates_v1::RegionSslCertificatesConnection>
MakeRegionSslCertificatesTracingConnection(
    std::shared_ptr<
        compute_region_ssl_certificates_v1::RegionSslCertificatesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_certificates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_INTERNAL_REGION_SSL_CERTIFICATES_TRACING_CONNECTION_H
