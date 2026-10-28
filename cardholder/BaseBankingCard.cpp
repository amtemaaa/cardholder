cstdlib >

BaseBankingCard::BaseBankingCard(
	const std::string& ownerName,
	double initialBalance
) {
	this->ownerName = ownerName;
	balance = initialBalance;

	int pin = rand() % 10000;
	pinCode = std::to_string(pin);

	while (pinCode.length() < 4) {
		pinCode = "0" + pinCode;
	}
}

std::string BaseBankingCard::getOwnerName() const {
	return ownerName;
}

std::string BaseBankingCard::getPinCode() const {
	return pinCode;
}

double BaseBankingCard::getBalance() const {
	return balance;
}

void BaseBankingCard::depositMoney(double amount) {
	if (amount > 0) {
		balance += amount;
	}
}

bool BaseBankingCard::withdrawMoney(double amount) {
	if (amount > 0 && amount <= balance) {
		balance -= amount;
		return true;
	}

	return false;
}