#ifndef HAND_H
#define Hand_H
#include "Card.h"
#include <string>
using namespace std;

class Hand {
    private:
        Card cards[12];     //Array of Card objects
        int nCards;         //Number of cards in hand
        int total;         //Total value of hand
        int aces;            //Number of aces in hand
    public:
        Hand();
        void addCard(Card c);   //Recieve dealt card and update totals
        int getTotal();
        int getCount();
        Card getCard(int i);
};
#endif
