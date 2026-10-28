#pragma once

#include "BaseBankingCard.h"

class DebitCard : public BaseBankingCard {
public:
    explicit DebitCard(const std::string& ownerName);
};