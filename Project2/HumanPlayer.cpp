#include <iostream>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(string n) : Player(n) {
}

void HumanPlayer::playTurn(Deck &deck) {
    char choice;
    do {
        Card c;
        cout << "Hit (h) or Stand (s): ";
        cin >> choice;
        if(choice == 'h') {
            addCard(deck.deal());
            cout << "New Hand: " << endl;
            for(int i = 0; i < hand.getCount(); i++) {
                c = hand.getCard(i);
                cout << c.getName() << " (" << c.getValue() << ")" << endl;
            }
            cout << "Total: " << getTotal() << endl;
        }
    } while(choice != 's' && getTotal() <= 21);
}
