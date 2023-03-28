//
// Created by Lara Abu Hamad on 26/03/2023.
//

#include "game.hpp"
#include "player.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

namespace ariel {
//    Game::Game() {
//    }

    Game::Game(Player& player1, Player& player2): p1(player1), p2(player2) {
        if(player1.getName().empty() || player2.getName().empty())
            throw invalid_argument("At least one of the players has no name !");
        if(player1.getName() == player2.getName())
            throw invalid_argument("There is only one player !");
        this->p1 = player1;
        this->p2 = player2;
    }

    void Game::playAll() {}

    void Game::playTurn() {}

    void Game::printLastTurn() {}

    void Game::printLog() {}

    void Game::printStats() {}

    void Game::printWiner() {}
}