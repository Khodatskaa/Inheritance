#include "Parrot.h"
#include <iostream>

Parrot::Parrot(const string& name, const string& color) : Pet(name), color(color) {}

void Parrot::makeSound() const {
    cout << "Squawk! Squawk!" << endl;
}

void Parrot::displayInfo() const {
    Pet::displayInfo();
    cout << "Color: " << color << endl;
}
