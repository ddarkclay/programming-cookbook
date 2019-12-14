#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
private:
    int val1,val2;
public:
    sample(int x,int y);
    void operator ++();   //prefix
    void operator ++(int x);   //postfix
    void display();
};
sample::sample(int x, int y)
{
    val1=x;
    val2=y;
}
void sample::operator ++()
{
    ++val1;
    ++val2;

}
void sample::operator ++(int x)
{
    val1++;
    val2++;
}
void sample::display()
{
    cout<<"value1 = "<<val1<<endl;
    cout<<"value2 = "<<val2<<endl;
}
int main()
{
    sample e1(10,20);
    cout<<"Before Overload: "<<endl;
    e1.display();
    ++e1;
    cout<<endl;
    cout<<"Prefix Form: "<<endl;
    e1.display();
    e1++;
    cout<<endl;
    cout<<"Postfix Form: "<<endl;
    e1.display();
    getch();
    return 0;
}
