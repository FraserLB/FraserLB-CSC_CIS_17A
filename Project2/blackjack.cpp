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
#include "Deck.h"
#include "Dealer.h"
#include "HumanPlayer.h"
using namespace std;

//Execution Begins here
int main(int argc, char** argv) {
    Deck deck;
    deck.shuffle();

    HumanPlayer player("Fraser");
    Dealer dealer;

    player.addCard(deck.deal());
    player.addCard(deck.deal());
    dealer.addCard(deck.deal());
    dealer.addCard(deck.deal());

    cout << player.getName() << " starting total: " << player.getTotal() << endl;
    player.playTurn(deck);                 
    cout << "Final total: " << player.getTotal() << endl;

    cout << "Dealer plays..." << endl;
    dealer.playTurn(deck);                  
    cout << "Dealer total: " << dealer.getTotal() << endl;
    return 0;
}
