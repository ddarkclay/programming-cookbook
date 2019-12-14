#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
private:
    int a;
public:
    void get()
    {
        cout<<"Enter Value: ";
        cin>>a;
    }
   void friend operator * (sample & m,sample & n);
   void friend operator + (sample & m,sample & n);cf
};
void operator * (sample & m,sample & n)
{
    cout<<"Multiplication = "<<m.a * n.a<<endl;
}
void operator +(sample & m,sample & n)
{
     cout<<"Addition = "<<m.a + n.a;
}
int main()
{
    sample s1,s2;
    s1.get();
    s2.get();
    s1*s2;
    s1+s2;
        getch();
        return 0;
}
