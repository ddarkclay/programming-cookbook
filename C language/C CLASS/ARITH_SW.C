#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 char ch;
 clrscr();
 printf("+ Additon\n- Subtraction\n* Multiplication\n/ Division\n% Modulus\n");
 printf("\nEnter two numbers :");
 scanf("%d%d",&a,&b);
 printf("Enter your choice(+,-,*,/,%) :");
 scanf("%c",ch);
 ch=getche();
 switch(ch)
 {
  case '+':
       printf("\nAddition is %d",a+b);
       break;
  case '-':
       printf("\nSubtraction is %d",a-b);
       break;
  case '*':
       printf("\nMultiplication is %d",a*b);
       break;
  case '/':
       printf("\nDivision is %d",a/b);
       break;
  case '%':
       printf("\nModulus is %d",a%b);
       break;
  default:
       printf("Wrong Choice");
  }
 getch();
}
