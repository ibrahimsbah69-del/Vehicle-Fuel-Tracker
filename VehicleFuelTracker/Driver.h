#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
using namespace std;

class Driver
{
private:
    string driverID;
    string driverName;

public:
    void addDriver();
    void showDriver();
};

#endif
