#include "Transport.h"

double Car::calculateTime(int passengers, double distance) const {
	return distance / 60;
}

double Car::calculateCost(int passengers, double distance) const {
	return distance * 0.5;
}

double Car::calculateCargoTime(double cargoWeight, double distance) const {
	return distance / 40;
}

double Car::calculateCargoCost(double cargoWeight, double distance) const {
	return distance * 0.7;
}

double Bicycle::calculateTime(int passengers, double distance) const {
	return distance / 15;
}

double Bicycle::calculateCost(int passengers, double distance) const {
	return 0;
}

double Bicycle::calculateCargoTime(double cargoWeight, double distance) const {
	return distance / 10;
}

double Bicycle::calculateCargoCost(double cargoWeight, double distance) const {
	return 0;
}

double Cart::calculateTime(int passengers, double distance) const {
	return distance / 5;
}

double Cart::calculateCost(int passengers, double distance) const {
	return 0;
}

double Cart::calculateCargoTime(double cargoWeight, double distance) const {
	return distance / 3;
}

double Cart::calculateCargoCost(double cargoWeight, double distance) const {
	return 0;
}
