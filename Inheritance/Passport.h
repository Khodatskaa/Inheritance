#ifndef Passport_h
#define Passport_h

#include <iostream>
#include <string>
using namespace std;

class Passport
{
private:
	string name;
	string passportNumber;
public:
	Passport(const string& name, const string& passportNumber);

	string getName() const;
	string getPassportNumber() const;

};

#endif 