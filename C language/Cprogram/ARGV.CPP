/* program to copy the contents from 1 file to another file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
clrscr();
/*if(argc !=4){
printf("error");
getch();
exit(0);
} */
int i;
//char *p[20] = argv[1];
//printf("%s",*p);
/*char str[20] = argv[1];
while(str(i)!='\0')
{
i++;
} */
//printf("%d",i);
int a=(atoi(argv[1]));
int b=(atoi(argv[2]));
int c=(atoi(argv[3]));
int sum = a+b+c;
printf ("COUNT = %d",argc);
printf("\TOTAL = %d",sum);
getch();
}
