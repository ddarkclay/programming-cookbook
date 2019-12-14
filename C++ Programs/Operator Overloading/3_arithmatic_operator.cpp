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

   void friend operator + (sample & m,sample & n);
   void friend operator - (sample & m,sample & n);
   void friend operator * (sample & m,sample & n);
   void friend operator / (sample & m,sample & n);
};

void operator +(sample & m,sample & n)
{
     cout<<"\n\nAddition of "<<m.a<<" And "<<n.a<<" is "<<m.a + n.a;
}

void operator - (sample & m,sample & n)
{
    cout<<"\nSubtraction of "<<m.a<<" And "<<n.a<<" is "<<m.a - n.a<<endl;
}

void operator * (sample & m,sample & n)
{
    cout<<"Multiplication of "<<m.a<<" And "<<n.a<<" is "<<m.a * n.a<<endl;
}

void operator / (sample & m,sample & n)
{
    cout<<"Division of "<<m.a<<" And "<<n.a<<" is "<<m.a / n.a<<endl;
}

int main()
{
    sample s1,s2;
    s1.get();
    s2.get();
    s1+s2;
    s1-s2;
    s1*s2;
    s1/s2;
    getch();
    return 0;
}
