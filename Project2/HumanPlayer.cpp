#include <iostream>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(string n) : Player(n) {
}

void HumanPlayer::playTurn(Deck &deck) {
    char choice;
    do {
        cout << "Hit (h) or Stand (s): ";
        cin >> choice;
        if(choice == 'h') {
            addCard(deck.deal());
            cout << "New Hand: " << endl;
            for(int i = 0; i < hand.getCount(); i++) {
                Card c = hand.getCard(i);
                cout << c.getName() << " (" << c.getValue() << ")" << endl;
            }
        }
    } while(choice != 's' && getTotal() <= 21);
}
