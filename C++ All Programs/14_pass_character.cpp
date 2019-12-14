// 2) Function overloading Passing character to a function
#include<conio.h>
#include<iostream>
using namespace std;
void fun();
void fun(char);
void fun(int,char);
int main()
{
    fun();
    cout<<endl;
    fun('#');
    fun(10,'@');
    getch();
    return 0;cout<<endl;
}

void fun()
{
    for(int i=0;i<10;i++)
    {
        cout<<'*';
    }
}

void fun(char ch)
{
    for(int i=0;i<8;i++)
    {
        cout<<ch<<endl;
    }
}

void fun(int no,char ch)
{
    for(int i=0;i<no;i++)
    {
        cout<<ch;
    }
}
