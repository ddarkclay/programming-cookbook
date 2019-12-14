#include<iostream>
#include<conio.h>
using namespace std;
class check
{
    int number,flag=0;
public:
    check(int num)
    {
        number=num;
        for(int i=0;i<=number/2;i++)
        {
            if(number%i==0)
                flag=0;
            else
                flag=1;
        }
    }
    void show()
    {
    if(flag==0)
        cout<<number<<" is prime number ";
    else
        cout<<number<<" is not a prime number";
    }
};
int main()
{
   /* int num;
    cout<<"Enter a number= ";
    cin>>num;*/
    check ob(34);

    ob.show();
    getch();
    return 0;
}

