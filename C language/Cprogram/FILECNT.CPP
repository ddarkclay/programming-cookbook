#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
int nob=0,not=0,nol=1,noc=0;
char ch;
fp=fopen("sup.txt","r");
if (fp== NULL)
   {
   printf("cannot open file");
   fclose(fp);
   exit(1);
   }
while(1)
{
ch=getc(fp);
if(ch==EOF)
 break;
else if(ch >= 'a' && ch <= 'z')
  noc++;
else if(ch >= 'A' && ch <= 'Z')
  noc++;
else if(ch==' ')
   nob++;
else if(ch=='\n')
   nol++;
else if(ch=='\t')
   not++;
}
fclose(fp);
printf("\nnumber of character->%d",noc);
printf("\nnumber of blanks->%d",nob);
printf("\nnumber of tabs->%d",not);
printf("\nnumber of line->%d",nol);
getch();
}


