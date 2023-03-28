//
// Created by Lara Abu Hamad on 26/03/2023.
//

#ifndef CPP_HW2_PLAYER_H
#define CPP_HW2_PLAYER_H
#include <string>
using namespace std;

namespace ariel {
    class Player {
    public:
        string name;
        int cardsLeft;
        int cardsWon;
    public:
        Player() {};

        Player(const string name);

        string getName() {
            return this->name;
        }

        void setName(string name) {
            this->name = name;
        }

        int stacksize() {
            return this->cardsLeft;
        }

        int cardesTaken() {
            return this->cardsWon;
        }

        void updateCards(int numOfCards) {
            this->cardsWon = this->cardsWon + numOfCards;
        }

        void decreaseCards() {
            this->cardsLeft--;
        }

    };
}

#endif //CPP_HW2_PLAYER_H
