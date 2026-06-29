#include "Driver.h"

void Driver::addDriver()
{
    cout << "Driver ID: ";
    cin >> driverID;

    cin.ignore();

    cout << "Driver Name: ";
    getline(cin, driverName);
}

void Driver::showDriver()
{
    cout << "\nDriver ID: " << driverID;
    cout << "\nDriver Name: " << driverName << endl;
}
