#include <iostream>
#include <string>
#include <cmath>
#include "Circle2D.h"

using namespace std;

//implement getters
int Circle2D::numberOfCircles = 0;

double const Circle2D::getX()
{

    return x;

}

double const Circle2D::getY()
{

    return y;

}

double const Circle2D::getRadius()
{

    return radius;

}

int Circle2D::getNumberOfCircles()
{

    return numberOfCircles;

}

//implement constructors
Circle2D::Circle2D(double pX, double pY, double pRadius)
{

    x = pX;
    y = pY;
    radius = pRadius;
    numberOfCircles++;

}


Circle2D::Circle2D(const Circle2D& circle)
{

    x = circle.x;
    y = circle.y;
    radius = circle.radius; 
    numberOfCircles++;

}

//implement deconstructor
Circle2D::~Circle2D()
{

   numberOfCircles--; 

}

//implement method
bool const Circle2D::overlaps(const Circle2D& circle)
{

    double distance = sqrt((pow((x-circle.x),2))+(pow(y-circle.y,2)));

    return distance < (radius+circle.radius);

}