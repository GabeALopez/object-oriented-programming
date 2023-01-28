#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double sumEven(const double * arr, int size)
{

    //determine if the number is even and then add them to a sum
    double sum = 0.0;
    double hold = 0.0;

    for(int i = 0; i < size; i++)
    {

        hold = arr[i];

        if( fmod(hold, 2.0) == 0)
        {

            sum += hold;            

        }

    }

    return sum;

}

int main()
{
    //asks for user input and uses that input for the function call
    double arr[6] = {0, 0, 0, 0, 0, 0};


    cout << "Please enter six double numbers: ";

    for(int i = 0; i < 6; i++)
    {

        cin >> arr[i];

    }

    
    cout << "The sum of values at even locations: " << sumEven(arr, 6) << endl;

    return 0;
}