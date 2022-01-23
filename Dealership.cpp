#include "Dealership.h"
using namespace std;

Dealership::Dealership() {
    name = "Generic Dealership";
    capacity = 0;
}

Dealership::Dealership(string _name, unsigned int _capacity) {
    name = _name;
    capacity = _capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if (dealershipInventory.size() == capacity){
        cout << "Dealership is full! Cannot add another showroom!" << endl;
    }
    else
        dealershipInventory.push_back(s);
}

float Dealership::GetAveragePrice() {
    float totalPrice = 0;
    unsigned int totalVehicles = 0;
    for (int i = 0; i < dealershipInventory.size(); i ++) {
        vector<Vehicle> currentVehicleList = dealershipInventory.at(i).GetVehicleList();
        for (int j = 0; j < currentVehicleList.size(); j++) {
            totalPrice += currentVehicleList.at(j).GetPrice();
        }
        totalVehicles += currentVehicleList.size();
    }
    return totalPrice / totalVehicles;
}

void Dealership::ShowInventory() {
    for (int i = 0; i < dealershipInventory.size(); i ++) {
        Showroom currentShowroom = dealershipInventory.at(i);
        cout << "Vehicles in " << currentShowroom.GetName() << endl;
        currentShowroom.ShowInventory();
    }
}
