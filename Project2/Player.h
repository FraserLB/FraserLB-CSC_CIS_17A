#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Deck.h"
#include "Hand.h"
using namespace std;

class Player {
    protected:
        Hand hand;
        string name;
    public:
        Player(string n);
        virtual void playTurn(Deck &deck) = 0;  //Virtual function
        void addCard(Card c);
        int getTotal();
        int getCount();
        string getName();
        Card getCard(int i);
};

#endif
