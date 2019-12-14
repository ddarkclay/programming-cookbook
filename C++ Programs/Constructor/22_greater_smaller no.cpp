#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int a,int b);
    sample(sample & x);
    void display();
    void cal();
};
sample :: sample(int c,int d)
{
    a=c;
    b=d;
}
sample :: sample(sample & x)
{
    a=x.a;
    b=x.b;
}
void sample :: display()
{
    if(a>b)
        cout << a<<" is the greater than "<<b << endl;
    else
        cout << b<<" is the greater than "<<a << endl;
    cout<<endl<<endl;
    if(a%2==0 && b%2==0)
        cout<<a<<" And "<<b<<" Both are Even Number .";
    else
        cout<<a<<" And "<<b<<" Both are Odd Number .";
}
int main()
{
    int a,b;
    cout << " Enter First number : ";
    cin>> a ;
    cout << " Enter First number : ";
    cin>> b;
    sample A(a,b);
    sample B(A);
    cout << "\n\nResult is : " ;
    A.display();
    //cout << " B = " ;
    //B.display();
    getch();
    return 0;
}
