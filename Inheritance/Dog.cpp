#include "Dog.h"

Dog::Dog(const string& name, const string& breed) : Pet(name), breed(breed) {}

void Dog::makeSound() const {
	cout << "Woof!" << endl;
}

void Dog::displayInfo() const {
	Pet::displayInfo();
	cout << "Breed: " << breed << endl;
}
