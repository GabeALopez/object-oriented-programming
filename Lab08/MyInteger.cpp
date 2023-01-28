#include <iostream>
#include <string>
#include "MyInteger.h"

using namespace std;

//implmentation of variables
int MyInteger::sumOfIntegers = 0;
int MyInteger::numberOfObjects = 0;
double MyInteger::averageOfIntegers = 0.0;

//implementation of constructor
MyInteger::MyInteger(int pInt)
{

    value = pInt;
    MyInteger::numberOfObjects++;
    MyInteger::sumOfIntegers += value;
    MyInteger::averageOfIntegers = ((double) MyInteger::sumOfIntegers)/MyInteger::numberOfObjects;

}

//getter
const int MyInteger::getInt()
{

    return value;

}

//implementation if class value is even
const bool MyInteger::isEven()
{

    return value % 2 == 0 ? true : false;

}

//determines whether the integer is odd (implementation)
bool MyInteger::isOdd(int pInt)
{

    return pInt % 2 != 0 ? true : false;

}

//implementation of equals functions
const bool MyInteger::equals(int pInt)
{

    return value == pInt ? true : false;

}

const bool MyInteger::equals(const MyInteger &myInt)
{

    return value == myInt.value ? true : false;

}

//implementation of getting average
int MyInteger::getAverageOfIntegers()
{

    return averageOfIntegers;

}
