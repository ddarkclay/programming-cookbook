#include<iostream>
#include<conio.h>
using namespace std;
class b
{
private:
    int a;
public:
    int b;
    void getab();
    int geta();
    void show();
};
class d:private b
{
    private:int c;
    public:
        void mul();
        void display();
};
void b::getab()
{
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
}
int b::geta()
{
    return a;
}
void b::show()
{
    cout<<"First Number is : "<<a<<endl;
}
void d::mul()
{
    getab();
    c=b*geta();
}
void d::display()
{
    show();
    cout<<"Second Number is : "<<b<<endl;
    cout<<"Multiplication is : "<<c<<endl;
}
int main()
{
    d d1;
    d1.mul();
    cout<<endl;
    cout<<endl;
    d1.display();
    cout<<endl;
    cout<<endl;
    d1.mul();
    cout<<endl;
    cout<<endl;
    d1.display();
    getch();
    return 0;
}
