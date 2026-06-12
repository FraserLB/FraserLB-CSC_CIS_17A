#include "Card.h"

Card::Card() {
    name = "";
    value = 0;
}

Card::Card(string n, int v) {
    name = n;
    value = v;
}

string Card::getName() {
    return name;
}

int Card::getValue() {
    return value;
}

bool Card::operator<(const Card & other) {
    return value < other.value;
}

bool Card::operator>(const Card & other) {
    return value > other.value;
}

bool Card::operator==(const Card & other) {
    return value == other.value;
}
