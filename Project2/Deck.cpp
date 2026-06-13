#include <ctime>
#include <cstdlib>
#include "Deck.h"

Deck::Deck() {
    string suits[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                      "Jack", "Queen", "King", "Ace"};
    int values[] = {2,3,4,5,6,7,8,9,10,10,10,10,11};

    int idx = 0;    //Index for count
    for(int s = 0; s < 4; s++) {
        for(int r = 0; r < 13; r++) {
            string flName = ranks[r] + " of " + suits[s];
            cards[idx] = Card(flName, values[r]);
            idx++;
        }
    }
    top = 0;
}

void Deck::shuffle() {
    srand(time(0));
    for(int i = 51; i > 0; i--){
        int j = rand() % (i + 1);
        Card temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
    top = 0;
}

Card Deck::deal() {
    Card dealt = cards[top];
    top++;
    return dealt;
}
