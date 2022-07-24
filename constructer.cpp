#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
	string name;
	int roll_no;
	float marks;
	public:
	void change()
	{
		roll_no +=10;
	}
	void change1()
	{
		marks +=19;
	}
	Student()
	{
		cout<<"enter the name : ";
		cin>>name;
		cout<<"enter roll no : ";
		cin>>roll_no;
		cout<<"enter marks : ";
		cin>>marks;
	}
	
	Student(string n,int r,float m);
	void display()
	{
		cout<<"\nname : "<<name<<", roll no. : "<<roll_no<<", marks : "<<marks<<endl;
	}
	Student(Student &s)
	{
		name=s.name;
		roll_no=s.roll_no;
		marks=s.marks;
	}
	~Student()
	{
		cout<<"inside destructor"<<endl;
	}
};
Student::Student(string n,int r,float m)
{
	name=n;
	roll_no=r;
	marks=m;
}

int main()
{
	Student s1,s2("akash",36,89.8),s3,s4(s3);
	s1.change1();
	s1.display();
	s2.change();
	s2.display();
	s3.display();
	s4.display();
	cout<<"hiii\n";
}
