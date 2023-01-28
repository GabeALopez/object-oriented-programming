#include "TwoDayPackage.h"
#include <iostream>
#include <string>

using namespace std;

//implement constructor
TwoDayPackage::TwoDayPackage(const string& pName, const string& pAddress, const string& pCity, const string& pState, int pZIP, double pWeight, double pCostPerOunce, double pFlatFee) : Package(pName, pAddress, pCity, pState, pZIP, pWeight, pCostPerOunce)
{

    setFlatFee(pFlatFee);

}

//implement setter
void TwoDayPackage::setFlatFee(double pFlatFee)
{

    flatFee = pFlatFee;

}

//implement cost
double TwoDayPackage::calculateCost()
{

    return (weight*costPerOunce)+flatFee

}

//implement package info
void TwoDayPackage::printPackageInfo()
{


    cout << 
    "---------------------------------" << endl << endl <<
    "Two Day Package id " << ID << ":" << endl << endl <<
    name << endl << 
    address << endl <<
    city << ", " << state << ", " << ZIP << endl << endl <<
    "Cost: $" << calculateCost() << endl <<
    "---------------------------------";



}