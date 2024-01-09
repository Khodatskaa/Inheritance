#include <iostream>
#include "transport.h"

int main() {
    Car car;
    Bicycle bicycle;
    Cart cart;

    double carTime = car.calculateTime(4, 50.0);
    double carCost = car.calculateCost(4, 50.0);

    double bicycleTime = bicycle.calculateTime(1, 20.0);
    double bicycleCost = bicycle.calculateCost(1, 20.0);

    double cartTime = cart.calculateTime(2, 30.0);
    double cartCost = cart.calculateCost(2, 30.0);

    cout << "Car time: " << carTime << endl;
    cout << "Car cost: " << carCost << endl;

    cout << "\nBicycle time: " << bicycleTime << endl;
    cout << "Bicycle cost: " << bicycleCost << endl;

    cout << "\nCart time: " << cartTime << endl;
    cout << "Cart cost: " << cartCost << endl;

    return 0;
}
