#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(const string& name, bool hasWhiskers);

    void makeSound() const override;
    void displayInfo() const override;

private:
    bool hasWhiskers;
};

#endif 
