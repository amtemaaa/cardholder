 #pragma once

#include "BaseBankingCard.h"

class CreditCard : public BaseBankingCard {
public:
    explicit CreditCard(const std::string& ownerName);

    void Service();
};