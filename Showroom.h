#ifndef SHOWROOM_H
#define SHOWROOM_H

#include <vector>
#include "Vehicle.cpp"
using namespace std;

class Showroom {

private:
    string name;
    vector<Vehicle> inventory;
    unsigned int capacity;

public:
    Showroom();
    Showroom(string name, unsigned int capacity);
    vector<Vehicle> GetVehicleList();
    string GetName();
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
};

#endif
