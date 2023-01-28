#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

class Complex
{
private:
    //initialize variables
    double a, b;

public:
    //no-arg constructor 
    Complex()
    {
        a = 0.0;
        b = 0.0;
    }

    //One arg constructor
    Complex(double pA)
    {
        a = pA;
        b = 0;
    }

    //two arg constructor
    Complex(double pA, double pB)
    {

        a = pA;
        b = pB;
    }

    //+= overload operator
    Complex operator+=(Complex &secondNumber)
    {

        this->a += secondNumber.a;
        this->b += secondNumber.b;
        return *this;
    }

    //-= overload operator
    Complex operator-=(Complex &secondNumber)
    {

        this->a -= secondNumber.a;
        this->b -= secondNumber.b;
        return *this;
    }

    //*= overload operator
    Complex operator*=(Complex &secondNumber)
    {

        Complex temp = *this;
        temp.a = ((this->a * secondNumber.a) - (this->b * secondNumber.b));
        temp.b = ((this->b * secondNumber.a) + (this->a * secondNumber.b));
        *this = temp;
        return *this;
    }

    //divide equal operator
    Complex operator/=(Complex &secondNumber)
    {

        Complex temp;
        temp.a = ((this->a * secondNumber.a) + (this->b * secondNumber.b)) / ((secondNumber.a * secondNumber.a) + (secondNumber.b * secondNumber.b));
        temp.b = ((this->b * secondNumber.a) - (this->a * secondNumber.b)) / ((secondNumber.a * secondNumber.a) + (secondNumber.b * secondNumber.b));
        *this = temp;
        return *this;
    }

    //operators for insertion and extraction
    friend ostream &operator<<(ostream &out, Complex secondNumber);
    friend istream &operator>>(istream &in, Complex secondNumber);

    //the sign operator overload
   Complex operator+()
   {

        Complex temp = *this;
        temp.a = abs(temp.a);  
        temp.b = abs(temp.b);
        *this = temp;
        return *this;

   }

   //negative overload operator
   Complex operator-()
   {
        Complex temp = *this;
        if(temp.a > 0)
        {

            temp.a = temp.a - temp.a - temp.a;


        }
        else
        {

            temp.a = abs(temp.a);

        }

        if(temp.b > 0)
        {

            temp.b = temp.b - temp.b - temp.b;

        }
        else
        {

            temp.b = abs(temp.b);

        }

        *this = temp;
        return *this;
   }

    //addition of regular number to object operator overload
   Complex operator+(double n)
   {

    this->a += n; 
    return *this;


   }

   //subtraction of regular number to object operator overload
   Complex operator-(double n)
   {

    this->a -= n;
    return *this;

   }

    //postincrement operator overload
    Complex &operator++()
    {

        ++a;
        return *this;
    }

    //preincrement operator overload
    Complex operator++(int)
    {

        Complex temp = *this;
        ++a;
        return temp;
    }

    //postdecrement operator overload 
    Complex &operator--()
    {

        --a;
        return *this;
    }

    //predecrement operator overload
    Complex operator--(int)
    {

        Complex temp = *this;
        --a;
        return temp;
    }

    //subscript operator overload
    double operator[](int index)
    {

        switch (index)
        {

        case 0:
            return this->a;
            break;
        case 1:
            return this->b;
            break;
        default:
            cout << "Number does not exist";
            break;
        }
    }

    //gets real part of the complex number
    double getRealPart()
    {

        return a;
    }

    //gets imaginary part of the complex number
    double getImaginaryPart()
    {

        return b;
    }

    //add two complex numbers
    Complex add(Complex &secondNumber)
    {

        double c = a + secondNumber.a;
        double d = b + secondNumber.b;
        return Complex(c, d);
    }

    //subtract two complex numbers
    Complex subtract(Complex &secondNumber)
    {

        double c = a - secondNumber.a;
        double d = b - secondNumber.b;
        return Complex(c, d);
    }

