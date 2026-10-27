#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BasePlasticCard.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    BasePlasticCard card;

    cout << "Card number: " << card.getCardNumber() << endl;
    cout << "CVC: " << card.getCVC() << endl;

    return 0;
}
