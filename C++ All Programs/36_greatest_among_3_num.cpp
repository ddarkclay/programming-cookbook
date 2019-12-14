#include<conio.h>
#include<iostream>
using namespace std;
class greatest
{
    private:
        int a,b,c;
    public:
        void accept_value();
        void calculate();
};

void greatest :: accept_value()
{
    cout<<"Enter a First Number :";
    cin>>a;
    cout<<"Enter a Second Number :";
    cin>>b;
    cout<<"Enter a Third Number :";
    cin>>c;
    cout<<endl;
}

void greatest :: calculate()
{
    if(a>b && a>c)
        cout<<a<<" is Greatest Number";
    else if(b>a && b>c)
        cout<<b<<" is Greatest Number";
    else if(c>a && c>b)
        cout<<c<<" is Greatest Number";
    else
        cout<<a<<" , "<<b<<" & "<<c<<" are equal";
}

int main()
{
    greatest great;
    great.accept_value();
    great.calculate();
    getch();
    return 0;
}
