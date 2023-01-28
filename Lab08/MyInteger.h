#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <iostream>
#include <string>

using namespace std;

class MyInteger
{
    //initialize variables
    private:
    int value; 
    static double averageOfIntegers;
    static int sumOfIntegers;
    static int numberOfObjects;

    //initialize methods
    public:

    //initialize integer object
    MyInteger(int pint); 

    //getter function
    const int getInt();

    //check whether value is even
    const bool isEven();

    //check whether paramter is odd
    static bool isOdd(int pInt);

    //check whether the paramter value is equal to in class variable
    const bool equals(int pInt);

    //check whether class variable parameter value is equal to in class variable
    const bool equals(const MyInteger &myInt);

    //get the average of all integers
    static int getAverageOfIntegers();



};

#endif