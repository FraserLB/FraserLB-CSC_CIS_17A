#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"

class HumanPlayer : public Player {
    public:
        HumanPlayer(string n);
        void playTurn(Deck &deck);
};
#endif
