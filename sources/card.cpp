//
// Created by Lara Abu Hamad on 3/27/23.
//

#include "card.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace ariel{
    Card::Card(int value, char suit): value(value), suit(suit) {
        this->value = value;
        this->suit = suit;
    }

    int Card::getValue() {
        return this->value;
    }

    void Card::setValue(int val) {
        this->value = val;
    }

    char Card::getSuit() {
        return this->suit
    }

    void Card::setSuit(char s) {
        this->suit = s;
    }
}