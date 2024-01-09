#include "Passport.h"

Passport::Passport(const string& name, const string& passportNumber) {
	this->name = name;
	this->passportNumber = passportNumber;
}

string Passport::getName() const {
	return name;
}

string Passport::getPassportNumber() const {
	return passportNumber;
}
