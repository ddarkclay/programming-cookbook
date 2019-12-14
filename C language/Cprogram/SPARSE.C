#include<stdio.h>
#include<conio.h>
# define size 5
void main()
{
int a[10][10],sp[10][3],r,c,s=1,i,j;
clrscr();
printf("\Enter the rows and columns the sparse matrix");
scanf("\%d %d",&r,&c);
puts("Ener the values\n");
for(i =0;i<r;i++)
{
    for(j=0;j<c;j++)
       scanf("%d",&a[i][j]);
}

for(i = 0;i<r;i++)
{
    for(j=0;j<c;j++)

       if(a[i][j] != 0)
	  {
	  sp[s][0]=i;
	  sp[s][1]=j;
	  sp[s][2]=a[i][j];
	  s++;
	  }
}
sp[0][0] = r;
sp[0][1] = c;
sp[0][2]= s;
printf("the sparse matrix is given by\n");
for(i=0;i<s;i++)
{
   for(j=0;j<3;j++)
      printf("%d",sp[i][j]);
   printf("\n");
}
getch();
}







