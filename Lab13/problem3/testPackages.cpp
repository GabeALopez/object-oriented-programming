#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"

using namespace std;

int main()
{
    
    //create package1 and print info
    Package p1("John Smith", "1020 Orange Street", "Lakeland", "FL", 33111, 10.5, 0.4);
    p1.printPackageInfo();

    
    //create package2 and print info
    TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
    p2.printPackageInfo();

    //create package3 and print info
    OverNightPackage p3("Don Kelly", "9 Main St", "Denver", "CO", 666666, 12.25, 0.7, 0.25);
    p3.printPackageInfo();
    

    string str = "Hello World";
    

    cout << str << endl;

    return 0;

}