#include "Dealer.h"

Dealer::Dealer() : Player("Dealer"){}

void Dealer::playTurn(Deck &deck) {
    while(getTotal() < 17) {
        addCard(deck.deal());
    }
}
