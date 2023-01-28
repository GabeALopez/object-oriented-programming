#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>

using namespace std;

class Complex
{

    private:
    
    //set variables
    double real;
    double img;

    public:

    //create empty class
    Complex();

    //getters and setters
    double const getReal();

    void setReal(double pReal);

    double const getImg();

    void setImg(double pImg);

    //object with parameters
    Complex(double pReal, double pImg);

    //print complex number
    void printComplex();

    //add two complex numbers inside class
    Complex addition(Complex & comp);
};

//adds two objects with a function outside class
Complex additionTwo(Complex & comp1, Complex & comp2);

//add array of objects together
Complex additionArray(Complex complexArray[], int size);




#endif