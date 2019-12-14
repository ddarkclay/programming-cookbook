#include<iostream.h>
#include<conio.h>
#include<string.h>
// overloading minus(-) operation
class space
{
private:
   int x,y,z;

public:
   void getdata(int a,int b,int c);
   void display();
   void operator-();
};
void space::getdata(int a, int b,int c)
{
x=a;
y=b;
z=c;
}
void space::display()
{
cout<<endl<<x<<y<<z;
}
void space::operator-()
{
x=-x;
y=-y;
z=-z;
}

int main()
{
space s;
s.getdata(10,-50,30);
s.display();
-s;
s.display();
return 0;
}
