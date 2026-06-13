/* 
 
File:   main.cpp
Author: Fraser Barrett.
Created on June 12, 2026, 8:59 PM
Purpose: */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
using namespace std;

//Execution Begins here
int main(int argc, char** argv) {
    Deck deck;
    deck.shuffle();

    Hand player;
    player.addCard(deck.deal());
    player.addCard(deck.deal());

    for(int i = 0; i < player.getCount(); i++) {
        Card c = player.getCard(i);
        cout << c.getName() << " (" << c.getValue() << ")" << endl;
    }
    cout << "Total: " << player.getTotal() << endl;
    return 0;
}
