 #include<stdio.h>
 #include<conio.h>
    void cal(int yr,int mo,int fd,int da);
    static char *months[]={
				"January",
				"February",
				"March",
				"April",
				"May",
				"June",
				"July",
				"August",
				"September",
				"October",
				"November",
				"December",
			   };
     void main()
	{
		static int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		long int ndays,ldays,tydays,tdays;
		int i,d,m,fday,y;
		char ch;
		clrscr();
		printf("Enter year (1900 on word) : ");
		scanf(" %d",&y);
		printf("Enter a Month (number)    : ");
		scanf("%d",&m);


		ndays=(y-1)*365l;
		ldays=(y-1)/4-(y-1)/100+(y-1)/400;
		tdays=ndays+ldays;
		if((y%100==0 && y%400==0) || (y%4==0 && y%100!=0))
			days[1]=29;
		else
			days[1]=28;
				d=days[m-1];
		tydays=0;

		for(i=0;i<=m-2;i++)
			tydays=tydays+days[i];
		tdays=tydays+tdays;
		fday=tdays%7;
		cal(y,m,fday,d);
	}
		void cal(int yr,int mo,int fd,int da)
		{
			int i,r,c;
			char a;
			clrscr();
			gotoxy(20,2);
			printf("%s  %d",months[mo-1],yr);
			gotoxy(5,4);
			printf("_____________________________________________");
			gotoxy(10,6);
			printf("Mon   Tue   Wed   Thu   Fri   Sat   Sun");
			gotoxy(5,7);
			printf("_____________________________________________");
			r=9;
			c=11+6*fd;
			for(i=1;i<=da;i++)
			{
				gotoxy(c,r);

				printf("%d",i);
				if(c<=41)
					c=c+6;
				else
				{
					c=11;
					r=r+1;
				}
			}
			gotoxy(5,15);
			printf("_____________________________________________");

			printf("\n\n\n\n\n            press any key to exit....!!!");
			getch();
		}
