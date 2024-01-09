#include "ForeignPassport.h"
#include <iostream>

int main() {
    ForeignPassport foreignPassport("John Doe", "123456789", "US Visa");

    cout << "Name: " << foreignPassport.getName() << endl;
    cout << "Passport Number: " << foreignPassport.getPassportNumber() << endl;
    cout << "Visa Data: " << foreignPassport.getVisa() << endl;

    return 0;
}
