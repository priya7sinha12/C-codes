#include <iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"inside base class constructor"<<endl;
        }
        virtual ~Base()
        {
            cout<<"inside base class destructor"<<endl;        
        }
};

class Derived: public Base
{
    public:
        Derived()
        {
            cout<<"inside Derived class constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"inside Derived class destructor"<<endl;        
        }
};

int main()
{
    Base *obj1;
    obj1=new Derived;
    delete obj1;
    return 0;
}