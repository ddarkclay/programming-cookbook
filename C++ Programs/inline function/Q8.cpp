#include<iostream>
#include<conio.h>
using namespace std;
inline smallest_array()
{
    int arr[4],i,mini;
    cout<<"Enter 4 Numbers in an array : ";
    for(i=0;i<=3;i++)
        cin>>arr[i];
    mini=arr[0];
    for(i=0;i<=3;i++)
    {
        if(arr[i]<mini)
            mini=arr[i];
    }
        cout<<endl<<endl<<mini<<" is the Smallest Number";
}
int main()
{
    smallest_array();
    getch();
    return 0;
}
