#include "DebitCard.h"

DebitCard::DebitCard(const std::string& ownerName)
    : BaseBankingCard(ownerName, 10000) {
}