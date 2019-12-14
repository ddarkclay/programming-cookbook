#include<stdio.h>
#include<conio.h>
void main()
{
 float percent;
 clrscr();
 printf("Enter your Percentage :");
 scanf("%f",&percent);
 if(percent>=90 && percent<=100)
   printf("You are result is A class passed");
 if(percent>=80 && percent<90)
   printf("You are result is B class passed");
 if(percent>=70 && percent<80)
   printf("You are result is C class passed");
 if(percent>=60 && percent<70)
   printf("You are result is D class passed");
 if(percent<40)
   printf("You are result is Fail");
 getch();
}
