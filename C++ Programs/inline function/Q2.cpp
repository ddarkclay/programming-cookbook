#include<iostream>
#include<conio.h>
using namespace std;
inline int arm(int a)
{
    int n1,n2,n3,sum=0;
    n1=a/100;
    n2=(a%100)/10;
    n3=a%10;
    sum=n1*n1*n1+n2*n2*n2+n3*n3*n3;
     if(a==sum)
        cout<<a<<" is an Armstrong Number";

    else
        cout<<a<<" is Not an Armstrong Number";

}
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<endl;
    arm(num);
    getch();
    return 0;
}
