#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[100];
    cout<<endl<<"enter name : ";
    cin.getline(name,100);
    cout<<endl<<"name : "<<name;
    int count1=cin.gcount();
    cout<<endl<<"characters extracted in name : "<<count1;

    char ch;
    cout<<endl<<"enter a character : ";
    cin.get(ch);
    cout<<"character entered : "<<ch;

    cin.putback(ch);
    cin.get(ch);
    cout<<endl<<ch;
    int count2=cin.gcount();
    cout<<endl<<"characters extracted in last get() : "<<count2;

    cin.putback('Z');
    ch=cin.peek();
    cout<<endl<<ch;

    // string str;
    // cin.getline(str,90);   shows error
    return 0;
}