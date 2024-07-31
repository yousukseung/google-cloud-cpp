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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_H

#include "google/cloud/speech/v2/internal/speech_retry_traits.h"
#include "google/cloud/speech/v2/speech_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/speech/v2/cloud_speech.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace speech_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SpeechConnection`.
class SpeechRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SpeechRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SpeechConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SpeechLimitedErrorCountRetryPolicy : public SpeechRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SpeechLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SpeechLimitedErrorCountRetryPolicy(
      SpeechLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SpeechLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  SpeechLimitedErrorCountRetryPolicy(
      SpeechLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SpeechLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SpeechRetryPolicy> clone() const override {
    return std::make_unique<SpeechLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SpeechRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      speech_v2_internal::SpeechRetryTraits>
      impl_;
};

/**
 * A retry policy for `SpeechConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SpeechLimitedTimeRetryPolicy : public SpeechRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit SpeechLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SpeechLimitedTimeRetryPolicy(SpeechLimitedTimeRetryPolicy&& rhs) noexcept
      : SpeechLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SpeechLimitedTimeRetryPolicy(SpeechLimitedTimeRetryPolicy const& rhs) noexcept
      : SpeechLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SpeechRetryPolicy> clone() const override {
    return std::make_unique<SpeechLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SpeechRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      speech_v2_internal::SpeechRetryTraits>
      impl_;
};

/**
 * The `SpeechConnection` object for `SpeechClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SpeechClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SpeechClient`.
 *
 * To create a concrete instance, see `MakeSpeechConnection()`.
 *
 * For mocking, see `speech_v2_mocks::MockSpeechConnection`.
 */
class SpeechConnection {
 public:
  virtual ~SpeechConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  CreateRecognizer(
      google::cloud::speech::v2::CreateRecognizerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::CreateRecognizerRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  CreateRecognizer(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::speech::v2::Recognizer> ListRecognizers(
      google::cloud::speech::v2::ListRecognizersRequest request);

  virtual StatusOr<google::cloud::speech::v2::Recognizer> GetRecognizer(
      google::cloud::speech::v2::GetRecognizerRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  UpdateRecognizer(
      google::cloud::speech::v2::UpdateRecognizerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  UpdateRecognizer(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  DeleteRecognizer(
      google::cloud::speech::v2::DeleteRecognizerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  DeleteRecognizer(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  UndeleteRecognizer(
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UndeleteRecognizer(
      NoAwaitTag,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::Recognizer>>
  UndeleteRecognizer(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::speech::v2::RecognizeResponse> Recognize(
      google::cloud::speech::v2::RecognizeRequest const& request);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>>
  AsyncStreamingRecognize();

  virtual future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
  BatchRecognize(
      google::cloud::speech::v2::BatchRecognizeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> BatchRecognize(
      NoAwaitTag,
      google::cloud::speech::v2::BatchRecognizeRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
  BatchRecognize(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::speech::v2::Config> GetConfig(
      google::cloud::speech::v2::GetConfigRequest const& request);

  virtual StatusOr<google::cloud::speech::v2::Config> UpdateConfig(
      google::cloud::speech::v2::UpdateConfigRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  CreateCustomClass(
      google::cloud::speech::v2::CreateCustomClassRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::CreateCustomClassRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  CreateCustomClass(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::speech::v2::CustomClass> ListCustomClasses(
      google::cloud::speech::v2::ListCustomClassesRequest request);

  virtual StatusOr<google::cloud::speech::v2::CustomClass> GetCustomClass(
      google::cloud::speech::v2::GetCustomClassRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  UpdateCustomClass(
      google::cloud::speech::v2::UpdateCustomClassRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  UpdateCustomClass(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  DeleteCustomClass(
      google::cloud::speech::v2::DeleteCustomClassRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  DeleteCustomClass(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  UndeleteCustomClass(
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UndeleteCustomClass(
      NoAwaitTag,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::CustomClass>>
  UndeleteCustomClass(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  CreatePhraseSet(
      google::cloud::speech::v2::CreatePhraseSetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreatePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  CreatePhraseSet(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::speech::v2::PhraseSet> ListPhraseSets(
      google::cloud::speech::v2::ListPhraseSetsRequest request);

  virtual StatusOr<google::cloud::speech::v2::PhraseSet> GetPhraseSet(
      google::cloud::speech::v2::GetPhraseSetRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  UpdatePhraseSet(
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdatePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  UpdatePhraseSet(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  DeletePhraseSet(
      google::cloud::speech::v2::DeletePhraseSetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeletePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  DeletePhraseSet(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  UndeletePhraseSet(
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UndeletePhraseSet(
      NoAwaitTag,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request);

  virtual future<StatusOr<google::cloud::speech::v2::PhraseSet>>
  UndeletePhraseSet(google::longrunning::Operation const& operation);
};

/**
 * A factory function to construct an object of type `SpeechConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SpeechClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SpeechConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::speech_v2::SpeechPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `SpeechConnection` created by
 * this function.
 */
std::shared_ptr<SpeechConnection> MakeSpeechConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<SpeechConnection> MakeSpeechConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_H
