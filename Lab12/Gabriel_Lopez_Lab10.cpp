#include <iostream>
#include <string>

using namespace std;

template <class T>
class myVector
{

private:
    // Variable initialization
    T *vec;
    int numOfElements = 0;
    int capacity = 0;

public:
    // constructors
    myVector()
    {
        capacity = 4;
        vec = new T[capacity];

    }

    myVector(int pCapacity)
    {

        capacity = pCapacity;
        vec = new T[capacity];
    }

    myVector(const myVector &vector)
    {

        numOfElements = vector.numOfElements;
        capacity = vector.capacity;

        vec = new T[vector.capacity];
        vec = vector.vec;
    }

    // Deconstructor
    ~myVector()
    {

        delete [] vec;
    }

    // Prints out vector
    void print()
    {

        cout << " vec: (";
        for(int i = 0; i < numOfElements; i++)
        {

            cout << vec[i] << (numOfElements-i>1 ? " ": "");

        }
        cout << ")" << endl;

    }

    // Inserts value at the beginning of vector
    void insertBeg(T value)
    {

        increaseCapacity();
        numOfElements++;
        for (int i = numOfElements-1; i >= 0; i--)
        {
            vec[i] = vec[i-1];
        }
        vec[0]=value;



    }

    // Insert value at the end of the vector
    void insertEnd(T value)
    {

        increaseCapacity();
        vec[numOfElements++] = value;

    }

    //remove element at begining of vector
    void removeBeg()
    {


       for(int i = 0; i < numOfElements; i++)
       {

            vec[i] = vec[i+1];

       }

       numOfElements--;
       decreaseCapacity();



    }

    //remove element at the end of vector
    void removeEnd()
    {

        T *vec2 = vec; 
        vec = new T[capacity];
        numOfElements--;
        for(int i = 0; i < numOfElements; i++)
        {


            vec[i] = vec2[i];

        }

        delete [] vec2;
        decreaseCapacity();


    }

    //Increases the capacity of the vector
    void increaseCapacity()
    {
        if(numOfElements >= capacity)
        {
            T * vec2 = vec;
            capacity = 2 * numOfElements;
            vec = new T[numOfElements * 2];

            for(int i = 0; i < numOfElements; i++)
            {

                vec[i] = vec2[i];

            }
            delete [] vec2;
        }


    }

    //Decreases the capacity of the vector
    void decreaseCapacity()
    {

        if(numOfElements == capacity/2)
        {

            T * vec2 = vec;
            capacity = .5*numOfElements;
            vec = new T[numOfElements * 2];
            for(int i = 0; i < numOfElements; i++)
            {

                vec[i] = vec2[i];

            }

            delete [] vec2;

        }

    }

    //Equals operator that determines if two vectors are equal
    bool operator == (const myVector & secondVector)
    {

        if(numOfElements == secondVector.numOfElements)
        {

            for(int i = 0; i < numOfElements; i++)
            {

                if(vec[i] != secondVector.vec[i])
                {

                    return false;

                }

            }

            return true;

        }
        else
        {

            return false;

        }

    }


};

