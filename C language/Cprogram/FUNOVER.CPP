#include<iostream.h>
#include<conio.h>

int add ( int ,int);
float add(int,float,float);
int add(int,int,int,int);
int main()
 {
   cout<<add(10,20);
   cout<<add(10,2.3,4.8);
   cout<<add(12,23,34,45);
   getch();
   return 0;
   }

   int add(int a , int b)
    {
     return (a+b);
     }
     float add ( int a,float b,float c)
      {
      return(a+b+c);
       }

     int add(int a,int b ,int c,int d)
      {
       return (a+b+c+d);
       }
