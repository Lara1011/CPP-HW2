//
// Created by Lara Abu Hamad on 3/27/23.
//

#ifndef CPP_HW2_CARD_H
#define CPP_HW2_CARD_H
#include <string>

namespace ariel {
    class Card {
    private:
        int value;
        string suit;
    public:
        card(int value, string suit);

        int getValue();

        void setValue(int val);

        string getSuit();

        void setSuit(string s);
    };
}

#endif //CPP_HW2_CARD_H
