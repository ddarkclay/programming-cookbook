#include<iostream>
#include<conio.h>
using namespace std;
inline int sum_array()
{
    int arr[5],sum=0;

    for(int i=1;i<=5;i++)
    {
        cout<<"Enter "<<i<<" Numbers : ";
        cin>>arr[i];
    }


    cout<<"\n\nSum of the array is : ";

    for(int i=1;i<=5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main()
{
    sum_array();
    getch();
    return 0;
}

