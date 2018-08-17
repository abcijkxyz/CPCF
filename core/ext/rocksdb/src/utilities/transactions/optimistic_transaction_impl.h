// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree. An additional grant
// of patent rights can be found in the PATENTS file in the same directory.

#pragma once

#ifndef ROCKSDB_LITE

#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

#include "../../db/write_callback.h"
#include "../../../include/db.h"
#include "../../../include/slice.h"
#include "../../../include/snapshot.h"
#include "../../../include/status.h"
#include "../../../include/types.h"
#include "../../../include/utilities/transaction.h"
#include "../../../include/utilities/optimistic_transaction_db.h"
#include "../../../include/utilities/write_batch_with_index.h"
#include "../../utilities/transactions/transaction_base.h"
#include "../../utilities/transactions/transaction_util.h"

namespace rocksdb {

class OptimisticTransactionImpl : public TransactionBaseImpl {
 public:
  OptimisticTransactionImpl(OptimisticTransactionDB* db,
                            const WriteOptions& write_options,
                            const OptimisticTransactionOptions& txn_options);

  virtual ~OptimisticTransactionImpl();

  void Reinitialize(OptimisticTransactionDB* txn_db,
                    const WriteOptions& write_options,
                    const OptimisticTransactionOptions& txn_options);

  Status Prepare() override;

  Status Commit() override;

  Status Rollback() override;

  Status SetName(const TransactionName& name) override;

 protected:
  Status TryLock(ColumnFamilyHandle* column_family, const Slice& key,
                 bool read_only, bool untracked = false) override;

 private:
  OptimisticTransactionDB* const txn_db_;

  friend class OptimisticTransactionCallback;

  void Initialize(const OptimisticTransactionOptions& txn_options);

  // Returns OK if it is safe to commit this transaction.  Returns Status::Busy
  // if there are read or write conflicts that would prevent us from committing
  // OR if we can not determine whether there would be any such conflicts.
  //
  // Should only be called on writer thread.
  Status CheckTransactionForConflicts(DB* db);

  void Clear() override;

  void UnlockGetForUpdate(ColumnFamilyHandle* column_family,
                          const Slice& key) override {
    // Nothing to unlock.
  }

  // No copying allowed
  OptimisticTransactionImpl(const OptimisticTransactionImpl&);
  void operator=(const OptimisticTransactionImpl&);
};

// Used at commit time to trigger transaction validation
class OptimisticTransactionCallback : public WriteCallback {
 public:
  explicit OptimisticTransactionCallback(OptimisticTransactionImpl* txn)
      : txn_(txn) {}

  Status Callback(DB* db) override {
    return txn_->CheckTransactionForConflicts(db);
  }

  bool AllowWriteBatching() override { return false; }

 private:
  OptimisticTransactionImpl* txn_;
};

}  // namespace rocksdb

#endif  // ROCKSDB_LITE
