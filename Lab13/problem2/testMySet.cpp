#include <iostream>
#include "MySet.cpp"

using namespace std;

int main()
{

    //create first object
    MySet s1 = MySet(20);  
    cout << "1) Creates a first MySet object s1 with the range of numbers [0;20]" << endl;
    cout << "s1 = "; 
    s1.printSet();

    //insert element 13
    s1.insertElement(13);
    cout << "s1.insertElement(13):" << endl;
    cout << "s1 = ";
    s1.printSet();

    //insert element 7
    s1.insertElement(7);
    cout << "s1.insertElement(7):" << endl;
    cout << "s1 = ";
    s1.printSet();

    //insert element 20
    s1.insertElement(20);
    cout << "s1.insertElement(20):" << endl;
    cout << "s1 = ";
    s1.printSet();

    //insert element 21
    cout << "s1.insertElement(21):" << endl;
    s1.insertElement(21);
    cout << "s1 = ";
    s1.printSet();

    //delete element 22
    cout << "s1.deleteElement(22):" << endl;
    s1.deleteElement(22);
    cout << "s1 = ";
    s1.printSet();

    //delete element 13
    s1.deleteElement(13);
    cout << "s1.deleteElement(13):" << endl;
    cout << "s1 = ";
    s1.printSet();

    //create new s2 object
    cout << "6) Creates a second MySet object s2 with the range of numbers [0; 100]" << endl;
    MySet s2 = MySet(100);
    cout << "s2 = ";
    s2.printSet();

    //check if s2 is equal to s1
    cout << "s2.isEqualTo(s1) = " << s2.isEqualTo(s1);

    //Create third MySet object s3 
    MySet s3 = MySet(s1);
    cout << "8) Create third MySet object s3 with the copy constructor with the first object as the argument" << endl;
    cout << "s3 == ";
    s3.printSet();
    cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1);



    return 0;

}