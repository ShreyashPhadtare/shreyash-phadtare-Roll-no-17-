#include <iostream>
#include <string>
using namespace std;

class car{
public:
    string model;
    float mileage;
    string brand;
}c[3];

int main()
{
    car C1;
        C1.model="X3";
    cout<< C1.model;
        C1.mileage = 15.6;
    cout<<C1.mileage;
        C1.brand = "BMW";
    cout<<C1.brand;

    return 0;
}