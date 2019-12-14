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
    cout<<"Testing Catching Statements \n\n";
    test(1);
    test(20);
    test(0);
    getch();
    return 0;
}
