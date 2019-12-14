//Find Middle of number
#include<conio.h>
#include<iostream>
using namespace std;
class test
{
    private:
        int a,b;
    public:
        void set()
        {
            cout<<"Enter First Number :";
            cin>>a;
            cout<<"Enter Second Number :";
            cin>>b;
        }
    friend float mean(test);
};

float mean(test t)
{
    return float(t.a+t.b)/2.0;
}

int main()
{
    test A;
    A.set();
    cout<<"Middle Value is = "<<mean(A);
    getch();
    return 0;
}
