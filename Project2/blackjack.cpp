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
#include "BadBet.h"
using namespace std;

//Execution Begins here
int main(int argc, char** argv) {
    //Variable Declarations
    Deck deck;
    deck.shuffle();
    //Initialize player and dealer
    HumanPlayer player("Fraser");
    Dealer dealer;
    //1. Deal two cards to player and dealer
    player.addCard(deck.deal());
    dealer.addCard(deck.deal());
    player.addCard(deck.deal());
    dealer.addCard(deck.deal());
    //2. Show Dealer's hand
    cout << "Dealer shows: " << dealer.getCard(0).getName() << " (" << dealer.getCard(0).getValue() << ")" << endl;
    cout << "Dealers other card is face down." << endl;
    //3. Show players hand
    cout << "Your hand: " << endl;
    for(int i = 0; i < player.getCount(); i++) {
        Card c = player.getCard(i);
        cout << c.getName() << " (" << c.getValue() << ")" << endl;
    }
    cout << "Total: " << player.getTotal() << endl;
    //4. Hit stand loop
    player.playTurn(deck);
    //5. Dealer draws to 17
    dealer.playTurn(deck);
    //Display Dealers hand
    cout << "Dealers full hand: " << endl;
    for(int i = 0; i < dealer.getCount(); i++) {
        cout << dealer.getCard(i).getName() << " (" << dealer.getCard(i).getValue() << ")" << endl;
    }
    cout << "Dealer's total: " << dealer.getTotal() << endl;
 


    
    return 0;
}
