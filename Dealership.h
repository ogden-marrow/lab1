#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include "Showroom.cpp"
using namespace std;

class Dealership {
private:
    string name;
    vector<Showroom> dealershipInventory;
    unsigned int capacity;

public:
    Dealership();
    Dealership(string name, unsigned int capacity);
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();
};

#endif
