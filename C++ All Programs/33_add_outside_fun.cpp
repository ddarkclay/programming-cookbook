#include<conio.h>
#include<iostream>
using namespace std;
class Add
{
    int a,b,c;
    public:
        void getdata();
        void display();

};

void Add :: getdata()
{

            cout<<"Enter First Number :";
            cin>>a;
            cout<<endl;
            cout<<"Enter Second Number :";
            cin>>b;
            cout<<endl;
}

void Add :: display()
{
            c=a+b;
            cout<<" Addition of "<<a<<" And "<<b<<" is "<<c;
            cout<<endl;
}
int main()
{
    Add D1;
    D1.getdata();
    D1.display();
    getch();
    return 0;
}
