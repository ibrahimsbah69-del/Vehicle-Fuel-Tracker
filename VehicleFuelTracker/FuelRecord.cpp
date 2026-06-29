#include <iostream>
#include "FuelRecord.h"

using namespace std;

void FuelRecord::addRecord()
{
    cout << "Liters: ";
    cin >> liters;

    cout << "Cost per Liter: ";
    cin >> costPerLiter;
}

float FuelRecord::totalCost()
{
    return liters * costPerLiter;
}
