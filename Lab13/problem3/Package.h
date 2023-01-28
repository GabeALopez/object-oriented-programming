#pragma once
#include <string>

using namespace std;

class Package
{

    //variable initialization
    protected:
    string name;
    string address;
    string city;
    string state;
    int ZIP;
    double weight;
    double costPerOunce;
    static int ID;

    public:
    //constructors, setters, calculation, and packageinfo
    Package(const string& Name, const string& Address, const string& City, const string& State, int ZIP, double Weight, double CostPerOunce);
    void setWeight(double pWeight);
    void setCostPerOunce(double pCostPerOunce);
    virtual double calculateCost();
    virtual void printPackageInfo();
    


};