#include<iostream>
//#include<conio.h>
using namespace std;
class sample
	{
		private : 	char name[20];
					int age;
					float sal;
		friend ostream & operator <<(ostream &a,sample &s);
		friend istream & operator >>(istream &b,sample &s);
	};
	
	
ostream & operator <<(ostream &a,sample &s)
	{
		a<<s.name<<s.age<<s.sal;
		return a;
	}
	
istream & operator >>(istream &b,sample &s)
	{
		b>>s.name>>s.age>>s.sal;
		return b;
	}
	
int main()
	{
		sample t1;
		cout<<"Enter Name,Age & Salary : ";
		cin>>t1;
		cout<<t1;
		//getch();
		return 0;
	}

