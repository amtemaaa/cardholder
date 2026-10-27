#include <string>

class BasePlasticCard {
protected:
    std::string cardNumber;
    std::string cvc;

public:
    BasePlasticCard();
    virtual ~BasePlasticCard() = default;

    std::string getCardNumber() const;
    std::string getCVC() const;
};
