#include<iostream>
#include<conio.h>
using namespace std;
inline int check(int a,int b)
{
    if(a%2==0 && b%2==0)
        cout<<a<<" and "<<b<<" are Even numbers";
    if(a%2==0 && b%2!=0)
        cout<<a<<" is Even number and "<<b<" is Odd number";
    if(a%b!=0 && b%2==0)
        cout<<a<<" is Odd number and "<<b<<" is Even number";
    if(a%2!=0 && b%2!=0)
        cout<<a<<" and "<<b<<" both are Odd numbers";
}
int main()
{
    int no1,no2;
    cout<<"Enter First number : ";
    cin>>no1;
    cout<<"Enter Second number : ";
    cin>>no2;
    cout<<endl<<endl;
    check(no1,no2);
    getch();
    return 0;
}
