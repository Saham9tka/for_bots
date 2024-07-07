#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "happyaccidentwindow.h"
using namespace std;

class Player {
public:
    string name;
    bool lost;
    int factories;
    int automated_factories;
    int factory_upgrade_month;
    int id;
    int raw_material;
    int products;
    int products_processing;
    int money;
    int credit;
    int insurance_months;
    int repayment;
    int turns_before_credit_end;

    Player(int id) : id(id), raw_material(2), products(2), money(10000), credit(0), insurance_months(0),lost(false),
                    repayment(0), turns_before_credit_end(0), automated_factories(0), factories(2), products_processing(0), factory_upgrade_month(-1)
    { }

    Player() {}

    std::string getInfo() const {
        std::string info = "Информация об игроке " + std::to_string(id) + ":n";
        info += "Сырье: " + std::to_string(raw_material) + "n";
        info += "Обычные фабрики: " + std::to_string(factories) + "n";
        info += "Автоматизированные фабрики: " + std::to_string(automated_factories) + "n";
        info += "Готовая продукция: " + std::to_string(products) + "n";
        info += "Валюта: " + std::to_string(money) + "n";
        info += "Кредит: " + std::to_string(credit) + "n";
        info += "Месяцы до завершения nулучшения фабрики: " + (factory_upgrade_month >= 0 ? std::to_string(factory_upgrade_month) : "не улучшается") + "n";
        return info;
    }
};

class Bank {
private:
    int current_month;
    int raw_materials_for_sale;
    int products_for_sale;
    int raw_material_price;
    int product_price;
    int priority_player_id;

    std::map<int, Player> players;

    std::map<int, std::pair<int, int>> auction_buy_offers; // <player_id, <quantity, price>>
    std::map<int, std::pair<int, int>> auction_sell_offers; // <player_id, <quantity, price>>

public:
    Bank() :current_month(0), raw_materials_for_sale(0), products_for_sale(0), raw_material_price(0), product_price(0), priority_player_id(0) {
        bankSellOffer();
        bankBuyOffer();
    }

    void win(int id) {
        players[id].money = 100000;
    }

    void LoseMoney(int id) {
        players[id].money = -100000;
    }

    int getRaw_material_price() {
        return raw_material_price;
    }

    int getProduct_price() { return product_price}

    int getProducts_for_sale() {return products_for_sale;}

    int getRaw_materials_for_sale() {
        return raw_materials_for_sale;
    }

