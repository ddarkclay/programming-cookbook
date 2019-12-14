#include<iostream>
#include<conio.h>
using namespace std;
inline int fact(int x)
{
    int i,facto=1;
    for(i=1;i<=x;i++)
    {
        facto=facto*i;
    }
    cout<<"\nFactorial of : "<<x<<" is "<<facto;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    fact(num);
    getch();
    return 0;
}
