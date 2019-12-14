int main()
{
 int num,r,c;
 static int i=1;
 static char ch='A';
 printf("Enter no. of rows : ");
 scanf("%d", &num);
 for(r=1; r<=num; r++)
 {
  for(c=1; c<=r; c++)
  {
    if(r%2==0)
       printf(" %c",ch++);
    else
       printf(" %d",i++);
  }
  printf("\n");
 }
 getch();
 return 0;
}
