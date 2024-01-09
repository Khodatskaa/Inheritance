#ifndef ForeignPassport_h
#define ForeignPassport_h

#include <iostream>
#include <string>
#include "Passport.h"
using namespace std;

class ForeignPassport : public Passport
{
private:
	string visa;
public:
	ForeignPassport(const string& name, const string& passportNumber, const string& visa);

	string getVisa() const;
};

#endif 
