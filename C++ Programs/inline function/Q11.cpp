#include<iostream>
#include<conio.h>

using namespace std;
inline int deci_binary(int no)
{   int a[10],i,num;
    num=no;
    for(i=0; no!=0; i++)
    {
        a[i]=no%2;
        no= no/2;
    }
    cout<<"\n\nBinary of the "<<num<<"  is : ";
    for(i--;i>=0;i--)
    {
        cout<<a[i];
    }
}

int main()
{
    int  n;
    cout<<"Enter the number to convert Binary : ";
    cin>>n;
    deci_binary(n);
    getch();
    return 0;
}
