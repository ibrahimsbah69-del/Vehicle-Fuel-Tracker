#include "Vehicle.h"

Vehicle::Vehicle()
{
    vehicleID = "";
    vehicleName = "";
    fuelUsed = 0;
    distanceTravelled = 0;
}

void Vehicle::setVehicle(string id, string name, float fuel, float distance)
{
    vehicleID = id;
    vehicleName = name;
    fuelUsed = fuel;
    distanceTravelled = distance;
}

float Vehicle::calculateEfficiency()
{
    if (fuelUsed == 0)
        return 0;

    return distanceTravelled / fuelUsed;
}

void Vehicle::display()
{
    cout << "\nID: " << vehicleID;
    cout << "\nName: " << vehicleName;
    cout << "\nFuel: " << fuelUsed;
    cout << "\nDistance: " << distanceTravelled;
    cout << "\nEfficiency: " << calculateEfficiency() << " KM/L\n";
}
