#include<stdio.h>
#include<conio.h>
void main()
{
   int arr[10],i,p=0,n=0,z=0;
   clrscr();
   for(i=0;i<10;i++)
     {
     printf("enter the no-->");
     scanf("%d",&arr[i]);
     }
	  for(i=0;i<10;i++)
	    { if( arr[i]>0){
	      printf("\n positive no-->%d",arr[i]);
		       p++; }
		 if(arr[i]<0){
	      printf("\n negative no -->%d",arr[i]);
			 n++; }
	      if(arr[i]==0) {
      printf("\n zero-->%d",arr[i]);
       z++;    }
       }
       printf("\n%d  %d  %d",p,n,z);
       getch();

}