    int getCurrent_month() {
        return current_month;
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << current_month << "\n";
            file << raw_materials_for_sale << "\n";
            file << products_for_sale << "\n";
            file << raw_material_price << "\n";
            file << product_price << "\n";
            file << priority_player_id << "\n";

            file << players.size() << "\n";
            for (const auto& pair : players) {
                file << pair.first << "\n";
                const Player& player = pair.second;
                file << player.name << "\n";
                file << player.lost << "\n";
                file << player.factories << "\n";
                file << player.automated_factories << "\n";
                file << player.factory_upgrade_month << "\n";
                file << player.id << "\n";
                file << player.raw_material << "\n";
                file << player.products << "\n";
                file << player.products_processing << "\n";
                file << player.money << "\n";
                file << player.credit << "\n";
                file << player.insurance_months << "\n";
                file << player.repayment << "\n";
                file << player.turns_before_credit_end << "\n";
            }

            file << auction_buy_offers.size() << "\n";
            for (const auto& pair : auction_buy_offers) {
                file << pair.first << " " << pair.second.first << " " << pair.second.second << "\n";
            }

            file << auction_sell_offers.size() << "\n";
            for (const auto& pair : auction_sell_offers) {
                file << pair.first << " " << pair.second.first << " " << pair.second.second << "\n";
            }
            file.close();
        } else {
            std::cerr << "Не удалось открыть файл: " << filename << std::endl;
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> current_month;
            file >> raw_materials_for_sale;
            file >> products_for_sale;
            file >> raw_material_price;
            file >> product_price;
            file >> priority_player_id;

            int playerCount;
            file >> playerCount;
            for (int i = 0; i < playerCount; ++i) {
                int playerId;
                file >> playerId;
                Player player;
                file >> player.name;
                file >> player.lost;
                file >> player.factories;
                file >> player.automated_factories;
                file >> player.factory_upgrade_month;
                file >> player.id;
                file >> player.raw_material;
                file >> player.products;
                file >> player.products_processing;
                file >> player.money;
                file >> player.credit;
                file >> player.insurance_months;
                file >> player.repayment;
                file >> player.turns_before_credit_end;
                players[playerId] = player;
            }

            int auctionBuyOfferCount;
            file >> auctionBuyOfferCount;
            for (int i = 0; i < auctionBuyOfferCount; ++i) {
                int playerId, quantity, price;
                file >> playerId >> quantity >> price;
                auction_buy_offers[playerId] = {quantity, price};
 return products_for_sale;
    }

    int getRaw_materials_for_sale() {
        return raw_materials_for_sale;
    }

    int getCurrent_month() {
        return current_month;
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << current_month << "\n";
            file << raw_materials_for_sale << "\n";
            file << products_for_sale << "\n";
            file << raw_material_price << "\n";
            file << product_price << "\n";
            file << priority_player_id << "\n";

            file << players.size() << "\n";
            for (const auto& pair : players) {
                file << pair.first << "\n";
                const Player& player = pair.second;
                file << player.name << "\n";
                file << player.lost << "\n";
                file << player.factories << "\n";
                file << player.automated_factories << "\n";
                file << player.factory_upgrade_month << "\n";
                file << player.id << "\n";
                file << player.raw_material << "\n";
                file << player.products << "\n";
                file << player.products_processing << "\n";
                file << player.money << "\n";
                file << player.credit << "\n";
                file << player.insurance_months << "\n";
                file << player.repayment << "\n";
                file << player.turns_before_credit_end << "\n";
            }

            file << auction_buy_offers.size() << "\n";
            for (const auto& pair : auction_buy_offers) {
                file << pair.first << " " << pair.second.first << " " << pair.second.second << "\n";
            }

            file << auction_sell_offers.size() << "\n";
            for (const auto& pair : auction_sell_offers) {
                file << pair.first << " " << pair.second.first << " " << pair.second.second << "\n";
            }
            file.close();
        } else {
            std::cerr << "Не удалось открыть файл: " << filename << std::endl;
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> current_month;
            file >> raw_materials_for_sale;
            file >> products_for_sale;
            file >> raw_material_price;
            file >> product_price;
            file >> priority_player_id;

            int playerCount;
            file >> playerCount;
            for (int i = 0; i < playerCount; ++i) {
                int playerId;
                file >> playerId;
                Player player;
                file >> player.name;
                file >> player.lost;
                file >> player.factories;
                file >> player.automated_factories;
                file >> player.factory_upgrade_month;
                file >> player.id;
                file >> player.raw_material;
                file >> player.products;
                file >> player.products_processing;
                file >> player.money;
                file >> player.credit;
                file >> player.insurance_months;
                file >> player.repayment;
                file >> player.turns_before_credit_end;
                players[playerId] = player;
            }

            int auctionBuyOfferCount;
            file >> auctionBuyOfferCount;
            for (int i = 0; i < auctionBuyOfferCount; ++i) {
                int playerId, quantity, price;
                file >> playerId >> quantity >> price;
                auction_buy_offers[playerId] = {quantity, price};
< "Не удалось открыть файл: " << filename << std::endl;
        }
    }

    void addPlayer(const Player& player) {
        players[player.id] = player;
    }

    void removePlayer(int playerId) {
        players.erase(playerId);
    }

    Player& getPlayer(int playerId) {
        return players[playerId];
    }

    void setPriorityPlayerId(int playerId) {
        priority_player_id = playerId;
    }

    void increaseCurrentMonth() {
        current_month++;
    }

    void updateFactoryUpgradeMonth(int playerId) {
        if (players[playerId].factory_upgrade_month > 0) {
            players[playerId].factory_upgrade_month--;
        }
    }

    void updateProductsProcessing(int playerId) {
        if (players[playerId].factory_upgrade_month < 0 && players[playerId].products_processing > 0) {
            players[playerId].products_processing--;
            players[playerId].products += players[playerId].factories;
        }
    }

    void updateCredit(int playerId) {
        if (players[playerId].credit > 0) {
            players[playerId].turns_before_credit_end--;
            if (players[playerId].turns_before_credit_end == 0) {
                players[playerId].credit = 0;
                players[playerId].repayment = 0;
            }
        }
    }

    void updateInsurance(int playerId) {
        if (players[playerId].insurance_months > 0) {
            players[playerId].insurance_months--;
        }
    }

    int getRawMaterialsForSale() const {
        return raw_materials_for_sale;
    }

    void setRawMaterialsForSale(int amount) {
        raw_materials_for_sale = amount;
    }

    int getProductsForSale() const {
        return products_for_sale;
    }

    void setProductsForSale(int amount) {
        products_for_sale = amount;
    }

    int getRawMaterialPrice() const {
        return raw_material_price;
    }

    int getProductPrice() const {
        return product_price;
    }

    void setRawMaterialPrice(int price) {
        raw_material_price = price;
    }

    void setProductPrice(int price) {
        product_price = price;
    }

    // Методы для аукциона
    void addBuyOffer(int playerId, int quantity, int price) {
        auction_buy_offers[playerId] = {quantity, price};
    }

    void addSellOffer(int playerId, int quantity, int price) {
        auction_sell_offers[playerId] = {quantity, price};
    }

    void clearBuyOffers() {
        auction_buy_offers.clear();
    }

    void clearSellOffers() {
        auction_sell_offers.clear();
    }

    // Функции для генерации случайных предложений банка
    void bankBuyOffer() {
        // Генерируем случайное количество сырья
        int quantity = rand() % 500 + 100;
        // Генерируем случайную цену в диапазоне 20% от текущей цены сырья
        int price = raw_material_price + (rand() % 21 - 10);
        if (price < 0) {
            price = 0;
        }
        // Устанавливаем предложение банка на покупку
        addBuyOffer(0, quantity, price);
    }

    void bankSellOffer() {
        // Генерируем случайное количество продукции
        int quantity = rand() % 500 + 100;
        // Генерируем случайную цену в диапазоне 20% от текущей цены продукции
        int price = product_price + (rand() % 21 - 10);
        if (price < 0) {
            price = 0;
        }
        // Устанавливаем предложение банка на продажу
        addSellOffer(0, quantity, price);
    }

    void grantCredit(int player_id, int amount) {
        if (players[player_id].credit > 0) {
            cout << "Player " << player_id << " has credit\n";

        }
        else if (players[player_id].money >= amount) {
            players[player_id].credit += amount * 1.1;
            players[player_id].money += amount;
            players[player_id].repayment = players[player_id].credit / 12;
            players[player_id].turns_before_credit_end = 12;
            std::cout << "Player " << player_id << " received a credit of " << amount << " currency. Total credit to repay: " << players[player_id].credit << std::endl;
        }
    }

    void insurancePayment(intaddSellOffer(0, quantity, price);
    }

    void grantCredit(int player_id, int amount) {
        if (players[player_id].credit > 0) {
            cout << "Player " << player_id << " has credit\n";

        }
        else if (players[player_id].money >= amount) {
            players[player_id].credit += amount * 1.1;
            players[player_id].money += amount;
            players[player_id].repayment = players[player_id].credit / 12;
            players[player_id].turns_before_credit_end = 12;
            std::cout << "Player " << player_id << " received a credit of " << amount << " currency. Total credit to repay: " << players[player_id].credit << std::endl;
        }
    }

    void insurancePayment(int player_id) {
        players[player_id].money -= 200;
        players[player_id].insurance_months++;
        std::cout << "Player " << player_id << " paid for insurance. Total insurance months: " << players[player_id].insurance_months << std::endl;
        
    }

    void upgradeFactory(int player_id) {
        if (players[player_id].money >= 1500 && players[player_id].factories > 0) {
            players[player_id].money -= 1500;
            players[player_id].factory_upgrade_month = 9;
            std::cout << "Player " << player_id << " started upgrading a factory. Completion in 9 months." << std::endl;
        }
    }

    void chargeRent(int player_id) {
        int rent = (players[player_id].raw_material * 20) + (players[player_id].products * 40);
        players[player_id].money -= rent;
        std::cout << "Player " << player_id << " paid rent of " << rent << " currency." << std::endl;
        if (players[player_id].money < 0) cout << "Player "<<player_id<<" was unable to pay rent\n";
    }
void botAction(Bank& bank, int botId) {
    Player& bot = bank.getPlayer(botId);

    if (bot.money >= bank.getRaw_material_price() && bank.getRaw_materials_for_sale() > 0) {
        bank.auctionBuyOffer(botId, 1, bank.getRaw_material_price()); // Покупает 1 сырье
    }

    if (bot.products > 0) {
        bank.auctionSellOffer(botId, 1, bank.getProduct_price()); // Продает 1 продукцию
    }

    if (bot.money >= bank.getFactory_price()) {
        bot.money -= bank.getFactory_price();
        bot.factories++;
        cout << "Игрок " << botId << " купил фабрику.\n";
    }
}

    Chance handleRandomEvent(int player_id) {
        srand(time(0));
        int event_chance = rand() % 4;
        if (event_chance == 0) {
            //cout << '\n\n\n' << "RANDOM" << '\n\n\n';
            int event_type = rand() % 5;
            int inheritance = 1000 + rand() % 9000;
            switch (event_type) {
            case 0:
                //std::cout << "Player " << player_id << " has a birthday. Other players must gift them." << std::endl;

                for (auto& player : players) {
                    if (player.second.id != player_id) {
                        if(player.second.insurance_months == 0) {
                            player.second.money -= 100;
                        }
                        players[player_id].money += 100;
                    }
                }

                return Chance::BirthDay;

                break;
            case 1:
                if (players[player_id].insurance_months == 0) {
                    //std::cout << "A factory burned down for player " << player_id << "." << std::endl;
                    players[player_id].factories--;
                    players[player_id].insurance_months=0;
                }

                return Chance::FactoryBurnDown;
                break;
            case 2:
                //std::cout << "Player " << player_id<< " receives inheritance!" << std::endl;
                players[player_id].money += inheritance;
                return Chance::Inheritance;
                break;
            case 3:
                //std::cout << "Player " << player_id << " had an accident!" << std::endl;
                int loss = rand() % (players[player_id].products + 1);
                if(loss > players[player_id].products) loss = players[player_id].products;
                players[player_id].products -= loss;
                players[player_id].insurance_months=0;
                return Chance::Accident;
                break;
            case 4:
                //std::cout << "Player " << player_id << " experienced a storm!" << std::endl;
                int raw_loss = rand() % (players[player_id].raw_material + 1);
                if(raw_loss > players[player_id].raw_material) raw_loss = players[player_id].raw_material;
                players[player_id].raw_material -= raw_loss;
                int product_loss = rand() % (players[player_id].products + 1);
                if(product_loss > players[player_id].products) product_loss = players[player_id].products;
                players[player_id].products -= product_loss;
                players[player_id].insurance_months=0;
                return Chance::Storm;
                break;
            }
        }
        return Chance::None;
    }
};
