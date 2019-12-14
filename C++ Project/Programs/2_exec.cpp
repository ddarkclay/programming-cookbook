#include<iostream>
#include<conio.h>
using namespace std;
void test(int i)
{
    try
    {
        if(i!=0)
            throw i;
        else
            throw "zero";
    }
    catch(char const* s)
    {
        cout<<"\ncaught string "<<s;
    }
    catch(int a)
    {
        cout<<"\n\ncaught integer"<<a;
    }
}
int main()
{
    int num;
    cout<<"Testing Catching Statements \n\n";
    cout<<"Enter A Number ( Except 0 ): ";
    test(num);
    test(num);
    test(num);
    getch();
    return 0;
}
