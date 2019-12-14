#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Do you Want to see your IP Address : ";
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        system("C:\\WINDOWS\\System32\\ipconfig");
    }
    return 0;
}
