//Simple function program
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int num;
  void square(int);
  square(num);

getch();
return 0;
}
void square(int)
{
int a, sqr=0;
cout<<"Enter number: "<<endl;
cin>>a;
sqr= a*a;
cout<<"square of " <<a<<" is :  "<< sqr<<endl;
}
