#include <iostream>
#include <conio.h>
using namespace std;
class Fibo
{
    int no,i,f1,f2,f3;
public:
    void displayFibo();
};
void Fibo :: displayFibo()
{
    f1=0;
    f2=1;
    cout<<"Enter number of terms for series :";
    cin>>no;
    cout<<"\nFibonacci series are :";

    for(i=0;i<no;i++)
    {
        cout<<"\n"<<f1;
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}
int main()
{
    Fibo FS;
    FS.displayFibo();
    getch();
    return 0;
}
