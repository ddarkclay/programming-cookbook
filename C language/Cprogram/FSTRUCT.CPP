#include<stdio.h>
#include<conio.h>
void arriers(char *,int n,int m);
struct emp
{
char name[20];
int empno;
int sal;
};
void main()
{
clrscr();
struct emp n1 = {"sanket",2, 20000};
arriers(n1.name,n1.empno,n1.sal);
}
void arriers(char *s,int n, int m)
{
m=m+2000;
printf("\n %s %d %d",s,n,m);
return;
}

