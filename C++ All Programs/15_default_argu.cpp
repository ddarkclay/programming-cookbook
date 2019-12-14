#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    float p,n,amount;
    float value(float p,int n,float r=0.15);
    void print(char ch='*',int len=40);
    print();
    cout<<endl;
    cout<<"Enter Principle :";
    cin>>p;
    cout<<"Enter Years :";
    cin>>n;
    amount=value(p,n);
    cout<<endl<<"Simple Interest="<<amount<<endl;
    print('=');
    getch();
    return 0;
}
float value(float p,int n,float r)
{
    int year=1;
    float sum=p;
    while(year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    return(sum);
}

void print(char ch,int len)
{
    for(int i=1;i<=len;i++)
        cout<<ch;
}
