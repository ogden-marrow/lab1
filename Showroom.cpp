#include "Showroom.h"
using namespace std;

Showroom::Showroom() {
    name = "Unnamed Showroom";
    capacity = 0;
}

Showroom::Showroom(string _name, unsigned int _capacity) {
    name = _name;
    capacity = _capacity;
}

vector<Vehicle> Showroom::GetVehicleList() {
    return inventory;
}

string Showroom::GetName() {
    return name;
}

void Showroom::AddVehicle(Vehicle v) {
    if (inventory.size() == capacity){
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    }
    else
        inventory.push_back(v);
}

void Showroom::ShowInventory() {
    for (int i = 0; i < inventory.size(); i++) {
        inventory.at(i).Display();
    }
}

float Showroom::GetInventoryValue(){
    unsigned int totalValue = 0;

    for (int i = 0; i < inventory.size(); i++) {
        totalValue += inventory.at(i).GetPrice();
    }
    return totalValue;
}


