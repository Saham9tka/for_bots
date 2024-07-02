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
    while(!bank->gameEnd()) {
        bank->processTurn();

        // Example actions
        bank->bankSellOffer();
        bank->bankBuyOffer();
        bank->auctionBuyOffer(1, 2, 200);
        bank->auctionBuyOffer(0, 5, 400);
        //bank->auctionBuyOffer(2, 4, 100);
        
        bank->processAuctions();
        std::cout << endl;
        std::cout << endl;
        std::cout << endl;
        bank->getPlayers();
        std::cout << endl;
        std::cout << endl;

    }

    //return 0;
}