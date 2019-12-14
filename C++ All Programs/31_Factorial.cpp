#include <iostream>
#include <conio.h>

using namespace std;

class fact
{
private:
    int a, i , fact;
public:
    int getdata();
    int factorial();
};
int fact:: getdata()
{
    cout<<"Enter a Number :";
    cin>>a;
}

int fact:: factorial()
{
    fact = 1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<"\n Factorial is = "<<fact;
    return 0;
}
int main()
{
    fact obj;
    obj.getdata();
    obj.factorial();
    getch();
    return 0;
}
