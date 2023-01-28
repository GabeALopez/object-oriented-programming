#ifndef MySet_H
#define MySet_H
class MySet
{

private:

    //initialize variables
    unsigned int range, size;
    bool * set;

public:

    //constructors
    MySet(unsigned); 
    MySet(const MySet &);

    //destructors
    ~MySet();

    //insert and delete element
    void insertElement(int k);
    void deleteElement(int k);

    //print the set
    void printSet();

    //check if two sets are equal
    bool isEqualTo(const MySet &); 

};

#endif