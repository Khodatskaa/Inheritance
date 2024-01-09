#ifndef Dog_h
#define Dog_h

#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Dog : public Pet {
public:
    Dog(const string& name, const string& breed);

    void makeSound() const override;
    void displayInfo() const override;
private:
    string breed;
};

#endif
