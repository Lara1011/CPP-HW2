//
// Created by Lara Abu Hamad on 26/03/2023.
//

#ifndef CPP_HW2_GAME_H
#define CPP_HW2_GAME_H


class Game {
private:
    Player& p1;
    Player& p2;

public:
    Game(){};
    Game(Player& p1, Player& p2);
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};


#endif //CPP_HW2_GAME_H
