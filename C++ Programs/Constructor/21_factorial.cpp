#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int n,f;
public :
    sample(int a);
    sample(sample & x);
    void display();
    void cal();
};
sample::sample(int a)
{
    n=a;
    f=1;
}
sample::sample(sample & x)
{
    f=x.f;
    n=x.n;
}


void sample::display()
{
    cout << "\n\nFactorial is " << f <<endl;
}

void sample::cal()
{
    while(n>0)
    {
        f=f*n;
        n--;
    }
}
int main()
{
    int no;
    cout << "Enter a number : " ;
    cin>> no;
    sample A(no);
    A.cal();
    sample B=A;
    B.display();
    getch();
    return 0;
}
