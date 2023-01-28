#pragma once
#include "Package.h"
#include <iostream>

using namespace std;

class TwoDayPackage : public Package
{

    private:
    //variable initialization
    double flatFee;

    public:
    //constructor, setter, cost, and package info
    TwoDayPackage(const string& pName, const string& pAddress, const string& pCity, const string& pState, int pZIP, double pWeight, double pCostPerOunce, double pFlatFee);
    void setFlatFee(double pFlatFee);
    double calculateCost();
    void printPackageInfo();



   

};