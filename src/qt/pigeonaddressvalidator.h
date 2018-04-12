// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2017 The Bull Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BULL_QT_BULLADDRESSVALIDATOR_H
#define BULL_QT_BULLADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BullAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BullAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Bull address widget validator, checks for a valid bull address.
 */
class BullAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BullAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BULL_QT_BULLADDRESSVALIDATOR_H
