#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    Pet(const string& name);

    virtual void makeSound() const = 0;

    virtual void displayInfo() const;

protected:
    string name;
};

#endif 
