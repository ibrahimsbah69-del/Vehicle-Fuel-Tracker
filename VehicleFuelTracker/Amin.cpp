#include <iostream>
#include "Admin.h"

using namespace std;

bool Admin::login()
{
    string username;

    cout << "Username: ";
    cin >> username;

    if(username == "admin")
    {
        return true;
    }

    return false;
}
