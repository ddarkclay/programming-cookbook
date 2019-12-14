// 2) Function overloading Minimum number by accepting three numbers
#include<conio.h>
#include<iostream>
using namespace std;
int min(int x, int y,int z);
int main()
{
    int a,b,c;
    cout<<"Enter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<"Enter Third Number :";
    cin>>c;
    cout<<"Minimum Number is :"<<min(a,b,c)<<endl;
    getch();
    return 0;
}

int min(int x,int y,int z)
{
    if(x<y && x<z)
        return(x);
    else if(y<x && y<z)
        return(y);
    else
        return(z);

}


