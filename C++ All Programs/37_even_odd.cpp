#include<conio.h>
#include<iostream>
using namespace std;
class even_odd
{
    private:
        int a;
    public:
        void accept_value();
        void calculate();
};

void even_odd :: accept_value()
{
    cout<<"Enter a First Number :";
    cin>>a;
    cout<<endl;
}

void even_odd :: calculate()
{
    if(a%2==0)
        cout<<a<<" is Even Number";
    else
        cout<<a<<" is Odd Number";
}

int main()
{
    even_odd num;
    num.accept_value();
    num.calculate();
    getch();
    return 0;
}
