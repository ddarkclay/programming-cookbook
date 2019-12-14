#include <iostream>
#include <conio.h>

using namespace std;

class over
{
public:
    int add(int x,int y)
    {
        return (x+y);
    }
    int add(int x,int y,int z)
    {
       return (x+y+z);
    }
    int add(int x,int y,int z,int a)
    {
      return (x+y+z+a);
    }

};
int main()
{
    int a,b,c,d;
    cout<<"Enter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<"Enter Third Number :";
    cin>>c;
    cout<<"Enter Four Number :";
    cin>>d;
    over A;
    cout<<"\n\nAddition First And Second Number :"<<A.add(a,b)<<endl;
    cout<<"\nAddition First , Second And Third Number :"<<A.add(a,b,c)<<endl;
    cout<<"\nAddition First , Second ,Third And Four Number :"<<A.add(a,b,c,d)<<endl;
    getch();
    return 0;
}
