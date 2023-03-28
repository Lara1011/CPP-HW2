//
// Created by Lara Abu Hamad on 26/03/2023.
//

#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("demo example - Generate"){
    Player p1("Alice");
    Player p2("Bob");

    CHECK(p1.getName() == "Alice");
    CHECK(p2.getName() == "Bob");

    Game game(p1,p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p1.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p1.cardesTaken() == 0);
}

TEST_CASE("demo example - playing first 5 rounds"){
    Player p1("Alice");
    Player p2("Bob");

    CHECK(p1.getName() == "Alice");
    CHECK(p2.getName() == "Bob");

    Game game(p1,p2);
    for (int i=0;i<5;i++) {
        CHECK_NOTHROW(game.playTurn());
    }

    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p1.stacksize() == 21);
    CHECK(p2.stacksize() == 21);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p1.cardesTaken() == 0);

    game.playAll();

    CHECK_NOTHROW(game.printWiner();
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
}

TEST_CASE("player has no name"){
    Player p1("Alice");
    Player p2("");

    CHECK_THROWS(game {p2, p1});

    p2.setName("Bob");
    CHECK_NOTHROW(game {p2, p1});
}

TEST_CASE("printing last turn"){
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);
    CHECK_THROWS(game.printLastTurn());// before playing any round

    game.playTurn();
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p1.cardesTaken() == 1 || p2.cardesTaken() == 1);
    CHECK(p1.stacksize() == 25 || p2.stacksize() == 25)
}

TEST_CASE("checking winner"){
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);
    CHECK_THROWS(game.printWiner()); // before playing any round

    game.playAll();
    CHECK_NOTHROW(game.printWiner());
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 26);
}