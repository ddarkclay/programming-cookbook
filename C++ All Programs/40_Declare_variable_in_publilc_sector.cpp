#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
private:
    int m;
public:
    int i,j,k;
};
int main()
{
    sample s1;
    s1.i=10;
    s1.j=20;
    s1.k=s1.i+s1.j;
    cout<<"Addition of i and j is "<<s1.k;
    getch();
    return 0;
}
