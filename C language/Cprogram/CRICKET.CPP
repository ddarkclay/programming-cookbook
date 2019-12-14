 #include<stdio.h>
 #include<conio.h>
 struct cricket
 {
 char name[20];
 int totrun;/*,maxr,minr;*/
 /*matches*/
 int wickets;
 };

 void main()
 {
 struct cricket a[3];
 int i,max=0;
 clrscr();
  for(i=0;i<3;i++)
 {
 fflush(stdin);
 printf("Enter Name->");
 fflush(stdin);
 gets(a[i].name);
 printf("Total runs->");
 scanf("%d",&a[i].totrun);
 /*printf("Max run->");
 scanf("%d",&a[i].maxr);
 printf("Min run->");
 scanf("%d",&a[i].minr);
 printf("Matches->");
 scanf("%d",&a[i].matches);*/
 printf("wickets->");
 scanf("%d",&a[i].wickets);
 }
 max=a[0].totrun;
 int x=0;
 for(i=0;i<3;i++)
 {
   printf("%d",a[i].totrun);
   if(max < a[i].totrun)
   {
   max=a[i].totrun;
   x=i;
   }
 }
 printf("\n%s max runs are %d",a[x].name,max);
 max=a[0].wickets;
 int p=0;
 for(i=0;i<3;i++)
 {
   if(max<a[i].wickets)
   {
   max=a[i].wickets;
   p=i;
   }
 }
 printf("\n%s max wickets are %d",a[p].name,max);
 getch();
 }
