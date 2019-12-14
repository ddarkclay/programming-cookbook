#include<conio.h>
#include<iostream>
using namespace std;
class prime
{
    private:
        int a,flag=0;
    public:
        void accept_value();
        int calculate();
};

void prime :: accept_value()
{
    cout<<"Enter a First Number :";
    cin>>a;
    cout<<endl;
}

int prime :: calculate()
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<a<<" is Not Prime Number";
    else
        cout<<a<<" is Prime Number";
}

int main()
{
    prime num;
    num.accept_value();
    num.calculate();
    getch();
    return 0;
}
