#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& name, const string& passportNumber, const string& visa) : Passport(name, passportNumber) {
	this->visa = visa;
}

string ForeignPassport::getVisa() const {
	return visa;
}
