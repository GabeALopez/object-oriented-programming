#include <iostream>
#include <string>

using namespace std;

int main()
{

//prints out value of pointer and actual value of number as well as addresses
int num = 5;
int* p = &num;

cout << "The value of the num is " << num << endl;
cout << "The value of the num is " << *p << endl;
cout << "The adress of the num is " << &num << endl;
cout << "The address of the num is " << p << endl;
cout << "The value of the p pointer is " << p << endl;
cout << "The address of the p pointer is " << addressof(p) << endl;

return 0;

}