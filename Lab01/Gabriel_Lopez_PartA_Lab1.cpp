#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
  //variable initialization
  double i = 0.0;
  double r = 0.0;
  double sum = 0.0;

  //Final and regular exams
  i = 4;

  //self study and two lectures a week 
  r = 13 * 5;

  //sum up the hours
  sum = 3600 * (r + i);

  //input names
  string firstName = "Gabriel";
  string lastName = "Lopez";

  //print out names and seconds with formatting
  cout << "First Name: " << firstName << endl;
  cout << "Last Name: " << lastName << endl;
  cout << fixed;
  cout << setprecision(0);
  cout << "I am supposed to spend " << sum << " seconds studying c++" << endl;

  return 0;
}
