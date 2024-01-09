#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"

class Parrot : public Pet {
public:
    Parrot(const string& name, const string& color);

    void makeSound() const override;
    void displayInfo() const override;

private:
   string color;
};

#endif 
