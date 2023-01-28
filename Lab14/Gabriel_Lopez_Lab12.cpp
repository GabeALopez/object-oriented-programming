#include <iostream>
using namespace std;

class LivingThing
{

    public:
    //calls living thing constructor
    LivingThing()
    {

        cout << "✓ living thing constructor called" << endl;

    }

    //calls living thing deconstructor
    ~LivingThing()
    {

        cout << "X living thing deconstructor called" << endl;

    }

    //print out number of level of classes
    virtual void toString() const
    {

        cout << "= living thing constructor called" << endl;

    }

};


class Animal : public LivingThing
{

    public:
    Animal()
    {

        cout << "✓✓ animal constructor called" << endl; 

    }

    ~Animal()
    {

        cout << "XX animal deconstructor called" << endl;

    }

    //print out number levels of classes
    virtual void toString() const
    {

        cout << "== animal constructor called" << endl;

    }

};

class Plant : public LivingThing
{

    public:
    //call plant constructor
    Plant()
    {

        cout << "✓✓ plant constructor called" << endl;

    }

    //call plant deconstructor
    ~Plant()
    {

        cout << "XX plant deconstructor called" << endl;

    }

    //print number of class levels
    virtual void toString() const
    {

        cout << "== plant constructor called" << endl;

    }

};

class Fish : public Animal
{

    public:
    //call fish constructor
    Fish()
    {

        cout << "✓✓✓ fish constructor called" << endl;

    }

    //call FIsh deconstructor
    ~Fish()
    {

        cout << "XXX fish deconstructor called" << endl;

    }

    virtual void toString() const
    {

        cout << "=== fish constructor called" << endl;

    }
    

}; 

class Mammal : public Animal
{


    public:
    //call mammal constructor
    Mammal()
    {

        cout << "✓✓✓ mammal constructor called" << endl;

    }

    //call mammal deconstructor
    ~Mammal()
    {

        cout << "XXX mammal deconstructor called" << endl;

    }

    virtual void toString() const
    {

        cout << "=== mammal constructor called" << endl;

    }



};

class Tree : public Plant
{

    public:
    //call plant constructor
    Tree()
    {

        cout << "✓✓✓ plant constructor called" << endl; 

    }

    //call plant deconstructor
    ~Tree()
    {

        cout << "XXX plant deconstructor called" << endl;

    }

    //print out number class levels
    virtual void toString() const
    {

        cout << "=== plant constructor called" << endl;

    }


};

class Sardine : public Fish
{
    
    public:
    //call Sardine constructor
    Sardine()
    {

        cout << "✓✓✓✓ Sardine constructor called" << endl;
        
    }

    //Sardine deconstructor called
    ~Sardine()
    {

        cout << "XXXX Sardine deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "==== Sardine constructor called" << endl;

    }


};

class Bass : public Fish
{
    
    public:
    //call Bass constructor
    Bass()
    {

        cout << "✓✓✓✓ Bass constructor called" << endl;
        
    }

    //Bass deconstructor called
    ~Bass()
    {

        cout << "XXXX Bass deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "==== Bass constructor called" << endl;

    }


};

class Cat : public Mammal
{
    
    public:
    //call Cat constructor
    Cat()
    {

        cout << "✓✓✓✓ Cat constructor called" << endl;
        
    }

    //Cat deconstructor called
    ~Cat()
    {

        cout << "XXXX Cat deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "==== Cat constructor called" << endl;

    }


};

class Chestnut : public Tree
{
    
    public:
    //call Chestnut constructor
    Chestnut()
    {

        cout << "✓✓✓✓ Chestnut constructor called" << endl;
        
    }

    //Chestnut deconstructor called
    ~Chestnut()
    {

        cout << "XXXX Chestnut deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "==== Chestnut constructor called" << endl;

    }


};

class Cherry : public Tree
{
    
    public:
    //call Cherry constructor
    Cherry()
    {

        cout << "✓✓✓✓ Cherry constructor called" << endl;
        
    }

    //Cherry deconstructor called
    ~Cherry()
    {

        cout << "XXXX Cherry deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "==== Cherry constructor called" << endl;

    }


};

class Tiger : public Cat
{
    
    public:
    //call Tiger constructor
    Tiger()
    {

        cout << "✓✓✓✓✓ Tiger constructor called" << endl;
        
    }

    //Tiger deconstructor called
    ~Tiger()
    {

        cout << "XXXXX Tiger deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "===== Tiger constructor called" << endl;

    }


};

class Lion : public Cat
{
    
    public:
    //call Lion constructor
    Lion()
    {

        cout << "✓✓✓✓✓ Lion constructor called" << endl;
        
    }

    //Lion deconstructor called
    ~Lion()
    {

        cout << "XXXXX Lion deconstructor called" << endl;

    }

    //print out number of class levels
    virtual void toString() const
    {

        cout << "===== Lion constructor called" << endl;

    }


};





void display(const LivingThing & obj)
{

    obj.toString();

}

int main()
{

    //calling classes
    cout << "Create sardine:" << endl;
    Sardine sar = Sardine();
    cout << endl;

    cout << "Create bass:" << endl;
    Bass bas = Bass();
    cout << endl;

    cout << "Create tiger:" << endl;
    Tiger tig = Tiger();
    cout << endl;

    cout << "Create lion:" << endl;
    Lion li = Lion();
    cout << endl;

    cout << "Create chestnut:" << endl;
    Chestnut chest = Chestnut();
    cout << endl;

    cout << "Create cherry:" << endl;
    Cherry cher = Cherry();
    cout << endl;

    cout << "Create tree:" << endl;
    Tree tr = Tree();
    cout << endl;

    //using toString
    cout << "Tree toString called:" << endl;
    tr.toString(); 
    cout << endl;

    //calling animal class
    cout << "Create Animal:" << endl;
    Animal ani = Animal();
    cout << endl;

    //using toString
    cout << "Animal toString:" << endl;
    ani.toString();
    cout << endl;

    //use toString
    cout << "Call display on six objects of the six leaf classes respectively:" << endl;
    sar.toString();
    bas.toString();
    tig.toString();
    li.toString();
    chest.toString();
    cher.toString();
    cout << endl;

    //deconstruction
    cout << "destruction start..." << endl;

    return 0;


}