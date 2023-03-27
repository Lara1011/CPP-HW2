//
// Created by Lara Abu Hamad on 26/03/2023.
//

#include "Game.hpp"
Game::Game() {
}

Game::Game(Player p1, Player &p2) {
    Game::p1 = p1;
    Game::p2 = p2;
}

void Game::playAll() {};
void Game::playTurn() {};
void Game::printLastTurn() {}
void Game::printLog() {}
void Game::printStats() {}
void Game::printWiner() {}