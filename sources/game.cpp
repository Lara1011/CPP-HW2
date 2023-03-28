//
// Created by Lara Abu Hamad on 26/03/2023.
//

#include "game.hpp"
#include "player.hpp"

namespace ariel {
    Game::Game() {
    }

    Game::Game(Player& p1, Player& p2) {
        if(p1.getName().empty() || p2.getName().empty())
            throw invalid_argument("At least one of the players has no name !");
        if(p1.getName() == p2.getName())
            throw invalid_argument("There is only one player !");
        this->p1 = p1;
        this->p2 = p2;
    }

    void Game::playAll() {};

    void Game::playTurn() {};

    void Game::printLastTurn() {}

    void Game::printLog() {}

    void Game::printStats() {}

    void Game::printWiner() {}
}