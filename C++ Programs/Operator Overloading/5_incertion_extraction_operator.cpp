#include<iostream>
#include<conio.h>
using namespace std;
class sample
	{
		private :
			int a,b;
		public :
			void setdata(int x,int y)
				{
					a=x;
					b=y;
				}
			void showdata()
				{
					cout<<"First Number is : "<<a<<"Second Number is : "<<b;
				}
		friend ostream& operator <<(ostream &,sample);
		friend istream& operator >>(istream &,sample &);
	};


ostream& operator <<(ostream &dout,sample s)
	{
		cout<<"First Number is : "<<s.a<<"\nSecond Number is : "<<s.b;
		return(dout);
	}

istream& operator >>(istream &din,sample &p)
	{
		cin>>p.a>>p.b;
		return(din);
	}

int main()
	{
		sample t1;
		cout<<"Enter Two Number : ";
		cin>>t1;
		cout<<"\n\nNumber Entered are : \n";
		cout<<t1;
		getch();
		return 0;
	}
