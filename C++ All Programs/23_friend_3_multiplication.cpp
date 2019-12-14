//Muliplication of Two number
#include<conio.h>
#include<iostream>
using namespace std;
class sample
{
    private:
        int a,b;
    public:
        void set(int i,int j);
    friend int mul(sample x);
};

void sample :: set(int i,int j)
{
    a=i;
    b=j;
}

int mul(sample x)
{
    return(x.a*x.b);
}

int main()
{
    int p,q;
    sample s;
    cout<<"Enter First Number :";
    cin>>p;
    cout<<"Enter Second Number :";
    cin>>q;
    s.set(p,q);
    cout<<"Multiplication is = "<<mul(s);
    getch();
    return 0;
}
