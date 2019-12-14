// 1) Function overloading
#include<conio.h>
#include<iostream>
using namespace std;
int multi(int x, int y);
int multi(int x, int y,int z);
int multi();
int main()
{
    cout<<multi(10,20)<<endl;
    cout<<multi(10,20,5)<<endl;
    cout<<multi()<<endl;
    getch();
    return 0;
}
int multi(int x,int y)
{
    return(x*y);
}
int multi(int x,int y,int z)
{
        return(x*y*z);
}
int multi()
{
    int a=2,b=5;
    return(a*b);
}

