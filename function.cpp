#include <iostream>
using namespace std;

void value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"values of num1 and num2 in call by value function : "<<a<<" "<<b<<endl;
}

void address(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"values of num1 and num2 in call by address function : "<<*a<<" "<<*b<<endl;
}

void refferance(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"values of num1 and num2 in call by refferance function : "<<a<<" "<<b<<endl;
}

int main()
{
    int num1,num2;
    cout<<"enter num 1 and num 2 : ";
    cin>>num1>>num2;
    value(num1,num2);
    cout<<"values of num1 and num2 after call by value function : "<<num1<<" "<<num2<<endl;
    address(&num1,&num2);
    cout<<"values of num1 and num2 after call by address function : "<<num1<<" "<<num2<<endl;
    refferance(num1,num2);
    cout<<"values of num1 and num2 in call by refferance function : "<<num1<<" "<<num2;
}