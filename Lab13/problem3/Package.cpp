#include "Package.h"
#include <iostream>
#include <string>
using P = Package;

using namespace std;

//initialize variable
int Package::ID = 0;

//implementation of constructor
P::Package(const string& pName, const string& pAddress, const string& pCity, const string& pState, int pZIP, double pWeight, double pCostPerOunce)
{

    name = pName;
    address = pAddress;
    city = pCity;
    state = pState;
    ZIP = pZIP;
    weight = pWeight;
    costPerOunce = pCostPerOunce;
    ID++;

}

//initialize setters
void P::setWeight(double pWeight)
{

    weight = pWeight;

}

void P::setCostPerOunce(double pCostPerOunce)
{

    costPerOunce = pCostPerOunce;

}

//return calculation
double P::calculateCost()
{

    return weight*costPerOunce;

}

//print package info
void P::printPackageInfo()
{

    cout << 
    "-------------------------------------------" << endl << endl <<
    "Package id " << ID << endl <<
    name << endl <<
    address << endl <<
    city << " " << state << " " << ZIP << " " << endl << endl <<
    "Cost: $" << calculateCost() << endl <<
    "-------------------------------------------" << endl;

}