#include "BasePlasticCard.h"
#include "CardDataGenerator.h"

BasePlasticCard::BasePlasticCard() {
    cardNumber = CardDataGenerator::GenerateCardNumber();
    cvc = CardDataGenerator::GenerateCVC();
}

std::string BasePlasticCard::getCardNumber() const {
    return cardNumber;
}

std::string BasePlasticCard::getCVC() const {
    return cvc;
}
