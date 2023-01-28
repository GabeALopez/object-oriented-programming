#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Rectangle2D
{
    private:
    double x,y;
    double width, height;

    public:

    //implementation of getters and setters
    double getX()
    {

        return x;

    }
    void setX(int pX)
    {

        x = pX;

    }

    double getY()
    {

        return x;

    }
    void setY(double pY)
    {

        y = pY;

    }

    double getWidth()
    {

        return width;

    }
    void setWidth(double pWidth)
    {

        width = pWidth;

    }

    double getHeight()
    {

        return height;

    }
    void setHeight(double pHeight)
    {

       height = pHeight; 

    }

    //initialize values if object is empty
    Rectangle2D()
    {

       x = 0.0;
       y = 0.0;
       width = 0.0;
       height = 0.0; 

    }

    //initialize object with preset variables
    Rectangle2D(double pX, double pY, double pWidth, double pHeight)
    {

        x = pX;
        y = pY;
        width = pWidth;
        height = pHeight;

    }

    //determine if point is within rectangle
    const bool contains(double pX, double pY)
    {


        double holdXRight = x + (width/2);
        double holdXLeft = x - (width/2);
        double holdYRight = y + (height/2);
        double holdYLeft = y - (height/2);

        if(pX < holdXRight && holdXLeft < pX)
        {

            if(pY < holdYRight && holdYLeft < pY)
            {

                return true;

            }

        }

        return false;


    }

    //determine if a rectangle is within another rectangle
    const bool contains(const Rectangle2D &r)
    {

        double holdXRight = x + (width/2);
        double holdXLeft = x - (width/2);
        double holdYRight = y + (height/2);
        double holdYLeft = y - (height/2);

        double holdXRight2 = r.x + (r.width/2);
        double holdXLeft2 = r.x - (r.width/2);
        double holdYRight2 = r.y + (r.height/2);
        double holdYLeft2 = r.y - (r.height/2);

        if(holdXRight2 < holdXRight && holdXLeft < holdXLeft2)
        {

            if(holdYRight2 < holdYRight && holdYLeft < holdYLeft2)
            {

                return true;

            }

        }

        return false;

    }

    //determines whether rectangles overlap
    const bool overlaps(const Rectangle2D &r)
    {

        double holdXRight = x + (width/2);
        double holdXLeft = x - (width/2);
        double holdYRight = y + (height/2);
        double holdYLeft = y - (height/2);

        double holdXRight2 = r.x + (r.width/2);
        double holdXLeft2 = r.x - (r.width/2);
        double holdYRight2 = r.y + (r.height/2);
        double holdYLeft2 = r.y - (r.height/2);

        if(holdXRight < holdXRight2 || holdXLeft2 < holdXLeft)
        {

            if(holdYRight < holdYRight2 || holdYLeft2 < holdYLeft)
            {

                return true;

            }

        }

        return false;

    }






};

int main()
{

//initialize class objects and output them
Rectangle2D r1(2, 2, 5.5, 4.9);
Rectangle2D r2(4, 5, 10.5, 3.2);
Rectangle2D r3(3, 5, 2.3, 5.4);

cout << r1.contains(3,3) << endl;
cout << r1.contains(r2) << endl;
cout << r1.overlaps(r3) << endl;

return 0;


}