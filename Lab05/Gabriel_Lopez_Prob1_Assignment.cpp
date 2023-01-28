#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    int n = 0;

    cout << "Please enter an integer number:" << endl;
    cin >> n; 

    //check for a negative number and output error message if not positive
    if(n > 0)
    {
        //check if number is less than 100, print square root of number otherwise
        if(n < 101)
        {

            //check if number is divisible by 4
            if(n % 4 == 0)
            {

                cout << "The given number (" << n << ") is divisible by 4." << endl;
                cout << "Quotient: " << n/4 << " and the Remainder: " << n % 4 << endl;

            }
            else
            {

                cout << "The given number (" << n << ") is not divisible by 4." << endl;
                cout << "Quotient: " << n/4 << " and the Remainder: " << n % 4 << endl;

            }

        }
        else
        {

            cout << "The entered number is greater than 100 and it's square root is " << sqrt(n) << endl;

        }

    }
    else
    {

        cout << "The program doesn't accept negative numbers" << endl;

    }

    return 0;

}