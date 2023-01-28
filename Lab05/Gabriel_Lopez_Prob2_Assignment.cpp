#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double n = 0.0;
    double area = 0.0;
    
    //ask user for input
    cout << "Enter the side: " << endl;
    cin >> n;

    //calculate area
    area = (6*pow(n,2))/(4*tan((atan(1)*4)/(6))); 

    //output area
    cout << "The area of the hexagon is " << fixed << setprecision(2) << area << endl;

    return 0;

}