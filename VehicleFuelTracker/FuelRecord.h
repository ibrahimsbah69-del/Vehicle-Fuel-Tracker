#ifndef FUELRECORD_H
#define FUELRECORD_H

class FuelRecord
{
private:
    float liters;
    float costPerLiter;

public:
    void addRecord();
    float totalCost();
};

#endif
