// Copyright (c) 2016-2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// Copyright (c) 2014-2018 The Groincoin Core developers
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GROINCOIN_WALLET_TEST_FIXTURE_H
#define GROINCOIN_WALLET_TEST_FIXTURE_H

#include <test/test_groincoin.h>

#include <wallet/wallet.h>

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup: public TestingSetup {
    explicit WalletTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~WalletTestingSetup();

    std::unique_ptr<CWallet> pwalletMain;
};

#endif

