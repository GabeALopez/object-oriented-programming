#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n = -1;
    int max = 0;
    int count = 0;
    int hold = 0;
    vector<int> vect;

    cout << "Enter numbers: " << endl;

    //loop through input 
    while(n != 0)
    {

        cin >> n; 
        vect.push_back(n);

    }

    //interate through vector and find the max
    for( int n : vect)
    {

       if(n > max)
       {

            max = n;

       } 

    }

    //iterate through vector and find the number occurances
    for(int n : vect) 
    {

       if(n == max)
       {

        count++;

       } 

    }

    //output values
    cout << "The largest number is " << max << endl;
    cout << "The occurrence count of the largest number is " << count << endl;




}