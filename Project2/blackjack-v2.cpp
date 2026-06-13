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
using namespace std;

//Execution Begins here
int main(int argc, char** argv) {
    Card c1("Ace of Spades", 11);
    Card c2("Five of Hearts", 5);
    cout << c1.getName() << " = " << c1.getValue() << endl;
    cout << c2.getName() << " = " << c2.getValue() << endl;
    if (c1 > c2) cout << c1.getName() << " is higher" << endl;
    Deck deck;
    deck.shuffle();
    for(int i = 0; i < 5; i++) {
        Card c = deck.deal();
        cout << c.getName() << " (" << c.getValue() << ")" << endl;
    }
    return 0;
}
