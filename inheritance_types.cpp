#include <iostream>
using namespace std;
//example of multi-level inheritance
class A
{
    public :
        void display()
        {
            cout<<"inside class A , display function"<<endl;
        }
        void fun()
        {
            cout<<"inside class A , fun function"<<endl;
        }
};
class B:public A
{
    public :
        void display()
        {
            cout<<"inside class B, display function"<<endl;
        }
        void fun()
        {
            cout<<"inside class B , fun function"<<endl;
        }
        void fun1()
        {
            cout<<"inside class B , fun1 function"<<endl;
        }
};
class C:public B
{
    public :
        void display()
        {
            cout<<"inside class C, display function"<<endl;
        }

        void show()
        {
            cout<<"inside class C, show function"<<endl;
        }
        void fun2()
        {
            cout<<"inside class C, fun2 function"<<endl;
        }
};

//example of multiple inheritanc

class X
{
    private:
        int i;
    public:
        X()
        {
            i=5;
            cout<<"Inside class X, 0 argument constructor"<<endl;
        }
        void display()
        {
            cout<<"Inside class X, display function"<<endl;
        }

};

class Y
{
    private:
        int j;
    public:
        Y()
        {
            j=15;
            cout<<"Inside class Y, 0 argument constructor"<<endl;
        }
        void xyz()
        {
            cout<<"Inside class Y, xyz function"<<endl;
        }
};

class Z:public X,public Y
{
    private:
        int i,j;
        int k;
    public:
        Z()
        {
            k=20;
            cout<<"Inside class Z, 0 argument constructor"<<endl;
            cout<<"sum = "<<i+j+k<<endl;
        }
        void funn()
        {
            cout<<"Inside class Z, funn function"<<endl;
        }
};

int main()
{
    //for multi-level inheritance
    C obj1;
    obj1.display();
    obj1.fun();
    obj1.fun1();
    obj1.fun2();
    obj1.show();
    obj1.A::display();
    obj1.B::display();
    obj1.A::fun();
    cout<<endl<<endl;
    //for multiple inheritance
    Z obj2;
    obj2.display();
    obj2.funn();
    obj2.xyz();
}
