#pragma once
#include "Package.h"
#include <iostream>

using namespace std;

class OverNightPackage : Package
{

    private:

    //variable initilization
    double extraFeePerOunce;


    public:
    //constructor, setter, print package info, and calculate cost
    OverNightPackage(const string& pName, const string& pAddress, const string& pCity, const string& pState, int pZIP, double pWeight, double pCostPerOunce, double pExtraFeePerOunce);
    void setExtraFeePerOunce(double pExtraFeePerOunce);
    void printPackageInfo();
    double calculateCost();
    


};