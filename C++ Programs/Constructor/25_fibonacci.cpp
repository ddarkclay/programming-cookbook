#include <iostream>
#include<conio.h>
using namespace std;
class fibonacci
{
	int k1,k2;
	public:
	fibonacci()
	{
		k1 = 0; k2 = 1;
	}
	void series(int n)
	{
		int i,next;
		cout << k1 << " " << k2 << " " ;
		for(i=1; i <= n-2; i++)
		{
			next = k1 + k2;
			cout << next << " " ;
			k1 = k2; k2 = next;
		}
	}
};
int main()
{
	fibonacci ser;
	int n;
	cout << "How many numbers Do you want to see Fibonacci Series ? ";
	cin >> n;
	cout<<"\n\n";
	ser.series(n);
	getch();
	return 0;
}
