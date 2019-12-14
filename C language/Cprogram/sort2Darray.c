//Program to sort 2Darray not working

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,temp,temp1;
int a[][6]={
	   {5,2,8,12,66,55},
	   {33,66,34,90,12,44}
	   };
	for(j=0;j<6;j++)
	{
	  for(i=0; i<5; i++)
	  {
		if(a[0][i]>a[0][i+1])
		{
		    temp=a[0][i];
		    a[0][i]=a[0][i+1];
		    a[0][i+1]=temp;

		    temp1 = a[1][i];
		    a[1][i] = a[1][i+1];
		    a[1][i+1]=temp1;
		}
	  }
	 }

     printf ( "\nArray after sorting:\n") ;
     for ( i = 0 ; i <2; i++ )
     {
	for(j=0; j<6; j++)
	{
	    printf ( "%d\t", a[i][j] ) ;        //printing sorted array
	}
	printf("\n");
     }
      getch();
      }
