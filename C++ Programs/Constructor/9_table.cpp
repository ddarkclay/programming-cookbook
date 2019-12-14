#include<iostream>
#include<conio.h>
using namespace std;
class table
{
    private : int i,no,t=1;
    public :
        table()
        {
            cout<<"Enter a Number : ";
            cin>>no;
            cout<<"\n\nMultiplication Table of "<<no<<" is ";
            for(i=1;i<=10;i++)
            {
                t=no*i;
                cout<<" \n"<<t;
                cout<<"";
            }
        }
};

int main()
{
    table t;
    getch();
    return 0;
}