    //multiply two complex numbers
    Complex multiply(Complex &secondNumber)
    {

        double c = ((a * secondNumber.a) - (b * secondNumber.b));
        double d = ((b * secondNumber.a) - (a * secondNumber.b));
        return Complex(c, d);
    }

    //divide two complex numbers
    Complex divide(Complex &secondNumber)
    {

        double c = ((a * secondNumber.a) + (b * secondNumber.b)) / ((secondNumber.a * secondNumber.a) + (secondNumber.b * secondNumber.b));
        double d = ((b * secondNumber.a) - (a * secondNumber.b)) / ((secondNumber.a * secondNumber.a) + (secondNumber.b * secondNumber.b));
        return Complex(c, d);
    }

    //returns absolute value
    double absolute()
    {

        return sqrt((a * a) + (b * b));
    }

    //converts complex number to string
    string toString()
    {

        string str = to_string(a) + " + " + to_string(b);
        return str;
    }
};

//implementation of extraction operator
ostream &operator<<(ostream &out, Complex secondNumber)
{

    out << secondNumber.a;
    out << " + ";
    out << secondNumber.b << "i" << endl;
    return out;
}

//implementation of insertion operator
istream &operator>>(istream &in, Complex secondNumber)
{

    cout << "Enter real part ";
    in >> secondNumber.a;
    cout << "Enter Complex number ";
    in >> secondNumber.b;
    return in;
}

//implementation of arithmetic operators for +,-,*,/
Complex operator+(Complex& num1, Complex& num2)
{

    Complex temp((num1.getRealPart() + num2.getRealPart()),(num1.getImaginaryPart() + num2.getImaginaryPart()));
    return temp; 

}

Complex operator-(Complex& num1, Complex& num2)
{

    Complex temp((num1.getRealPart() - num2.getRealPart()),(num1.getImaginaryPart() - num2.getImaginaryPart()));
    return temp;

}   

Complex operator*(Complex& num1, Complex& num2)
{

        Complex temp((((num1.getRealPart() * num2.getRealPart()) - (num1.getImaginaryPart() * num2.getImaginaryPart()))),((num1.getImaginaryPart() * num2.getRealPart())+(num1.getRealPart() * num2.getImaginaryPart())));
        return temp;
}

Complex operator/(Complex& num1, Complex& num2)
{

        Complex temp((((num1.getRealPart() * num2.getRealPart()) + (num1.getImaginaryPart() * num2.getImaginaryPart())) / ((num2.getRealPart() * num2.getRealPart()) + (num2.getImaginaryPart() * num2.getImaginaryPart()))),(((num1.getImaginaryPart() * num2.getRealPart()) - (num1.getRealPart() * num2.getImaginaryPart())) / ((num2.getRealPart() * num2.getRealPart()) + (num2.getImaginaryPart() * num2.getImaginaryPart()))));
        return temp;
}
//end of implementation of arithmetic operators

