#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char user[10];
    int pass;
    cout<<"Enter User_name : ";
    cin>>user;
    cout<<"Enter Password : ";
    cin>>pass;
    try
    {
        if(strcmp(user,"admin")==0 && pass==1234)
        {   cout<<"\nYou are successfully Valid User\n";
            //cout<<"your user name is "<<user<<endl;
            //cout<<"your password is "<<pass<<endl;
        }
        else
            throw "user";

    }
    catch(char const *u)
    {
        cout<<"\nInvalid User_name";
    }
    catch(int i)
    {
        cout<<"\nInvalid Password";
    }
    getch();
    return 0;
}
