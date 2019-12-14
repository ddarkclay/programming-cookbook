#include<iostream>
#include<conio.h>
using namespace std;
class odd
{
    int num=1;
    public: void test()
                {
                    cout<<"The First 15 Odd numbers are : ";
                    while(num<=30)
                    {
                        if(num%2!=0)
                            cout<<"  "<<num;
                        num++;
                    }
                }
};

int main()
{
    odd obj;
    obj.test();
    getch();
    return 0;
}
