#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class code
{
  int id;
  public :
  code();
  code(int a)
{
  id = a;
}
code(code &a)
{
  id = a.id;
}
void display(void)
{
  cout<<id;
}
};
void main()
{
code A(100);
code B(A);
code C=A;
code D=A;
//code D;
//D=A;
cout<<"id of ";
A.display();
B.display();
C.display();
D.display();
getch();
}

