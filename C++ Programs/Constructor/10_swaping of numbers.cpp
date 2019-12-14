#include<iostream>
#include<conio.h>
using namespace std;
class swaping
	{
		private : int n1,n2,temp;
		public :
            swaping(int n1,int n2)
			{
                    n1=n1;
                    n2=n2;
					int temp;
					temp=n1;
					n1=n2;
					n2=temp;
                    cout<<"\n\nFirst Number is : "<<n1;
					cout<<"\nSecond Number is : "<<n2;
			}
	};

int main()
	{
	    int num1,num2;
	    cout<<"Enter First Number : ";
        cin>>num1;
        cout<<"Enter Second Number :";
        cin>>num2;
        cout<<"\n\nAfter Swapping Numbers are : \n";
		swaping s1(num1,num2);
		getch();
		return 0;
	}
