#include <iostream>
using namespace std;

class Flowers 
{
    public:
        virtual void fun()
        {
            cout<<"inside class flower function fun"<<endl;
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
        void fun()
        {
            cout<<"inside class lotus function fun"<<endl;
        }
};

int main()
{
    Rose r1,r2,r3;
    Lotus l1,l2,l3;
    Flowers *p[]={&r1,&r2,&l1,&l2,&l3,&r3};
    for(int i=0;i<sizeof(p)/sizeof(p[0]);i++)
    {
        p[i]->fun();
    }
    return 0;
}