int main()
{

    
    //print out flavor text
    cout << "1. Test constructors: " << endl;
    cout << "1.1 Create complex number c0 with no-arg constructor Complex():" << endl;

    //gets real and imaginary part of no arg constructor
    Complex c0;
    cout << "c0 = 0, it's real part Re(c0) = " << c0.getRealPart() << ", it's imaginary part Im(c0) = " << c0.getImaginaryPart();
    cout << ", it's absolute value |c0| = " << c0.absolute() << endl;

    //gets real and imaginary part of one arg constructor
    int a = 0;
    cout << "1.2 create a complex number c1 with constructor Complex(a): " << endl;
    cout << "Enter a number a: ";
    cin >> a;
    Complex c1(a);
    cout << "c1 = 3, it's real part Re(c1) = " << c1.getRealPart() << ", it's imaginary part Im(c1) = " << c1.getImaginaryPart();
    cout << ", it's absolute value |c1| = " << c1.absolute() << endl;

    //gets real and imaginary part of two arg constructor
    int c,d = 0;
    cout << "1.3 create a complex number c2 with constructor Complex(a,b): " << endl;
    cout << "Enter number a, b: ";
    cin >> c >> d;
    Complex c2(c,d);
    cout << "c2 = " << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i, it's real part Re(c2) = " << c2.getRealPart();
    cout << ", it's imaginary part Im(c2) = " << c2.getImaginaryPart() << ", it's absolute value |c2| = "  << c2.absolute() << endl;


    //implementation of insertion and extraction operators
    int n1,n2 = 0;
    cout << "2. Test overloaded stream insertion operator >> and extraction operator <<:" << endl;
    cout << "Enter two complex numbers following the prompts:" << endl;
    cout << "Enter the first complex number cx1 with (cin >> cx1): Enter a and b for (a + bi): ";
    cin >> n1 >> n2;
    Complex cx1(n1,n2);
    cout << "\'cout << cx1\' prints ";
    cout << cx1 << endl;

    cout << "Enter the second complex number cx2 with (cin >> cx2): Enter a and b for (a + bi): ";
    cin >> n1 >> n2;
    Complex cx2(n1,n2);
    cout << "\'cout << cx2\' prints " << cx2 << endl;
    

    //implementation of arithmetic operators
    cout << "3. Test overloaded arithmetic operators +, -, *, /:";
    Complex comp1(3,4), comp2(5,6); 
    cout << "(3 + 4i) + (5 + 6i) = " << comp1 + comp2;
    cout << "(3 + 4i) - (5 + 6i) = " << comp1 - comp2;
    cout << "(3 + 4i) * (5 + 6i) = " << comp1 * comp2;
    cout << "(3 + 4i) / (5 + 6i) = " << comp1 / comp2;
    
    //implementation of augmented operators
   cout << "4. Test overloaded augmented arithmetic operators +=, -=, *=, /=:" << endl;
   cout << "cx1 = 3 + 4i; cx2 = 5 + 6i" << endl;
   cout << "(cx2 += cx1); cx2 = "; 
   cx2 += cx1;
   cout << cx2; 

   cout << "(cx2 -= cx1); cx2 = ";
   cx2 -= cx1;
   cout << cx2;

   cout << "(cx2 *= cx1); cx2 = ";
   cx2 *= cx1;
   cout << cx2;

   cout << "(cx2 /= cx1); cx2 = ";
   cx2 /= cx1;
   cout << cx2;
   
    
    //implementation of unary operators
    Complex comp3, comp4;
    comp4 = cx1; 
    cout << "5. Test overloaded Unary operators: " << endl;
    cout << "5.1 Test overloaded sign operators +, -:" << endl;
    cout << "cx1 = " << cx1; 
    +cx1;
    cout << "+cx1 = " << cx1;

    cout << "-cx1 = ";
    -cx1;
    cout << cx1; 

    cout << "5.2 Test overloaded prefixes ++, --:" << endl;
    cout << "cx1 = " << cx1;
    cout << "++cx1; cx1 = " << ++cx1; 
    cout << "--cx1; cx1 = " << --cx1;

    cout << "5.2 Test overloaded postfixes ++, --:" << endl;
    cout << "cx1 = " << cx1;
    cout << "\'cout << cx1++;\' prints " << cx1++;
    cout << "\'cout << cx1--\' prints " << cx1--;
    cout << "cx1 = " << cx1;
    
    
    //implementation of subscript operator
    cout << "6. Test overloaded subscript operator []:" << endl;
    cout << "cx1 = " << cx1;
    cout << "cx1[0] = " << cx1[0] << endl;
    cout << "cx1[1] = " << cx1[1] << endl;
    cout << "cx2[0] == cx2.getRealPart() = " << (cx2[0] == cx2.getRealPart() ? true : false) << endl;
    cout << "cx2[1] == cx2.getImaginaryPart() = " << (cx2[1] == cx2.getImaginaryPart() ? true : false) << endl;
    

    //implementation of implicit conversion
    cout << "7. Test implicit conversion from double to Complex:" << endl;
   cout << "cx2 = " << cx2;
   cout << "3 + cx2 = "  << cx2 + 3;
   cout << "3.4 + cx2 = " << cx2 + 3.4;
    
    return 0;
}