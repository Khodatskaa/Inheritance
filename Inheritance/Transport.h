#ifndef Transport_h
#define Transport_h

#include <iostream>
#include <string>
using namespace std;

class Transport{
public:
	virtual double calculateTime(int passengers, double distance) const = 0;
	virtual double calculateCost(int passengers, double distance) const = 0;

	virtual double calculateCargoTime(double cargoWeight, double distance) const = 0;
	virtual double calculateCargoCost(double cargoWeight, double distance) const = 0;

	virtual ~Transport() = default;
};

class Car : public Transport {
public:
    double calculateTime(int passengers, double distance) const override;
    double calculateCost(int passengers, double distance) const override;

    double calculateCargoTime(double cargoWeight, double distance) const override;
    double calculateCargoCost(double cargoWeight, double distance) const override;
};

class Bicycle : public Transport {
public:
    double calculateTime(int passengers, double distance) const override;
    double calculateCost(int passengers, double distance) const override;

    double calculateCargoTime(double cargoWeight, double distance) const override;
    double calculateCargoCost(double cargoWeight, double distance) const override;
};

class Cart : public Transport {
public:
    double calculateTime(int passengers, double distance) const override;
    double calculateCost(int passengers, double distance) const override;

    double calculateCargoTime(double cargoWeight, double distance) const override;
    double calculateCargoCost(double cargoWeight, double distance) const override;
};

#endif
