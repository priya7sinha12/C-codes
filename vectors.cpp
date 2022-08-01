#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1;
    for(int i=1;i<6;i++)
    {
        v1.push_back(i*2);
    }
    v1[5]=10;
    cout<<*v1.begin()<<endl;
    cout<<*v1.end()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.max_size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<"vector is : "<<endl;
    for(auto itr=v1.begin();itr!=v1.end();itr++)
    {
        cout<<*itr<<endl;
    }

    vector <int> v2{23,12,54,66,23};
    v2.push_back(56);
    v2.push_back(19);
    v2.pop_back();
    cout<<"elements of vector v2 : "<<endl;
    for(int num:v2)
    {
        cout<<num<<endl;
    }

    vector <int> v3;
    v3.assign(v1.begin(),v1.begin()+6);
    vector<int>:: iterator ptr;
    cout<<"elements of vector v3 : "<<endl;
    for(ptr=v3.begin();ptr!=v3.end();ptr++)
    {
        cout<<*ptr<<endl;
    }

}