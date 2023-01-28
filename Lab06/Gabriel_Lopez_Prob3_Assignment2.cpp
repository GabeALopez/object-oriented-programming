#include <iostream>
#include <string>
#include <map>

using namespace std;

void count(const string & s)
{
    //create dictionary to store characters from string 
    map<char,int> dict;
    string str = "abcdefghijklmnopqrstuvwxyz";

    //iterate through string to count up characters
    for(char c : s)
    {
        if(isalpha(c))
        {

         dict[tolower(c)] += 1;


        }



    }

    //iterate through dictionary to produce the number of a type of character
    for(char c : str)
    {
        if(dict[c] != 0)
        {

        cout << c << ": " << dict[c] << " times" << endl;

        }

    }

}

int main()
{

    string str = "";

    //enter output
    cout << "Enter a string: " << endl; 
    getline(cin, str);

    //output the number of a type of charcter in string
    count(str);

    return 0;
    
}