int main()
{
 
    //No-arg constructor usage
    myVector<int> intVec = myVector<int>();
    cout << "intVector created: no elements at the beginning." << endl;
    intVec.print();

    //insert 4 at end of vector
    intVec.insertEnd(4);
    cout << "intVector.insertEnd(4):" << endl;
    intVec.print();

    //insert 3 at the beginning of the vector
    intVec.insertBeg(3);
    cout << "intVector.insertBeg(3):" << endl; 
    intVec.print();

    //insert 6 at the end of vect
    intVec.insertEnd(6);
    cout << "intVector.insertEnd(6):" << endl;
    intVec.print();

    //insert 2 at the end
    intVec.insertEnd(2);
    cout << "intVector.insertEnd(2):" << endl;
    intVec.print();

    //insert 1 at the beginning
    intVec.insertBeg(1); 
    cout << "intVector.insertBeg(1):" << endl;
    intVec.print();

    //remove end of vect
    intVec.removeEnd();
    cout << "intVector.removeEnd():" << endl;
    intVec.print();

    //remove beginning of vect
    intVec.removeBeg();
    cout << "intVector.removeBeg():" << endl;
    intVec.print();

    //create new int vect
    myVector<int> intVec2 = myVector<int>();
    cout << "intVector2 created: no elements at the beginning." << endl;
    intVec2.print();

    //insert 4 at the end
    intVec2.insertEnd(4);
    cout << "intVector2.insertEnd(4):" << endl;
    intVec2.print();

    //insert 7 at the beginning
    intVec2.insertBeg(7);
    cout << "intVector2.insertBeg(7):" << endl;
    intVec2.print();

    //insert 6 at the end
    intVec2.insertEnd(6);
    cout << "intVector2.insertEnd(6):" << endl;
    intVec2.print();

    //insert 2 at the end
    intVec2.insertEnd(2);
    cout << "intVector2.insertEnd(2):" << endl;
    intVec2.print();

    //insert 1 at the beginning
    intVec2.insertBeg(1);
    cout << "intVector2.insertBeg():" << endl;
    intVec2.print();

    //remove end of vect
    intVec2.removeEnd();
    cout << "intVector2.removeEnd():" << endl;
    intVec2.print();

    //remove beginning of vect
    intVec2.removeBeg();
    cout << "intVector2.removeBeg():" << endl;
    intVec2.print();

    //determine whether vectors are the same
    cout << ((intVec == intVec2) ? "Int vectors are the same" : "Int vectors are not the same") << endl;

    //create new char vect
    myVector<char> charVec = myVector<char>();
    cout << "charVector created: no elements at the beginning." << endl;
    charVec.print();

    //insert a at the end
    charVec.insertEnd('a');
    cout << "charVector.insertEnd():" << endl;
    charVec.print();

    //insert b at the beginning
    charVec.insertBeg('b');
    cout << "charVector.insertBeg('b'):" << endl;
    charVec.print();
    
    //inserts c at the end
    charVec.insertEnd('c');
    cout << "charVector.insertEnd('c'):" << endl;
    charVec.print();

    //insert d at the end
    charVec.insertEnd('d');
    cout << "charVector.insertEnd('d'):" << endl;
    charVec.print();

    //insert e at the beginning
    charVec.insertBeg('e');
    cout << "charVector.insertBeg('e'):" << endl;
    charVec.print();

    //remove end
    charVec.removeEnd(); 
    cout << "charVector.removeEnd():" << endl;
    charVec.print();

    //remove beginning
    charVec.removeBeg();
    cout << "charVector.removeBeg():" << endl;
    charVec.print();

    //create new char vector
    myVector<char> charVec2 = myVector<char>();
    cout << "charVector2 created: no elements at the beginning." << endl;
    charVec2.print();

    //insert a at the end
    charVec2.insertEnd('a');
    cout << "charVector2.inserEnd('a'):" << endl;
    charVec2.print();

    //insert b at the beginning
    charVec2.insertBeg('b');
    cout << "charVector2.insertBeg('b'):" << endl;
    charVec2.print();

    //insert c at the end
    charVec2.insertEnd('c');
    cout << "charVector2.insertEnd('c'):" << endl;
    charVec2.print();

    //insert d at the end
    charVec2.insertEnd('d');
    cout << "charVector2.insertEnd('d'):" << endl;
    charVec2.print();

    //insert e at the beginning
    charVec2.insertBeg('e');
    cout << "charVector2.insertBeg('e'):" << endl;
    charVec2.print();

    //remove end of vect
    charVec2.removeEnd();
    cout << "charVector2.removeEnd():" << endl;
    charVec2.print();

    //remove beginning of vect
    charVec2.removeBeg();
    cout << "charVector2.removeBeg():" << endl;
    charVec2.print();

    //determine if char vects are the same
    cout << ((charVec==charVec2) ? "The char vects are the same" : "The char vects are not the same") << endl;

    return 0;
}