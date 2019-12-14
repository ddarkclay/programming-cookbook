#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,j,cnt=0;
clrscr();
/*scanf("%s",a);*/
gets(a);
for(i=0,j=0;a[i] != '\0';)
{
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i]== 'u')
    {
     cnt++;
     i++;
    }
    else
    {
      a[j] = a[i];
      j++;
      i++;
      }
}
a[j]='\0';
printf("%s",a);
printf("\ncount = %d",cnt);
getch();
}
