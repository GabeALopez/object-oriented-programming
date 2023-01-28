#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "";

    //ask for user input
    cout << "Enter a string: " << endl;
    getline(cin, str); 

    //loop through string and find odd number indecies
    for(int i = 0; i < str.length(); i++)
    {

        if(i % 2 != 0)
        {

           cout << str[i]; 

        }

    }

    return 0;

}