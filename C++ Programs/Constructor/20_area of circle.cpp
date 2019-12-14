#include<iostream>
#include<conio.h>
using namespace std;
class cal
{
double r;
double area;
public:
cal()
{
cout<<"value of r="<<endl;
cin>>r;
area=3.14*r*r;
cout<<"area of circle is="<<area;

}
};
int main()
{
cal a;
getch();
return 0;
}
