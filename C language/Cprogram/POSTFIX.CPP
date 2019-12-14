/* program to convert infix to postfix 7 evaluation of post fix
(using single digit expression*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define BLANK ' '
#define TAB '\T'
#define MAX 50

char infix[MAX], postfix[MAX];
long int pop();
void push(char);
long int eval_post();
char infix_to_postfix();
//long int stack[MAX];
char stack[MAX];
int white_space(char);
int chq_prec(char);
int top;

void main()
{
long int value;
char choice = 'y';
clrscr();
while(choice == 'y')
{
top=0;
printf("\nEnter infix :");
fflush(stdin);
gets(infix);
infix_to_postfix();
printf("\nPostfix :%s\n",postfix);
top=0;
value=eval_post();
printf("\nValue of expression :%d",value);
printf("\nwant to continue ? (y/n):");
choice = getche();
}
}

char infix_to_postfix()
{
 int i,p=0,type,len,pre1;
 char next;
 stack[top] = '#';
 len = strlen(infix);
 infix[len]='#';
 for(i=0;infix[i] !='#';i++)
 {
 if(!white_space(infix[i]))
 {
  switch(infix[i])
  {
  case '(':
       push(infix[i]);break;
  case ')':
       while((next=pop()) !='(')
	  postfix[p++] = next;
	  break;
  case '+':
  case '-':
  case '*':
  case '/':
  case '%':
  case '^':
  pre1 = chq_prec(infix[i]);
  while(stack[top] != '#' && pre1<= chq_prec(stack[top]))  //here is error
  {
  postfix[p++] = pop(); }
  push(infix[i]);
  break;
  default:
  postfix[p++] = infix[i];
  }
  }
  }
while(stack[top] != '#')
   postfix[p++] = pop();
postfix[p]='\0';
return('1');
}

int chq_prec(char symbol)   // Func returns precedence
{
int n;
switch(symbol)
{
   case '(':{n= 0;break;}
   case '+':
   case '-':{n= 1;break;}
   case '*':
   case '/':
   case '%':{n= 2;break;}
   case '^':{n= 3;break;}
}
return(n);
}

void push(char symbol)
{
  if(top > MAX)
  {
   printf("Stack overflow\n");
   exit(1);
   }
   else
   {
   top = top+1;
   stack[top]= symbol;
   }
}

long int pop()
{
  if(top ==-1)
  {
    printf("stack underflow\n");
    exit(2);
  }
  else
    return(stack[top--]);
}

white_space(char sym)
{
  if(sym == BLANK || sym == TAB||sym =='\0')
     return 1;
  else
     return 0;
}

long int eval_post()
{   // start of function
 long int a,b,temp,result=0,len;
 int i;
 len = strlen(postfix);
 postfix[len]='#';
 for(i=0;postfix[i] != '#' ; i++)
 {  /* start of for*/
  if(postfix[i]<='9' && postfix[i]>='0')
     push(postfix[i]);
  else
     {  //start of else
     a=pop()-48;
     b=pop()-48;
     }  // end of else
  switch(postfix[i])
     { //start switch
     case '+' : temp=b+a;break;
     case '-' : temp=b-a;break;
     case '*' : temp=b*a;break;
     case '/' : temp=b/a;break;
     case '%' : temp=b%a;break;
     case '^' : temp=pow(b,a);
     }   // end of switch
     push(temp);
     result=pop();
}//end of for
 return(result);
}//stop of funcition


