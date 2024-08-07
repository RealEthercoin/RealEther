// Copyright (c) 2014-2019, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include "misc_log_ex.h"

#undef MONERO_DEFAULT_LOG_CATEGORY
#define MONERO_DEFAULT_LOG_CATEGORY "blockchain.hardforks"

const hardfork_t mainnet_hard_forks[] = {
  { 1, 1, 0, 0, 0 },
  { 2, 11, 0, 0, 0 },
  { 3, 21, 0, 0, 0 },
  { 4, 31, 0, 0, 0 },
  { 5, 41, 0, 0, 0 },
  { 6, 51, 0, 0, 0 },
  { 7, 61, 0, 0, 0 },
  { 8, 71, 0, 0, 0 },
  { 9, 81, 0, 0, 0 },
  { 10, 91, 0, 0, 0 },
  { 11, 101, 0, 0, 0 }
};
const size_t num_mainnet_hard_forks = sizeof(mainnet_hard_forks) / sizeof(mainnet_hard_forks[0]);

const hardfork_t testnet_hard_forks[] = {
  { 1, 1, 0, 0, 0 },
  { 2, 11, 0, 0, 0 },
  { 3, 21, 0, 0, 0 },
  { 4, 31, 0, 0, 0 },
  { 5, 41, 0, 0, 0 },
  { 6, 51, 0, 0, 0 },
  { 7, 61, 0, 0, 0 },
  { 8, 71, 0, 0, 0 },
  { 9, 81, 0, 0, 0 },
  { 10, 91, 0, 0, 0 },
  { 11, 101, 0, 0, 0 }
};
const size_t num_testnet_hard_forks = sizeof(testnet_hard_forks) / sizeof(testnet_hard_forks[0]);

const hardfork_t stagenet_hard_forks[] = {
  { 1, 1, 0, 0, 0 },
  { 2, 11, 0, 0, 0 },
  { 3, 21, 0, 0, 0 },
  { 4, 31, 0, 0, 0 },
  { 5, 41, 0, 0, 0 },
  { 6, 51, 0, 0, 0 },
  { 7, 61, 0, 0, 0 },
  { 8, 71, 0, 0, 0 },
  { 9, 81, 0, 0, 0 },
  { 10, 91, 0, 0, 0 },
  { 11, 101, 0, 0, 0 }
};
const size_t num_stagenet_hard_forks = sizeof(stagenet_hard_forks) / sizeof(stagenet_hard_forks[0]);
