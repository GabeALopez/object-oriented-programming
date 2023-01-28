#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;


    //implement no-arg constructor
    Complex::Complex()
    {

        real = 0.0;
        img = 0.0;

    }

    //implement arg constructor
    double const Complex::getReal()
    {

        return real;

    }

    //getters and setters implementation
    void Complex::setReal(double pReal)
    {

        real = pReal;

    }

    double const Complex::getImg()
    {

        return img;

    }

    void Complex::setImg(double pImg)
    {

        img = pImg;

    }

    //object with args implementation
    Complex::Complex(double pReal, double pImg)
    {

        real = pReal;
        img = pImg;

    }

    //print complex number implementation
    void Complex::printComplex()
    {

        cout << "The complex number is " << real << " + (" << img << ")i" << endl; 

    }

    //addition within class implementation 
    Complex Complex::addition(Complex & comp)
    {
 
        return Complex(real + comp.getReal(), img + comp.getImg()); 

    }


    //addition of objects outside class implementation
Complex additionTwo(Complex & comp1, Complex & comp2) 
{

    return Complex(comp1.getReal() + comp2.getReal(), comp1.getImg() + comp2.getImg());

}

//addition of array of complex objects implementation
Complex additionArray(Complex complexArray[], int size) 
{

    Complex sum = Complex();

    for(int i = 0; i < size; i++)
    {

        sum = sum.addition(complexArray[i]);

    }

    return sum;

}

