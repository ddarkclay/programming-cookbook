#include<stdio.h>
#include<conio.h>
struct s1
{
char *z;
int i;
struct s1 *p;
};
void main()
{
int i=0;
clrscr();
static struct s1 a[] = {{"nagpur",1,a+1},{"rajpur",2,a+2},{"kanpur",3,a}};
printf("\n%s",a[i].p->z);
getch();
}
