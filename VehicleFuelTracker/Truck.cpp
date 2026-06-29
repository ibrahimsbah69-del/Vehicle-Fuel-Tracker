#include "Truck.h"

void Truck::displayReport()
{
    cout << "\n===== TRUCK REPORT =====" << endl;

    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "Vehicle Name: " << vehicleName << endl;
    cout << "Fuel Used: " << fuelUsed << " Liters" << endl;
    cout << "Distance Travelled: "
         << distanceTravelled << " KM" << endl;

    cout << "Fuel Efficiency: "
         << calculateFuelEfficiency()
         << " KM/L" << endl;
}
