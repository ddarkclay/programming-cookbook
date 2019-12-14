#include<stdio.h>
#include<conio.h>
#include<string.h>
void fit(char *string,int size);
void main()
{
char string[10] ={"computer"};
int size = 4;
if(strlen(string)>size){
*(string+size)='\0';  }
puts(string);
getch();
return;
}

