#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class alpha
{
public:
    alpha()
    {
        count++;
    cout<<"\nThe number of objects created are"<<count;
    }
    ~alpha()
    {
        cout<<"\nThe number of object destroyed are= "<<count;
        count--;
    }
};
int main()
{
    cout<<"\nEnter main= ";
    alpha a1,a2,a3,a4;
    {
        cout<<"\nEnter block 1";
        alpha a5;
    }
    {
        cout<<"\nEnter block 2";
        alpha a6;

    }
    cout<<"\nReenter main";
    return 0;
}
