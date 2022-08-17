#include <iostream>
using namespace std;

ostream & tab(ostream &o)
{
    //cout<<&o<<endl;
    return o<<'\t';
}

ostream & line(ostream &o)
{
    //cout<<&o<<endl;
    return o<<'\n';
}

int main()
{
    cout<<"Don't";
    cout<<tab<<tab;
    cout<<"panic"<<line<<line<<"hello";
    return 0;
}