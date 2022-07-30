#include <iostream>
using namespace std;

// a class containing one or more pure virtual function is called abstract class
class Flowers 
{
    public:
        virtual void fun()=0; //pure virtual function 
        virtual void fun2()
        {
            cout<<"inside class flower function fun2"<<endl;
        }
};

class Rose: public Flowers
{
    public:
        void fun()
        {
            cout<<"inside class rose function fun"<<endl;
        }
};

class Lotus: public Flowers
{
    public:
        void fun2()
        {
            cout<<"inside class lotus function fun2"<<endl;
        }
};

int main()
{
    // Flowers f; it will show error because object of abstract class in not possible
    Rose r;
    Rose *ptr=&r;
    ptr->fun2();
    ptr->fun();

    //Lotus l; it will also show error because , when a pure vital function is placed in a base class, 
    //we must override it in all the derived class for which we wants to create an object. 
    //if we don't do this ,then derived  class will also become abstract class.

}