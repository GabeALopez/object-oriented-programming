#include <iostream>
#include <string>

using namespace std;

class Circle2D
{

    //initialize variables
    private:

        double x,y, radius;
        static int numberOfCircles;

    public:

    //initialize getters
    double const getX(); 
    double const getY(); 
    double const getRadius();
    int static getNumberOfCircles(); 

    //initialize constructors
    Circle2D(double pX, double pY, double pRadius); 
    Circle2D(const Circle2D & circle); 
    //initialize deconstructor
    ~Circle2D(); 
    //initialize method
    bool const overlaps(const Circle2D& circle); 

};