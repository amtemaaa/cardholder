#pragma once

#include <string>
#include "BasePlasticCard.h"

class BaseBankingCard : public BasePlasticCard {
private:
	std::string ownerName;
	std::string pinCode;
	double balance;

public:
	BaseBankingCard(const std::string& ownerName, double initialBalance);

	std::string getOwnerName() const;
	std::string getPinCode() const;
	double getBalance() const;

	void depositMoney(double amount);
	bool withdrawMoney(double amount);
};