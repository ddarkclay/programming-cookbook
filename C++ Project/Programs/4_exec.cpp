#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int age;
    cout<<"Enter your Age : ";
    cin>>age;
    try
        {
            if(age>=18)
                {
                    cout<<"\n\nYou are Eligible For Driving License .";
                }
            else
                throw age;

        }
    catch(int a)
        {
            cout<<"\n\nYou are Not Eligible For Driving License .";
        }
        getch();
        return 0;
}
