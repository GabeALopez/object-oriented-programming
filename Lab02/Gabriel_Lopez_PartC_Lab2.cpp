#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    //variable intialization
    int i = 0;
    int j = 0;

    //prompt user to input value rock, paper, or scissor
    cout << "scissor (0), rock (1), or paper (2): ";
    cin >> i;

    //seed randomization and give computer rock, paper, or scissor
    srand(time(0));    
    j = rand() % 3;

    //check whether or not a tie has happened
    if(i == j)
    {

        switch(i)
        {

            case 0:
                cout << "Both computer and you were scissors. It's a tie" << endl;
            break;
            case 1:
                cout << "Both computer and you were rock. It's a tie" << endl;
            break;
            case 2:
                cout << "Both computer and you were paper. It's a tie" << endl;

        }

    }
    //check for value of player (paper) and check against computer
    else if(i == 2)
    {

        switch(j)
        {

            case 0:
                cout << "computer was scissor and you were paper. Computer wins." << endl;
            break;
            case 1:
                cout << "computer was rock and you were paper. You win." << endl;
            break;

        }

    }
    //again check for value of player (rock) against computer
    else if(i == 1)
    {

        switch(j)
        {

            case 0:
                cout << "computer was scissor and you were rock. You win." << endl;
            break;
            case 2:
                cout << "computer was paper and you were rock. Computer wins." << endl;
            break;

        }

    }
    //once more check value of player (scissor) against computer 
    else if(i == 0)
    {

        switch(j)
        {

            case 1:
                cout << "computer was rock and you were scissor. Computer wins." << endl;
            break;
            case 2:
                cout << "computer was paper and you were scissor. You win." << endl;
            break;

        }

    }
    

    return 0;

}