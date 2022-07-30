#include <iostream>
using namespace std;

class Base
{
    protected:
        int i;
    public :
        Base()
        {
            i=9;
        }
        void display()
        {
            cout<<"inside class Base , display function"<<endl;
            
        }
        void fun()
        {
            cout<<"inside class Base , fun function"<<endl;
        }
};
class d1:virtual public Base
{
    public :
        void fun()
        {
            cout<<"inside class d1, fun function"<<endl;
        }
};
class d2:virtual public Base
{
    public :
        void fun1()
        {
            cout<<"inside class d2, fun1 function"<<endl;
        }
};

class d3 :public d1,public d2
{
    public :
        int getdata()
        {
            cout<<"inside class d3, getdata function"<<endl;
            return i;
        }
};

int main()
{
    d3 obj;
    obj.fun1();
    int a=obj.getdata();
    cout<<endl<<"data is : "<<a<<endl;
    obj.display();
}