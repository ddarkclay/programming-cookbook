#include<stdio.h>
#include<conio.h>
int revno(int );
void main()
{
  int i,j,no1,sqri,sqrno1,sqrno;
  clrscr();
  for(i=12;i<100;i++)
  {
  for(j=i;j<100;j++)
   {
   no1=revno(j);  /* 21 */
   sqri=i*i;  /* 144 */
   sqrno = no1*no1; /* 21* 21 441 */
   sqrno1 = revno(sqrno); /* 144 */
   if(i==j && sqri == sqrno1)
	printf("\t%d %d %d %d",i,no1,sqri,sqrno);
    }
}
getch();
}
int revno(int n)
{
int sum=0;
while(n>0)
      {
	 sum=(sum*10)+(n%10);
	 n=n/10;
      }
return(sum);
}
