// 2) Function overloading Maximum number by accepting three numbers
#include<conio.h>
#include<iostream>
using namespace std;
int max(int x, int y,int z);
float max(float ,int ,int);
int main()
{
    int a,b,c;
    cout<<"Enter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<"Enter Third Number :"<<endl;
    cin>>c;
    cout<<"Maximum Number is :"<<max(a,b,c)<<endl;
    cout<<max(a,b,c)<<" is Maximum";
    getch();
    return 0;
}

int max(int x,int y,int z)
{
    if(x>y && x>z)
        return(x);
    else if(y>x && y>z)
        return(y);
    else
        return(z);

}
float max(float x,int y,int z)
{
    if(x>y && x>z)
        return(x);
    else if(y>x && y>z)
        return(y);
    else
        return(z);
}

