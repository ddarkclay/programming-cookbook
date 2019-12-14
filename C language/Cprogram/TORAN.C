#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,sp,spcnt=0;
clrscr();
for(i=71;i>=65;i--)
{
 for(j=65;j<=i;j++)
    printf("%c",j);
 for(sp=1;sp<=spcnt;sp++)
     printf(" ");
     --j;
 for(k=j;k>=65;k--)
     printf("%c",k);
    printf("\n");
    spcnt+=2;
}
getch();
}
