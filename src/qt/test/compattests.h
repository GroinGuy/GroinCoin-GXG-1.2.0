// Copyright (c) 2009-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// Copyright (c) 2014-2018 The Groincoin Core developers
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GROINCOIN_QT_TEST_COMPATTESTS_H
#define GROINCOIN_QT_TEST_COMPATTESTS_H

#include <QObject>
#include <QTest>

class CompatTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void bswapTests();
};

#endif // GROINCOIN_QT_TEST_COMPATTESTS_H
