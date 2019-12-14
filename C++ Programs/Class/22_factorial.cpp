#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
    int fact=1,num,i;
    public : void test()
    {
        cout<<"Enter a number to Find factorial : ";
        cin>>num;
        for(i=1;i<=num;i++)
            fact=fact*i;
        cout<<"\n\nThe Factorial is : "<<fact;
    }
};
int main()
{
    fact f1;
    f1.test();
    getch();
    return 0;
}
