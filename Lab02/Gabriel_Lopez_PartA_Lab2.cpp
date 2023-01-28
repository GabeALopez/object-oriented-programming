#include <iostream>
#include <string>

using namespace std;

int getDigit(int n)
{
  //variable initialization
  int sum = 0;
  string strHold = to_string(n);

  //puts the value of the number of digits into sum and returns sum
  sum = strHold.length();

return sum;

}

int main()
{
  //variable initialization
  int n = 0;
  //prompt user for input and use function call
  cout << "Please enter an integer: ";
  cin >> n; 
  cout << "The number of digits in " << n << " is: " << getDigit(n) << endl; 
  

return 0;

}
