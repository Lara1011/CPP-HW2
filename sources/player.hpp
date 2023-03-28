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
        //Player() {};

        Player(const string name);

        string getName();

        void setName(string name);

        int stacksize();

        int cardesTaken();

        void updateCards(int numOfCards);

        void decreaseCards();

    };
}

#endif //CPP_HW2_PLAYER_H
