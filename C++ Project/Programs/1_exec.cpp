#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    try
    {
        if(b!=0)
        {
            cout<<"Division is "<<a/b<<endl;
        }
        else
        {
            throw(b);
        }
    }
    catch(int i)
        {
            cout<<endl<<endl<<a<<" is not divide by 0 ";
        }
    getch();
    return 0;
}
