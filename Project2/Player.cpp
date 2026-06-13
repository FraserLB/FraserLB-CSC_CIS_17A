#include "Player.h"

Player::Player(string n) {
    name = n;
}

void Player::addCard(Card c) {
    hand.addCard(c);
}

int Player::getTotal() {
    return hand.getTotal();
}

string Player::getName() {
    return name;
}
