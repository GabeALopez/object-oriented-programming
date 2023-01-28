#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    //variable initialization
    int m = 1;
    double f = 0.0;

    //prints out meters and feet column names
    cout << "Meters" << setw(10)<< "Feet" << endl;

    //assigning value to variable for conversion
    f = 3.280;

    //loop iterates up to 15 printing out values
    for (int i = 0; i < 15; i++)
    {

        cout << left << setw(12) << m++ << setprecision(3)<< fixed << f << endl;
    
        f *= 2;

    }


    return 0;

}