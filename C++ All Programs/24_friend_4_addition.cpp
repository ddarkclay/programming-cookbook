//Muliplication of Two number
#include<conio.h>
#include<iostream>
using namespace std;
class Demo
{
    private:
        int a,b;
    public:
    friend int main();
};

int main()
{
    int p,q;
    Demo d1;
    cout<<"Enter First Number :";
    cin>>p;
    cout<<"Enter Second Number :";
    cin>>q;
    d1.a=p;
    d1.b=q;
    cout<<"\n Addition is = "<<d1.a+d1.b;
    getch();
    return 0;
}
