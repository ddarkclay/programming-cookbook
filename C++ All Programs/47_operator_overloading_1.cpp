#include <iostream>
#include <conio.h>

using namespace std;

class convert
    {
        private:
            int x,y,z;
        public:
            void get(int a,int b,int c);
            void display();
            void operator -();

    };

void convert :: get(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}

void convert::display()
{
    cout<<x<<"\t";
    cout<<y<<"\t";
    cout<<z<<"\n";
}

void convert :: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    cout<<"Enter Third Number : ";
    cin>>num3;
    convert s;
    s.get(num1,num2,num3);
    cout<<"\nEntered Number Are : ";
    s.display();
    -s;
    cout<<"\nChange Number Are : ";
    s.display();
    getch();
    return 0;
}
