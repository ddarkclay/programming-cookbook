#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char num[20];
    int len;
    cout<<"Enter Your Mobile Number : ";
    cin>>num;
    len=strlen(num);
    try
    {
        if(len==10)
            cout<<"\n\nYour mobile number is Correct .";
        else
            throw len;
    }
    catch(int l)
        {
            cout<<"\n\nEnter a valid 10 digit mobile number .";
        }
        getch();
        return 0;
}
