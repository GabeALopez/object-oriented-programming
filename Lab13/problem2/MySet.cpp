#include <iostream>
#include "MySet.h"

using namespace std;

//one arg constructor
MySet::MySet(unsigned int pRange)
{

    range = pRange;
    set = new bool[range+1]; 


    for(int i = 0; i < range; i++)
    {

        set[i] = false;

    }

    size = 0;


}

//copy constructor
MySet::MySet(const MySet & pNewSet)
{


    size = pNewSet.size;
    range = pNewSet.range; 

    set = new bool[range+1];
    for(int i = 0; i < range+1; i++)
        set[i] = pNewSet.set[i];


}

MySet::~MySet()
{

   delete[] set; 

}

void MySet::insertElement(int k)
{

    if(k <= range)
    {

        size++;
        set[k] = true;

    }
    else
    {

        cout << "Number out of range" << endl; 

    }

}

void MySet::deleteElement(int k)
{

    if(k <= range)
    {

        size--;
        set[k] = false;

    }
    else
    {

        cout << "Number out of range" << endl;

    }


}

void MySet::printSet()
{

    int hold = 0;
    int hold3 = 0;
    for(int i = 0; i < range; i++)
    {

        hold += set[i];

    }

    if(hold == 0)
    {

        cout << "{ --- }" << endl;

    }
    else
    {
        cout << "{ ";
        for(int i = 0; i < (range+1); i++)
        {

            if(set[i])
            {


                cout << i;
                hold3++;
                (hold3==size) ? cout << "" : cout << ", ";


            }

        }
        cout << " }" << endl;

    }

}

bool MySet::isEqualTo(const MySet & SecondSet)
{

    if(range == SecondSet.range)
    {

        for(int i = 0; i < range; i++)
        {

            if(set[i] != SecondSet.set[i])
            {

                return false;

            }

        }

        return true;

    }
    else
    {

        return false;

    }

}