//
// Created by Lara Abu Hamad on 26/03/2023.
//

#ifndef CPP_HW2_GAME_H
#define CPP_HW2_GAME_H
#include "player.hpp"
#include <string>
using namespace std;

namespace ariel {
    class Game {
    private:
        Player& p1;
        Player& p2;

    public:
        //Game() {};

        Game(Player& player1, Player& player2);

        void playTurn();

        void printLastTurn();

        void playAll();

        void printWiner();

        void printLog();

        void printStats();
    };
}

#endif //CPP_HW2_GAME_H
