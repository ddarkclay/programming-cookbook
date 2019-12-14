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

			void cube()
			{
					for(i=0;i<5;i++)
					{
						cout<<arr[i]*arr[i]*arr[i]<<" ";
					}
			}
	};

int main()
	{
		complex s1;
		complex *ptr=&s1;
		s1.accept();
		cout<<"\n\nCube of Array is : ";
		ptr->cube();
		getch();
		return 0;
	}
