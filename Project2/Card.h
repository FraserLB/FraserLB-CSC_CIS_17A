#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
    private:
        string name;
        int value;
    public:
        Card();
        Card(string n, int v);
        string getName();
        int getValue();
        bool operator<(const Card & other);
        bool operator>(const Card & other);
        bool operator==(const Card & other);
};
#endif
