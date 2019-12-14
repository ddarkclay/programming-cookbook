#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a,b,c,d;
  clrscr();
 printf("\nEnter the Number to convert into Roman Number(1-99) :\n");
 scanf("%d",&n);
 if(n>10)
     {
      a=n%10;
      n=n-a;

     }
     switch(n)
     {
	 case 10:
		     printf("X");
		     break;
	  case 20:
		    printf("XX");
		    break;
	  case 30:
		     printf("XXX");
		     break;
	  case 40:
		     printf("XL");
		     break;
	  case 50:
		     printf("L");
		     break;
	  case 60:
		      printf("LX");
		      break;
	   case 70:
		       printf("LXX");
		       break;
	    case 80:
		       printf("LXXX");
		       break;
	     case 90:
		       printf("XC");
		       break;
	  }
	 switch(a)
	 {
	   case 1:
		      printf("I");
		      break;
	    case 2:
		      printf("II");
		      break;
	    case 3:
		     printf("III");
		     break;
	     case 4:
		     printf("IV");
		     break;
	     case 5:
		       printf("V");
		       break;
	      case 6:
		      printf("VI");
		      break;
	       case 7:
			printf("VII");
			break;
		 case 8:
			 printf("VIII");
			 break;
		   case 9:
			      printf("IX");
			      break;
		 }


     getch();
     }

