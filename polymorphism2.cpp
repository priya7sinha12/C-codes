#include <iostream>
using namespace std;

class Company 
{
    private :
        int i;
    public :
        virtual void salary()
        {
            cout<<"in salary of comapany"<<endl;
        }
        virtual void tax()
        {
            cout<<"in tax of comapany"<<endl;
        }
        void facilities()
        {
            cout<<"in facilities of comapany"<<endl;
        }
};

class Staff: public Company 
{
    public:
        void salary()
        {
            cout<<"in salary of staff"<<endl;
        }
        void tax()
        {
            cout<<"in tax of staff"<<endl;
        }
};

class Employee : public Company 
{
    public :
        void salary()
        {
            cout<<"in salary of Employee"<<endl;
        }
        void tax()
        {
            cout<<"in tax of Employee"<<endl;
        }
        void facilities()
        {
            cout<<"in facilities of Employee"<<endl;
        }
};

class Clients : public Company
{
    public :
    virtual void facilities()
        {
            cout<<"in facilities of client"<<endl;
        }
};

int main()
{
    Company c;
    cout<<"size of object of class company : "<<sizeof(c)<<endl; 
    //when the class has one or more virtual function 
    //then sizee of object of the class is equal to size of its data members plus size of a pointer
    Company *ptr=&c;
    ptr->facilities();
    ptr->salary();
    ptr->tax();


    Employee e;
    cout<<"size of object of class employee : "<<sizeof(e)<<endl;
    Employee *pe1=&e;
    pe1->facilities();
    pe1->salary();
    pe1->tax();

    Staff s;
    cout<<"size of object of class Staff : "<<sizeof(s)<<endl;
    Staff *ps1=&s;
    ps1->facilities();
    ps1->salary();
    ps1->tax();

    Clients cl;
    Clients *pc1=&cl;
    pc1->facilities();
    pc1->salary();
    pc1->tax();

    Staff s1;
    s1.facilities();
    s1.salary();
    s1.tax();

    return 0;
}