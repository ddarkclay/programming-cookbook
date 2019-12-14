#include<iostream>
#include<conio.h>
using namespace std;
inline largest_array()
{
    int arr[4],i,maxi;
    cout<<"Enter 4 elements in an array : ";
    for(i=0;i<=3;i++)
        cin>>arr[i];
    maxi=arr[0];
    for(i=0;i<=3;i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
    }
        cout<<endl<<endl<<maxi<<" is the Largest number";
}
int main()
{
    largest_array();
    getch();
    return 0;
}
