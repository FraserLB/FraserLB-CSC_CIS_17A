#ifndef DECK_H
#define DECK_H
#include "Card.h"

class Deck {
    private:
        static const int DECK_SIZE = 52;
        Card cards[52];
        int top;
    public:
        Deck();
        void shuffle();
        Card deal();
};
#endif
