#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    private: int num1,num2,q,r;
    public:
        test()
            {
                cout<<"Enter First Number : ";
                 cin>>num1;
                 cout<<"Enter Second Number : ";
                 cin>>num2;
                 q=num1/num2;
                 cout<<"\n\nThe Quotient is = "<<q<<endl;
                 r=num1%num2;
                 cout<<"\nThe Remainder is = "<<r;
            }
};

    int main()
    {
        test t;
        getch();
        return 0;
    }
