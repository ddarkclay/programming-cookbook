#include<iostream>
#include<conio.h>
using namespace std;
class swp
{
    private: int x,y,z;

    public: void test()
    {
     cout<<"Enter First Number : ";
     cin>>x;
     cout<<"Enter Second Number : ";
     cin>>y;
     z=x;
     x=y;
     y=z;
     cout<<"\n\nAfter swapping the number is : \n\nFirst Number is : "<<x<<"\nSecond Number is : "<<y;
    }
};
    int main()
    {
        swp s;
        s.test();
        getch();
        return 0;
    }
