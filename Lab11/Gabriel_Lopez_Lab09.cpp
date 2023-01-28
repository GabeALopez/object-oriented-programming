#include <iostream>
#include <cmath>

using namespace std;

//2D Class Start
class MyPoint {
  //Variable intilization
  protected:
    double x;
    double y;
  public:
    //No-arg constructor
    MyPoint() {
      x = y = 0;
    }
  //Two-arg constructor
  MyPoint(double x, double y) {
    this -> x = x;
    this -> y = y;
  }
  //Getters for x and y
  double getx() const {
    return x;
  }
  double gety() const {
    return y;
  }
  //Setters for x and y
  void setx(double x) {
    this -> x = x;
  }
  void sety(double y) {
    this -> y = y;
  }
  //Distance function to inherited
  virtual double distance(const MyPoint & p2) {
    return sqrt((x - p2.x) * (x - p2.x) + (y - p2.y) * (y - p2.y));
  }
  //insertion and extration operators
  friend istream & operator >> (istream & is, MyPoint & p);
  friend ostream & operator << (ostream & os,
    const MyPoint & p);
};
//Overloaded insertion and extraction operators
istream & operator >> (istream & is, MyPoint & p) {
  cout << "please enter x y: ";
  is >> p.x >> p.y;
  return is;
}
ostream & operator << (ostream & os,
  const MyPoint & p) {
  cout << "(x,y)=" <<
    "(" << p.x << "," << p.y << ")";
  return os;
}

//2D Class End

//3D Class Start


class ThreeDPoint: public MyPoint
{

    private:

      //Variable initialization
        double z;    

    public: 

        //Getter for z variable
        double getZ() const
        {

            return z;

        }

        //No-arg constructor
        ThreeDPoint()
        {

            x, y, z = 0;            

        }

        //Three-arg constructor
        ThreeDPoint(double pX, double pY, double pZ)
        {

            x = pX;
            y = pY;
            z = pZ;

        }

        //distance function that converts MyPoint object to ThreeDPoint object
        double distance(const MyPoint& p) const
        {

            const ThreeDPoint* point = dynamic_cast<const ThreeDPoint*>(&p);
            
            if(point != nullptr)
            {

              return sqrt(pow((x-p.getx()),2)+pow((y-p.gety()),2)+pow((z-point->getZ()),2));

            }
            else
            {

              return sqrt(pow((x-p.getx()),2)+pow((y-p.gety()),2)+pow(z,2));

            }
            

        }

  //Insertion and extraction operators for inherited class
  friend istream & operator >> (istream & is, ThreeDPoint & p);
  friend ostream & operator << (ostream & os, const ThreeDPoint & p);

};

//Overloaded insertion and extraction operators for inherited class
istream & operator >> (istream & is, ThreeDPoint & p) {
  cout << "please enter x y z: ";
  is >> p.x >> p.y >> p.z;
  return is;
}
ostream & operator << (ostream & os,
  const ThreeDPoint & p) {
  cout << "(x,y,z)=" <<
    "(" << p.getx() << "," << p.gety() << "," << p.getZ() << ")";
  return os;
}


//3D CLass End

int main()
{

  //constructor implementations
  cout << "1. Test the constructors of ThreeDPoint: " << endl;
  cout << "1.1 Create ThreeDPoint object p1 with no-arg constructor:" << endl;
  ThreeDPoint p1;
  cout << "p1 is (x,y,z) = (" << p1.getx() << "," << p1.gety() << "," << p1.getZ() << ")" << endl;
  
  ThreeDPoint p2(10,30,25.5);
  cout << "1.2 Create TheeDPoint object p1 with the 3-args constructor:" << endl;
  cout << "p2 is (x,y,z) = (" << p2.getx() << "," << p2.gety() << "," << p2.getZ() << ")" << endl;

  //Testing distance functions between same type objects
  cout << "2. Test the distance function:" << endl;
  cout << "The distance between p1 and p2 is " << p1.distance(p2) << endl;

  //Testing inherited insertion and extraction operators
  cout << "3. Test the insertion and extraction operators:" << endl;
  cout << "3.1 Create ThreeDPoint object p3 and p4 with the no-arg constructor:" << endl;
  ThreeDPoint p3, p4;

  double x,y,z = 0;
  cout << "3.2 Use cin >> p3 to set p3's (x,y,z):" << endl;
  cout << "For p3, ";
  cin >> p3;

  cout << "3.3 Use cout << p3 to print p3" << endl;
  cout << "p3 is ";
  cout << p3;

  cout << "3.4 Use cin >> p4 to set p4's (x,y,z):" << endl;
  cout << "For p4, ";
  cin >> p4;

  cout << "3.5 Use cout << to print p4" << endl; 
  cout << "p4 is ";
  cout << p4 << endl;

  //Testing distance function after insertion operators
  cout << "3.6 Test distance function:" << endl;
  cout << "The distance between p3 and p4 is " << p3.distance(p4) << endl; 

  //Created two different type objects
  cout << "4. Create ThreeDPoint p5 and myPoint p6 using thier no-arg constructor" << endl; 
  ThreeDPoint p5;
  MyPoint p6;

  //Testing insertion and extraction operators for both object types
  cout << "4.1 Use >> to set p5 and p6, then use << to print p5 and p6:" << endl;
  cout << "For p5, ";
  cin >> p5;
  cout << "For p6, ";
  cin >> p6;
  cout << "p5 is " << p5 << "; p6 is " << p6 << endl;
  
  //Testing distance function between two different object types
  cout << "5. Test the polymorphism using p5.distance(p6):" << endl;
  cout << "The distance between p5 and p6 is " << p5.distance(p6);


  return 0;

}