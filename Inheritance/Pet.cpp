#include "Pet.h"

Pet::Pet(const string& name) : name(name) {}

void Pet::displayInfo() const {
	cout << "Name: " << name << endl;
}
