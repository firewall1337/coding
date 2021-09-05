#include <iostream>
using namespace std;

//base calss
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};

class fare
{
public:
    fare()
    {
        cout << "Fare of vehicle\n";
    }
};
//first sub class

class car : public vehicle
{
};

class bus : public vehicle, public fare
{
};

int main()
{
    bus obj;
    return 0;
}