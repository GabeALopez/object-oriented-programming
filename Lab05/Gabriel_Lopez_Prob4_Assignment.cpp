#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n = 0; 
    int sum = 0;

    //ask user input
    cout << "Enter an integer between 0 and 1000000: ";
    cin >> n; 

    //check if n = 0, if so break the loop
    while(true)
    {

        if(n <= 0)
        {

            break;

        }

        sum += n % 10;
        n /= 10;

    }

    //output sum
    cout << "The sume of the digits is: " << sum << endl;

    return 0;

}