#include<iostream>
#include<conio.h>
using namespace std;
class M
{
    protected:int m;
    public:
        void getm(int);
};
class N
{
    protected:int n;
    public:
        void getn(int);
};
class p:public M,public N
{
public:
    void display();
};
void M::getm(int x)
{
    m=x;
}
void N::getn(int y)
{
    n=y;
}
void p::display()
{
    cout<<"First Number is : "<<m<<endl<<"Second Number is : "<<n<<endl;

    cout<<endl;
    cout<<"Multiplication is : "<<m*n;
}
int main()
{
    int n1,n2;
    p p1;
    cout<<"Enter First Number : ";
    cin>>n1;
    cout<<"Enter Second Number : ";
    cin>>n2;
    cout<<endl;
    p1.getm(n1);
    p1.getn(n2);
    p1.display();
    getch();
    return 0;
}
