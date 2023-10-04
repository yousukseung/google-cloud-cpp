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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_MOCKS_MOCK_ASYNC_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_MOCKS_MOCK_ASYNC_CONNECTION_H

#include "google/cloud/storage/async_connection.h"
#include "google/cloud/version.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockAsyncConnection : public storage_experimental::AsyncConnection {
 public:
  MOCK_METHOD(Options, options, (), (const, override));
  MOCK_METHOD(future<StatusOr<storage::ObjectMetadata>>, AsyncInsertObject,
              (InsertObjectParams), (override));
  MOCK_METHOD(
      future<StatusOr<
          std::unique_ptr<storage_experimental::AsyncReaderConnection>>>,
      AsyncReadObject, (ReadObjectParams), (override));
  MOCK_METHOD(future<storage_experimental::AsyncReadObjectRangeResponse>,
              AsyncReadObjectRange, (ReadObjectParams), (override));
  MOCK_METHOD(future<StatusOr<storage::ObjectMetadata>>, AsyncComposeObject,
              (ComposeObjectParams), (override));
  MOCK_METHOD(future<Status>, AsyncDeleteObject, (DeleteObjectParams),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_MOCKS_MOCK_ASYNC_CONNECTION_H
