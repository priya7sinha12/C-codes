#include <iostream>
using namespace std;

class Test // Base class
{
    protected :
        int num1;
        float num2;
    public :
        Test()
        {
            num1=0;
            num2=9.5;
        }
        void display()
        {
            cout<<"numbers are : "<<num1<<" "<<num2<<endl;
        }
        void operator ++()
        {
            cout<<"\nnumbers are incremented by 1\n";
            ++num1;
            ++num2;
        }
        void operator ++(int)
        {
            cout<<"\nnumbers are incremented by 1\n";
            num1++;
            num2++;
        }
};

class newTest :public Test //Derived class
{
    public :
    void operator --()
    {
        cout<<"\nnumbers are decremented by 1\n";
        --num1;
        --num2;
    }
    void operator --(int)
    {
        cout<<"\nnumbers are decremented by 1\n";
        num1--;
        num2--;
    }
};

int main()
{
    newTest t1;
    ++t1;
    t1.display();
    t1++;
    t1.display();
    --t1;
    t1.display();
    t1--;
    t1.display();
    return 0;
}
