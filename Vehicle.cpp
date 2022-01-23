#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
    make = "COP3503";
    model = "Rust Bucket";
    year = 1900;
    price = 0.0f;
    mileage = 0;
}

Vehicle::Vehicle(string _make, string _model, int _year, float _price, int _mileage) {
    make = _make;
    model = _model;
    year = _year;
    price = _price;
    mileage = _mileage;
}

void Vehicle::Display() {
    cout << year << " " << make << " " << model << " " << "$" << price << " " << mileage << endl;
}

string Vehicle::GetYearMakeModel() {
    return to_string(year) + " " + make + " " + model;
}

float Vehicle::GetPrice() {
    return price;
}




