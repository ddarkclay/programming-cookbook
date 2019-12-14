
/* Implentation of stack using arrays - STACK.C */
# include <stdio.h>
# include <conio.h>
# define SIZE 10
int arr[SIZE], top = -1,i;
void push();
void pop();
void display();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("[1].PUSH [2].POP [3].Display [4].Exit");
		printf("Enter your choice [1-4] : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1 :
				push();
				break;
			case 2 :
				pop();
				break;
			case 3 :
				display();
				break;
			case 4 :
				break;
			default :
				printf("Invalid option");
				getch();
		}
	} while(ch != 4);
	getch();
}

void push()
{
	if(top == SIZE - 1)
	{
		printf("Stack is full (overflow)");
		getch() ;
		return ;
	}
	top++ ;
	printf("Enter the element to PUSH : ");
	scanf("%d", &arr[top]);
}

void pop()
{
	if(top == -1)
	{
		printf("Stack is empty (underflow)");
		getch();
		return;
	}
	printf("The POP element is : %d", arr[top]);
	getch() ;
	top-- ;
}

void display()
{
	if(top == -1)
	{
		printf("Stack is empty (underflow)");
		getch();
		return;
	}
	printf("The elements in stack are :TOP");
	for(i = top ; i >= 0 ; i--)
		printf(" -> %d", arr[i]);
	printf("");
	getch();
}
