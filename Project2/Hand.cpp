#include <cstdlib>
#include "Hand.h"

Hand::Hand() {
    nCards = 0;
    total = 0;
    aces = 0;
}

void Hand::addCard(Card c) {
    cards[nCards] = c;
    total += c.getValue();
    if(c.getValue() == 11) {
        aces++;
    }
    nCards++;
    if(total > 21 && aces > 0) {
        total -= 10;
        aces--;
    }
}

int Hand::getTotal() {
    return total;
}

int Hand::getCount() {
    return nCards;
}

Card Hand::getCard(int i) {
    return cards[i];
}
