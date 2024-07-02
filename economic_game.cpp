#include "Bank.h"
//using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    Bank *bank = new Bank;

    bank->addPlayer(0);
    bank->addPlayer(1);
    bank->addPlayer(2);

    bank->getPlayers();
    std::cout << endl;
    std::cout << endl;
    std::cout << endl;

    // Simulate a few turns
    for (int turn = 0; turn < 12; ++turn) {
        bank->processTurn();

        // Example actions
        bank->auctionBuyOffer(0, 5, 60);
        bank->auctionSellOffer(1, 1, 80);

        bank->processAuctions();
        bank->chargeRent(0);
        bank->chargeRent(1);
        bank->chargeRent(2);


        std::cout << endl;
        std::cout << endl;
        std::cout << endl;
        bank->getPlayers();
        std::cout << endl;
        std::cout << endl;

    }

    //return 0;
}