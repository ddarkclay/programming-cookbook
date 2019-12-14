#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int x,y,r,c;
printf("Enter order of matrix :");
scanf("%d %d",&r,&c);
printf("\n enter %d values ",r*c);
for(x=0;x<r;x++)
{
 for(y=0;y<c;y++)
    scanf("%d",&a[x][y]);
}
printf("\nElements of matrix :");
for(x=0;x<r;x++)
{
  printf("\n");
  for(y = 0;y<c;y++)
  {
  printf("%d",a[x][y]);
  }
}
if(r==c)
{
  printf("\nupper right tringle :");
  for(x=0;x<r;x++)
  {
  for(y=0;y<c;y++)
  {
     if(y>=x)
	printf("%d",a[x][y]);
     else
	printf(" ");
  }
  printf("\n lower left tringle");

}
for(x=0;x<r;x++)
{
 printf("\n");
 for(y=0;y<c;y++)
  {
 if(y<=x)
   printf("%d  ",a[x][y]);
  }
 }
}
else
  puts("not possible to print tringules");
  getch();
}

