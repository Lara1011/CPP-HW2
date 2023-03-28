//
// Created by Lara Abu Hamad on 26/03/2023.
//

#ifndef CPP_HW2_PLAYER_H
#define CPP_HW2_PLAYER_H
#include <string>
using namespace std;

namespace ariel {
    class Player {
    private:
        string name;
        int cardsLeft;
        int cardsWon;
        double winRate;
    public:
        //Player() {};

        Player(const string name);

        string getName();

        void setName(string name);

        double getWinRate();

        void setWinRate(double rate);

        int stacksize();

        int cardesTaken();

        void updateCards(int numOfCards);

        void decreaseCards();

    };
}

#endif //CPP_HW2_PLAYER_H
