#include <iostream>
#include <string>
#include "Circle2D.cpp"
#include <cmath>

using namespace std;


int main()
{

    //create pointer object and regular object
    Circle2D *pCir1;
    pCir1 = new Circle2D(2.0, 2.0, 5.5);
    Circle2D cir2 = Circle2D(-6, -3, 1.5);

    //print out values of first two objects
    cout << "pCir1 is created with a center at (" << pCir1->getX() << ", " << pCir1->getY() << ") and radius of " << pCir1->getRadius() << endl; 
    cout << "cir2 is created with center at (" << cir2.getX() << ", " << cir2.getY() << ") and radius of " << cir2.getRadius() << endl;

    //print out number of circle objects
    cout << "Current number of circles is " << Circle2D::getNumberOfCircles() << endl;

    //create new object with copied values of 2nd object
    Circle2D cir3 = Circle2D(cir2);

    //output values of third object
    cout << "cir3 is copied from cir2 with a center at (" << cir3.getX() << ", " << cir3.getY() << ") and radius of " << cir3.getRadius() << endl;

    //print number of circles
    cout << "Current number of circles is " << Circle2D::getNumberOfCircles() << endl;

    //print out if cricles overlap
    cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;
    cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;

    //delete pinter object and print out number of objects left
    delete pCir1;
    cout << "pCir1 is freed.";
    cout << "Current number of circles is " << Circle2D::getNumberOfCircles() << endl;



    return 0;



}