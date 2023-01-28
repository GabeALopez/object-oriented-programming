#include <iostream>
#include <string>
#include "MyInteger.cpp"

using namespace std;

int main()
{

    //print out class average and determine whether number is odd
    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
    cout << "isOdd(3) = " << MyInteger::isOdd(3) << endl;

    //create objects
    MyInteger i1 = MyInteger(9323);
    MyInteger i2 = MyInteger(147);
    MyInteger i3 = MyInteger(9323);

    //using implemented functions
    cout << "i1.isEven() = " << i1.isEven() << endl;
    cout << "i3.equals(843) = " << i3.equals(843) << endl;
    cout << "i1.equals(i3) = " << i1.equals(i3) << endl;
    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

    return 0;

}