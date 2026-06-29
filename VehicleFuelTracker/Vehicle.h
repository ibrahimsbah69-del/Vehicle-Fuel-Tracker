#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string vehicleID;
    string vehicleName;
    float fuelUsed;
    float distanceTravelled;

public:
    Vehicle();

    void setVehicle(string id, string name, float fuel, float distance);

    virtual float calculateEfficiency();
    virtual void display();
};

#endif
