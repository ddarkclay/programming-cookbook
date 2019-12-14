/* Structure array*/
#include<stdio.h>
#include<conio.h>
struct rec
{
int height;
float weight;
};
void main()
{
int cnt=3;
int i=0;

struct rec no[3];
float q;
clrscr();
while(i<cnt)
{
printf("Enter height weight\n");
scanf("%d",&no[i].height);
/*scanf("%f",&no[i].weight);*/
scanf("%f",&q);
no[i].weight=q;
i++;
}
i=0;
clrscr();
printf("\nprinting an array of structure\n");
while(i<cnt)
{
printf("\n");
printf("%4d",no[i].height);
printf("%10.2f",no[i].weight);
i++;
}
getch();
}


