#pragma once

#include "BasePassKey.h"

class Ticket : public BasePassKey {
private:
    double balance;

public:
    Ticket(
        const std::string& ownerId,
        const std::string& fullName,
        const std::string& organization,
        double initialBalance
    );

    double getBalance() const;

    void Pass() override;
};
