#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  //variable initialization
  double d = 0.0;
  double mpg = 0.0;
  double ppg = 0.0;
  double sum = 0.0;

  //ask for values from driving distance to price per gallon
  cout << "Enter driving distance: " << endl;
  cin >> d;

  cout << "Enter miles per gallon: " << endl;
  cin >> mpg;

  cout << "Enter price per gallon: " << endl;
  cin >> ppg;

  //multiply variables together
  sum = d * (1/mpg) * ppg;

  //print out sum
  cout << fixed;
  cout << setprecision(2);
  cout << "The cost of driving is " << sum << endl;
}
