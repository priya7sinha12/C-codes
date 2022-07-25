//constructor in inheritance
#include <iostream>
using namespace std;

class Base
{
    protected :
        int x;
    public :
        Base ()
        {
            x=0;
            cout<<"inside 0 argument constructor of base class"<<endl;
        }
        Base (int number)
        {
            x=number;
            cout<<"inside 1 argument constructor of base class"<<endl;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

class Derived : public Base
{
    private :
        int j;
    public :
        Derived ()
        {
            j=10;
            cout<<"inside 0 argument constructor of Derived class"<<endl;
        }
        Derived (int num) //this will also call 0 argument constructor of base class.if we want to call 1 argument constructor we should use "Derived (int num) :Base (num)"" 
        {
            j=num;
            cout<<"inside 1 argument constructor of Derived class"<<endl;
        }
        void display()
        {
            cout<<"numbers are : "<<j<<" and ";
            Base::display();
        }
};

int main()
{
    Derived obj1;
    obj1.display();
    Derived obj2(15);
    obj2.display();
}