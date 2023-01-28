#include <iostream>
#include <string>

using namespace std;

int evenCount(int value)
{



    //base case 
    if(value / 10 == 0)
    {

        return value % 2 == 0 ? 1 : 0;

    }
    //check whether value by modulus 10 is even. If so output one and add to summ
    else
    {

        return (value % 10 % 2 == 0 ? 1 : 0) + evenCount(value/10);

    }

        




}

int main()
{

    int n = 0;

    //ask for input
    cout << "Enter the number " << endl;
    cin >> n;

    //run recersive function
    cout << "The number of even digits is " << evenCount(n) << endl;


    return 0;

}