#include <iostream>
#include "Car.h"
#include "Driver.h"
#include "FuelRecord.h"
#include "Report.h"

using namespace std;

int main()
{
    Car car;
    Driver driver;
    FuelRecord fuel;
    Report report;

    int choice;

    do
    {
        cout << "\n========================================";
        cout << "\n VEHICLE FUEL CONSUMPTION TRACKER SYSTEM";
        cout << "\n========================================";

        cout << "\n1. Vehicle Management";
        cout << "\n2. Driver Management";
        cout << "\n3. Fuel Records";
        cout << "\n4. Fuel Consumption Report";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";

        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            int v;
            cout << "\n1. Add Vehicle\n2. Display Vehicle\nChoice: ";
            cin >> v;

            if(v == 1)
            {
                string id, name;
                float fuel, distance;

                cout << "ID: ";
                cin >> id;

                cin.ignore();

                cout << "Name: ";
                getline(cin, name);

                cout << "Fuel: ";
                cin >> fuel;

                cout << "Distance: ";
                cin >> distance;

                car.setVehicle(id, name, fuel, distance);
            }
            else if(v == 2)
            {
                car.display();
            }
            break;
        }

        case 2:
            driver.addDriver();
            driver.showDriver();
            break;

        case 3:
            fuel.addRecord();
            cout << "\nTotal Cost: " << fuel.totalCost() << endl;
            break;

        case 4:
            report.showHeader();
            car.display();
            break;

        case 5:
            cout << "\nExiting System...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
