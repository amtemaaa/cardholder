#include "Ticket.h"
#include <iostream>

Ticket::Ticket(
    const std::string& ownerId,
    const std::string& fullName,
    const std::string& organization,
    double initialBalance
) : BasePassKey(ownerId, fullName, organization) {
    if (initialBalance > 0) {
        balance = initialBalance;
    }
    else {
        balance = 0;
    }
}

double Ticket::getBalance() const {
    return balance;
}

void Ticket::Pass() {
    if (balance >= 75) {
        balance -= 75;

        std::cout << "Pass granted. Remaining balance: "
                  << balance << std::endl;
    }
    else {
        std::cout << "Insufficient balance." << std::endl;
    }
}
