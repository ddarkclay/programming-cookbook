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
            friend void operator -(convert &s);

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

void operator -(convert &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
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
