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
using namespace std;

//User Libraries

//Global Constants only

//Conversions/Math/Physics

//Classes
class Card {
    private:
        string name;
        int value;
    public:
        Card() {
            name = "";
            value = 0;
        }
        Card(string n, int v) {
            name = n;
            value = v;
        }
        //Setters
        string getName() {
            return name;
        }
        int getValue() {
            return value;
        }
        bool operator<(const Card &other) {
            return value < other.value;
        }
        bool operator>(const Card &other) {
            return value > other.value;
        }
        bool operator==(const Card &other) {
            return value == other.value;
        }

};

//Structures

//Enumerations


//Function Prototypes


//Execution Begins here
int main(int argc, char** argv) {
    Card c1("Ace of Spades", 11);
    Card c2("Five of Hearts", 5);
    cout << c1.getName() << " = " << c1.getValue() << endl;
    cout << c2.getName() << " = " << c2.getValue() << endl;
    if (c1 > c2) cout << c1.getName() << " is higher" << endl;
    return 0;
}
