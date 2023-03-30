//
// Created by Lara Abu Hamad on 3/27/23.
//

#ifndef CPP_HW2_CARD_H
#define CPP_HW2_CARD_H

namespace ariel {
    class Card {
    private:
        int value;
        char suit;
    public:
        card(int value, char suit);

        int getValue();

        void setValue(int val);

        char getSuit();

        void setSuit(char s);
    };
}

#endif //CPP_HW2_CARD_H
