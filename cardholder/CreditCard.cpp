#include "CreditCard.h"
#include <iostream>

CreditCard::CreditCard(const std::string& ownerName)
    : BaseBankingCard(ownerName, 100000) {
}

void CreditCard::Service() {
    double fee = getBalance() * 0.02;

    if (withdrawMoney(fee)) {
        std::cout << "Service fee: " << fee << " RUB" << std::endl;
    }
    else {
        std::cout << "Unable to pay service fee." << std::endl;
    }
}