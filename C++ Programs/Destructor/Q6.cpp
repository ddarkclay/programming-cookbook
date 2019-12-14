#include<iostream>
#include<conio.h>
using namespace std;
class fabonicci
{
    int a,b,c;
    public:
    fabonicci()
    {
        a=0;
        b=1;

    }
    fabonicci(fabonicci &s)
    {
        a=s.a;
        b=s.b;
        cout<<"Fabonicci series upto 10 is : ";
        for(int i=0;i<=10;i++)
        {
            s.c=s.a+s.b;
            s.a=s.b;
            s.b=s.c;
            cout<<"\n"<<s.c;
        }

    }
    ~fabonicci()
    {
        cout<<"\nDestruction called";
    }
};
int main()
{
    fabonicci f1;
    fabonicci f2=f1;
    getch();
    return 0;
}
