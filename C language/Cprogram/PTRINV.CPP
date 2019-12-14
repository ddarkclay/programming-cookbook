#include<stdio.h>
#include<conio.h>
void main()
{
int bott,sold,stock;
int *ptrbott,*ptrsold,*ptrstock;
ptrbott=&bott;
ptrsold=&sold;
ptrstock=&stock;
clrscr();
printf("\nEnter the current stock->");
scanf("%d",ptrstock);
printf("\nEnter the number sold->");
scanf("%d",ptrsold);
printf("\nEnter the number bought->");
scanf("%d",ptrbott);
printf("\nOriginal stock is->%d",*ptrstock);
*ptrstock+=*ptrbott-*ptrsold;
printf("\nNew stock is ->%d",*ptrstock);
getch();
}

