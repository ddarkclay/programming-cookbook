/* program to multiply two array*/
#include<stdio.h>
#include<conio.h>

void main()
{
int a[3][3];
int b[3][3];
int i,j;
clrscr();
printf(" A MATRIX enter 3 x 3 array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
 }
printf(" B MARIX ENTER 3X3 Array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
       scanf("%d",&b[i][j]);
	printf("\n");
 }
printf("MULTIPLICATION OF MATRAIX\n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
       printf("%d",a[i][j]*b[i][j]);
	printf("\n");
 }
 getch();
}



