#include "OverNightPackage.h"
#include <iostream>

using namespace std;

//setters
OverNightPackage::OverNightPackage(const string& pName, const string& pAddress, const string& pCity, const string& pState, int pZIP, double pWeight, double pCostPerOunce, double pExtraFeePerOunce) : Package(pName, pAddress, pCity, pState, pZIP, pWeight, pCostPerOunce)
{

    setExtraFeePerOunce(pExtraFeePerOunce);

}

        
void OverNightPackage::setExtraFeePerOunce(double pExtraFeePerOunce)
{

  extraFeePerOunce = pExtraFeePerOunce;  

}

//return cost
double OverNightPackage::calculateCost()
{

    return (weight*costPerOunce)+extraFeePerOunce;

}

//print package info
void OverNightPackage::printPackageInfo()
{

   cout << 
   "------------------------------" << endl << endl <<
   "Overnight Package " << ID << ": " << endl << endl <<
   name << endl <<
   city << ", " << state << ", " << ZIP << endl << endl <<
   "Cost: $" << calculateCost() << endl <<
   "------------------------------"; 

}




