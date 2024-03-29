//
// Created by Lara Abu Hamad on 26/03/2023.
//

#include "player.hpp"
#include <string>
using namespace std;

namespace ariel {
//    Player::Player() {
//        Player::cardsLeft = 26;
//        Player::cardsWon = 0;
//    }

    Player::Player(string name) {
        Player::name = name;
        Player::cardsLeft = 26;
        Player::cardsWon = 0;
        Player::winRate = 0.0;
    }

    string Player::getName() {
        return this->name;
    }

    void Player::setName(string name) {
        this->name = name;
    }

    double Player::getWinRate() {
        return this->winRate;
    }

    void Player::setWinRate(double rate) {
        this->winRate = rate;
    }

    int Player::stacksize() {
        return this->cardsLeft;
    }

    int Player::cardesTaken() {
        return this->cardsWon;
    }

    void Player::updateCards(int numOfCards) {
        this->cardsWon += numOfCards;
    }

    void Player::decreaseCards() {
        this->cardsLeft--;
    }
}