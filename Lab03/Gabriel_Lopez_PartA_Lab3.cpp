#include <iostream>
#include <string>

using namespace std;

string swapCase(const string & n)
{


    //checks if the char in the string is blank if not change the case otherwise include a space
    char c;
    string strHold2 = "";

    for(int i = 0; i < n.length(); i++)
    {

        if(!isblank(n[i]))
        {

            if(isupper(n[i]))
            {

                c = n[i];
                strHold2 += tolower(c);

            } 
            else
            {

                c = n[i];
                strHold2 += toupper(c);


            }

        }
        else
        {

            strHold2 += ' ';

        }
        


    }

    return strHold2;
}

int main()
{

    //ask user for input
    string strHold = "";

   cout << "Enter a string: "; 
   getline(cin, strHold);

   cout << "The new string is: " << swapCase(strHold) << endl;

    return 0;

}