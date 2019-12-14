#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : int arr[5],sum=0,i;
		public :
			void accept()
			{
				cout<<"Enter Five Numbers : ";
				for(i=0;i<5;i++)
					{
						cin>>arr[i];
					}
			}
			void reverse()
			{
					for(i=4;i>=0;i--)
					{
						cout<<arr[i]<<" ";
					}
			}
			void square()
			{
					for(i=0;i<5;i++)
					{
						cout<<arr[i]*arr[i]<<" ";
					}
			}
	};

int main()
	{
		complex s1;
		complex *ptr=&s1;
		s1.accept();
		cout<<"\n\nReverse of Array is : ";
		ptr->reverse();
		cout<<"\n\nSquare of Array is : ";
		ptr->square();
		getch();
		return 0;
	}
