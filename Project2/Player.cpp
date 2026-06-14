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

int Player::getCount() {
    return hand.getCount();
}

string Player::getName() {
    return name;
}

Card Player::getCard(int i) {
    return hand.getCard(i);
}
