#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample()
        {
            for(int i=0;i<10;i++)
            cout<<"\nCube of "<<i<<" is "<<i*i*i;
        }
    sample(int x)
        {
            cout<<"\n\nSquare of "<<x<<" is "<<x*x<<endl<<endl;;
            for(int i=1;i<=10;i++)
            cout<<"\nCube of "<<i<<" is "<<i*i*i;
        }
};

int main()
{
    int a,b;
    cout << " Enter a Number : ";
    cin>> a ;
    sample s1(a);
    sample s2();
    getch();
    return 0;
}
