#include <iostream>
#include "Complex.cpp"

using namespace std;

int main()
{

    //create an object with empty parameters
    Complex comp1 = Complex();

    cout << "c1 created with no-arg constructor with real being " << comp1.getReal() << " and imaginary being " << comp1.getImg() << endl; 

    //set existing object with new values
    comp1.setReal(2.4);
    comp1.setImg(4.1);

    cout << "c1 real and imaginary parts changed = " << comp1.getReal() << " + (" << comp1.getImg() << ")i" << endl; 

    //load new object with values

    Complex comp2 = Complex(3.2, -3.6);

    cout << "c2: ";

    comp2.printComplex();

    //add two complex objects together with a function within class
    Complex comp3 = comp1.addition(comp2);

    cout << "c3: ";

    comp3.printComplex();

    //add complex objects with a function outside class
    Complex comp4 = additionTwo(comp2, comp3); 

    cout << "c4: ";

    comp4.printComplex();

    //reinitialize comp1-5 variables

    comp1.setReal(1);
    comp1.setImg(1);

    comp2.setReal(2);
    comp2.setImg(2);

    comp3.setReal(3);
    comp3.setImg(3);

    comp4.setReal(4);
    comp4.setImg(4);

    Complex comp5(5,5);

    Complex arr[] = {comp1, comp2, comp3, comp4, comp5};  

    //print out array
    cout << "additionArray(carray, 4): " << comp1.getReal() << "+(" << comp1.getImg() << ")i + " << comp2.getReal()  
    << "+(" << comp2.getImg() << ")i + " << comp3.getReal() << "+(" << comp3.getImg() << ")i + " << comp4.getReal() 
    << " + (" << comp4.getImg() << ")i + " << comp5.getReal() << " + " << comp5.getImg() << ")i = " 
    <<  additionArray(arr, 5).getReal() << " + (" << additionArray(arr, 5).getImg() << ")i" <<  endl; 

    additionArray(arr,5).printComplex();

    
    return 0;

}