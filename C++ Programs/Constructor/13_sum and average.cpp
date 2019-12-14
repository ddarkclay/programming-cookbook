#include<iostream>
#include<conio.h>
using namespace std;
class sum
	{
		private : int arr[5],s=0;
		public :
			sum()
			{
				cout<<"Enter Five Numbers : ";
				for(int i=0;i<5;i++)
					{
						cin>>arr[i];
					}
                for(int i=0;i<5;i++)
					{
						s=s+arr[i];
					}
                cout<<"\n\nSum Of Array Elements are : "<<s;
				cout<<"\n\nAverage Of Array Elements are : "<<s/5;
			}
	};

int main()
	{
		sum s1;
		getch();
		return 0;
	}
