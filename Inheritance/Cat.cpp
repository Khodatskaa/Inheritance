#include "Cat.h"
#include <iostream>

Cat::Cat(const string& name, bool hasWhiskers) : Pet(name), hasWhiskers(hasWhiskers) {}

void Cat::makeSound() const {
    cout << "Meow! Meow!" << endl;
}

void Cat::displayInfo() const {
    Pet::displayInfo();
    cout << "Has Whiskers: " << (hasWhiskers ? "Yes" : "No") << endl;
}
