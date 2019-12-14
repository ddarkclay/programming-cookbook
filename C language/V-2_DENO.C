#include<stdio.h>
#include<conio.h>
void main()
{
int rs,notes;
clrscr();
printf("Enter Amount: ");
scanf("%d",&rs);
notes=rs/2000;
 printf("\nThe no. of notes of 2000 are=%d",notes);
rs=rs%2000;
notes=rs/500;
 printf("\nThe no. of notes of 500  are=%d",notes);
rs=rs%500;
notes=rs/100;
 printf("\nThe no. of notes of 100  are=%d",notes);
rs=rs%100;
notes=rs/50;
 printf("\nThe no. of notes of 50   are=%d",notes);
rs=rs%50;
notes=rs/20;
 printf("\nThe no. of notes of 20   are=%d",notes);
rs=rs%20;
notes=rs/10;
 printf("\nThe no. of notes of 10   are=%d",notes);
rs=rs%10;
notes=rs/5;
 printf("\nThe no. of notes of 5    are=%d",notes);
rs=rs%5;
notes=rs/2;
 printf("\nThe no. of notes of 2    are=%d",notes);
rs=rs%2;
notes=rs/1;
 printf("\nThe no. of notes of 1    are=%d",notes);
rs=rs%1;
getch();
}
