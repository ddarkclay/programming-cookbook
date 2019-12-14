#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class index
{

	private: int choice,number1,number2,basic_ch,num,radius,marks,leap,arr1[5],arr2[5],sum=0,i,j;
		     float pi=3.14,area,per,div;
		     char str[20],str2[20];
		     string line;
	public:
		int mainindex()
        {
			cout<<"\n \n \t \t \t \t |****INDEX OR CONTENT****| \n";
			cout<<" \n \t \t 1 : BASIC IN C++ \n \t \t 2 : ARRAYS / STRING \n \t \t 3 : FUNCTION IN C++ \n";
 			cout<<"\t \t 4 : CLASSES AND OBJECT \n \t \t 5 : INHERITANCE \n \t \t 6 : POLYMORPHISM \n \t \t 7 : FILE HANDLING \n";
			cout<<"\t \t 8 : EXCPTION HANDLING \n \t \t 9 : Exit .\n \n \n ";
			cout<<"ENTER A CHAPTER : ";
 			cin>>choice;
 			system("cls");
			return(choice);
		}

		void accept()
		{
			cout<<"\n \n \t \t ENTER FIRST NUMBER : ";
			cin>>number1;
			cout<<"\t \t ENTER SECOND NUMBER : ";
			cin>>number2;

		}

		void basic()
		{
			cout<<"\n \n \t \t \t \t |****BASIC IN C++****|";
			cout<<"\n \n \t \t 1 : HELLO WORLD \n \t \t 2 : ODD & EVEN ";
			cout<<"\n \t \t 3 : AREA OF CIRLE \n \t \t 4 : SWAPPING USING THIRD VARIABLE ";
			cout<<"\n \t \t 5 : TO FIND SQUARE & CUBE OF NUMBER \n \t \t 6 : TO FIND NUMBER IS +VE OR -VE ";
			cout<<"\n \t \t 7 : TO FIND PERCENTAGE & GRADE (USING ELSE IF LADDER) \n \t \t 8 : TO CHECK LEAP YEAR";
			cout<<"\n \t \t 9 : TO SHOW TEACHERS NAME (SWITCH CASE) \n \t \t 10 : ARITHEMATIC CALCULATOR (SWITCH CASE) \n \t \t 11 : BACK . \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;

			if(basic_ch==1)
				{
					cout<<"\n \n \t \t 1 : Hello World => ";
					cout<<"HELLO TO THE WORLD OF PROGRAMMING \n \n";

				}

			if(basic_ch==2)
				{
					cout<<"\n \n \t \t 1 : ODD & EVEN => ";
					cout<<"ENTER A NUMBER : ";
					cin>>num;
					if(num%2==0)
						cout<<"\n \t \t \t \t "<<num<<" IS EVEN NUMBER";
					else
						cout<<"\n \t \t \t \t"<<num<<" IS ODD NUMBER";

				}
			if(basic_ch==3)
				{
					cout<<"\n \n \t \t 1 : AREA OF CIRCLE => ";
					cout<<"ENTER A RADIUS OF CIRCLE : ";
					cin>>radius;
					area=(radius*radius)*pi;
						cout<<"\n \t \t \t \t"<<"THE AREA OF CIRCLE IS : "<<area;
				}

			if(basic_ch==4)
				{
					cout<<"\n \n \t \t 1 : SWAPPING USING THIRD VARIABLE => \n";
					int temp;
					accept();
					temp=number1;
					number1=number2;
					number2=temp;
					cout<<"\n \n \t \t \t FIRST NUMBER IS : "<<number1;
					cout<<"\n \t \t \t SECOND NUMBER IS : "<<number2;
				}

			if(basic_ch==5)
				{
					cout<<"\n \n \t \t 1 : TO FIND SQUARE & CUBE OF NUMBER => \n";
					cout<<"\n \t \t ENTER A NUMBER : ";
					cin>>num;
						cout<<"\n \t \t \t \t"<<"SQUARE OF "<<num<<" IS : "<<num*num;
						cout<<"\n \t \t \t \t"<<"CUBE OF "<<num<<" IS : "<<num*num*num;
				}

			if(basic_ch==6)
				{
					cout<<"\n \n \t \t 1 : TO FIND NUMBER IS +VE OR -VE => \n \n";
					cout<<"\t ENTER A NUMBER : ";
					cin>>num;
					if(num>0)
						cout<<"\n \t \t \t \t "<<num<<" IS POSITIVE NUMBER";
					else
						cout<<"\n \t \t \t \t"<<num<<" IS NEGATIVE NUMBER";
				}

			if(basic_ch==7)
				{
					cout<<"\n \n \t \t 1 : TO FIND PERCENTAGE & GRADE (USING ELSE IF LADDER) => \n \n";
					cout<<"\t \t ENTER FIVE SUBJECTS TOTAL MARKS : ";
					cin>>marks;
					per=marks/5;
					cout<<"\t \t";
					cout<<" \n \n YOUR PERCENTAGE IS : "<<per;
					cout<<"\t \t";
					if(per>=75 && per<=100)
						cout<<"YOU ARE DISTINCTION !";

					else if(per>=60 && per<75)
						cout<<"YOU ARE FIRST CLASS !";
					else if(per>=50 && per<60)
						cout<<"YOU ARE SECOND CLASS !";
					else if(per>=35 && per<50)
						cout<<"YOU ARE JUST PASS !";
					else
						cout<<"YOU ARE FAIL !";
					cout<<endl<<endl;
				}

			if(basic_ch==8)
				{
					cout<<"\n \n \t \t \t 1 : TO CHECK LEAP YEAR => \n \n";
					cout<<"\t \t ENTER LEAP YEAR : ";
					cin>>leap;
					cout<<endl<<endl<<"\t \t ";
					if(leap % 100 == 0 && leap % 400 == 0 || leap % 4 ==0 && leap % 100 != 0)
						cout<<leap<<" IS "<<" LEAP YEAR";
					else
						cout<<leap<<" IS NOT"<<" LEAP YEAR";
				}

			if(basic_ch==9)
				{
					cout<<"\n \n \t \t 1 : TO SHOW TEACHERS NAME (SWITCH CASE) => \n \n";
					cout<<" \t \t \t \t 1 = C++ \n \t \t \t \t 2 = VB.NET \n \t \t \t \t 3 = E-COMMERCE \n \t \t \t \t 4 = DBMS \n";
 					cout<<" Enter your choice : ";
					cin>>num;

					switch(num)
					{
 						case 1:
							 cout<<"\n \n \t \t \t RESPECTED REENA MAM";
							 break;
  						case 2:
							 cout<<"\n \n \t \t \t RESPECTED MEENAL MAM";
							 break;
  						case 3:
							 cout<<"\n \n \t \t \t RESPECTED SUPRIYA MAM";
							 break;
  						case 4:
							 cout<<"\n \n \t \t \t VERY VERY RESPECTED REENA MAM";
							 break;
					       default:
							 cout<<"\n \n \t \t \t kya mam sahi option select karo";
					}
				}

			if(basic_ch==10)
				{

					cout<<"\n \n \t \t \t 1 : ARITHEMATIC CALCULATOR (SWITCH CASE) => \n \n";
					accept();
					cout<<"\n \n \t \t 1 : ADDITION \n \t \t 2 : SUBTRACTION ";
					cout<<"\n \t \t 3 : MULTIPLICATION \n \t \t 4 : DIVISION ";

					cout<<" \n \n ENTER YOU CHOICE : ";
					cin>>choice; cout<<endl<<endl<<"\t \t";
					switch(choice)
					{
						case 1:
							cout<<"ADDITION OF "<<number1<<" & "<<number2<<" IS : "<<number1+number2; break;

                				case 2:
							cout<<"SUBTRACTION OF "<<number1<<" & "<<number2<<" IS : "<<number1-number2; break;
						case 3:
							cout<<"MULTIPLICATION OF "<<number1<<" & "<<number2<<" IS : "<<number1*number2; break;
						case 4:
							div=number1/number2;
							cout<<"DIVISION OF "<<number1<<" & "<<number2<<" IS : "<<div; break;

						default: cout<<"PLEASE ENTER VALID NO";
					}
                }

            if(basic_ch==11)
                {
                    system("cls");
                    mainindex();
                }
		}

		void arr()
		{
		    cout<<"\n \n \t \t \t \t |**** ARRAYS / STRING IN C++ ****|";
			cout<<"\n \n \t \t 1 : ACCEPT 5 NUMBERS AND PRINT IT \n \t \t 2 : SUM OF 5 NUMBERS ";
			cout<<"\n \t \t 3 : SQURE AND CUBE OF 5 NUMBERS \n \t \t 4 : SORT ASCENDING OR DECENDING ORDER OF 5 NUMBERS ";
			cout<<"\n \t \t 5 : CONVERT A NUMBER DECIMAL TO BINARY \n \t \t 6 : ACCEPT A NAME AND PRINT YOUR NAME ";
			cout<<"\n \t \t 7 : CONVERTING STRING IN REVERSE ORDER \n \t \t 8 : TO CHECK STRING IS PALINDROME OR NOT ";
			cout<<"\n \t \t 9 : COUNT LENGTH OF THE STRING  \n \t \t 10 : CONVERTING STRING UPPER CASE INTO LOWER CASE : \n \t \t 11 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;

			if(basic_ch==1)
				{
					cout<<"\n \n \t \t  ACCEPT 5 NUMBERS AND PRINT IT => \n\n";
					for(int i=1;i<=5;i++)
                    {
                        cout<<"\t\t\tENTER "<<i<<" NUMBER : ";
                        cin>>arr1[i];
                    }
                    cout<<"\n \t\t\t";
					for(int i=1;i<=5;i++)
                    {
                        cout<<"\n\t \t \t \t \t THE "<<i<<" NUMBER IS : "<<arr1[i];
                    }
				}
            if(basic_ch==2)
				{
					cout<<"\n \n \t \t  SUM OF 5 NUMBERS => \n\n";
					for(int i=1;i<=5;i++)
                    {
                        cout<<"\t\t\tEnter "<<i<<" Number : ";
                        cin>>arr1[i];
                    }
                    cout<<"\n \t\t\t";
					for(int i=1;i<=5;i++)
                    {
                        sum=sum+arr1[i];
                    }
                    cout<<"\t\t* SUM OF ARRAY IS"<<sum;
				}

				if(basic_ch==3)
				{
					cout<<"\n \n \t \t SQURE AND CUBE OF 5 NUMBERS => \n\n";
					for(int i=1;i<=5;i++)
                    {
                        cout<<"\t\t\tENTER "<<i<<" NUMBER : ";
                        cin>>arr1[i];
                    }
                    cout<<"\n \t\t\t";
					for(int i=1;i<=5;i++)
                    {
                        cout<<"\n\t\t\t\t* SQUARE OF "<<arr1[i]<<" is "<<arr1[i]*arr1[i];
                    }
                    cout<<endl<<endl;
                    for(int i=1;i<=5;i++)
                    {
                        cout<<"\n\t\t\t\t\t\t* CUBE OF "<<arr1[i]<<" is "<<arr1[i]*arr1[i]*arr1[i];
                    }
				}

				if(basic_ch==4)
				{
				    system("cls");
					cout<<"\n \n \t \t  SORT ASCENDING OR DECENDING ORDER OF 5 NUMBERS => \n\n";
					cout<<"\t\t\tENTER FIVE NUMBERS : ";
					for(i=0;i<5;i++)
                    {
                        cin>>arr1[i];
                    }
                    cout<<"\n \t\t\t\t";
					for(i=0;i<5;i++)
                    {
                        for(int j=i+1;j<5;j++)
                        {
                            int temp;
                            temp=arr1[i];
                            arr1[i]=arr1[j];
                            arr1[j]=temp;
                            if(arr1[i]>arr1[j])
                            {
                                int temp;
                                temp=arr1[i];
                                arr1[i]=arr1[j];
                                arr1[j]=temp;
                            }
                        }
                    }
                    cout<<"ASCENDING ORDER IS : \n\n\t\t\t";
                    for(int i=0;i<5;i++)
                    {
                        cout<<"\t"<<arr1[i];
                    }

                    cout<<"\n\n\n \t\t\t\t\t";
					for(i=0;i<5;i++)
                    {
                        for(int j=i+1;j<5;j++)
                        {
                            int temp;
                            temp=arr1[i];
                            arr1[i]=arr1[j];
                            arr1[j]=temp;
                            if(arr1[i]<arr1[j])
                            {
                                int temp;
                                temp=arr1[i];
                                arr1[i]=arr1[j];
                                arr1[j]=temp;
                            }
                        }
                    }
                    cout<<"DECENDING ORDER IS : \n\n\t\t\t\t\t";
                    for(int i=0;i<5;i++)
                    {
                        cout<<"\t"<<arr1[i];
                    }
                }
             if(basic_ch==5)
				{
                    system("cls");
					cout<<"\n \n \t \t CONVERT A NUMBER DECIMAL TO BINARY => \n\n";
					cout<<"\t\t\tENTER A NUMBER : ";
					cin>>num;
					cout<<"\n\n\t\t\t\t* BINARY OF "<<num<<" is : ";
					for(i=0;num!=0;i++)
                    {
                        arr1[i]=num%2;
                        num=num/2;
                    }
                    for(i--;i>=0;i--)
                    {
                        cout<<arr1[i];
                    }
				}

            if(basic_ch==6)
				{
					cout<<"\n \n \t \t  ACCEPT A NAME AND PRINT YOUR NAME  \n\n";
					cout<<"\t\t\tENTER YOUR NAME : ";
                    cin>>str;
                    num=strlen(str);
                    cout<<"\n \t\t\t\t* YOUR NAME IS : ";
					for(i=0;i<=num;i++)
                    {
                        cout<<str[i];
                    }
				}
				if(basic_ch==7)
				{
					cout<<"\n \n \t \t CONVERTING STRING IN REVERSE ORDER  \n\n";
					cout<<"\t\t\tENTER A STRING : ";
                    cin>>str;
                    num=strlen(str);
                    cout<<"\n \t\t\t\t* REVERSE STRING IS : ";
					for(i=num;i>=0;i--)
                    {
                        cout<<str[i];
                    }
				}

				if(basic_ch==8)
				{
				    cout<<"\n \n \t \t  TO CHECK STRING IS PALINDROME OR NOTR  \n\n";
					cout<<"\t\t\tENTER A STRING : ";
                    cin>>str;
                    cout<<"\n\t\t\t\t* "<<str;
                    strcpy(str2,str);
                    strrev(str);
                    if(strcmp(str,str2)==0)
                        cout<<" is PALINDROME .";
                    else
                        cout<<" is NOT PALINDROME .";
				}
				if(basic_ch==9)
				{
					cout<<"\n \n \t \t COUNT LENGTH OF THE STRING  \n\n";
					cout<<"\t\t\tENTER A STRING : ";
                    cin>>str;
                    num=strlen(str);
                    cout<<"\n \t\t\t\t* LENGTH OF THE STRING "<<str<<" IS : ";
					cout<<num;
				}
				if(basic_ch==10)
				{
					cout<<"\n \n \t \t CONVERTING STRING UPPER CASE INTO LOWER CASE  \n\n";
					cout<<"\t\t\tENTER A STRING : ";
                    cin>>str;
                    cout<<"\n \t\t\t\t* CONVERTED LOWER STRING IS : "<<str<<" IS : ";
                    for(i=0;str[i]!='\0';i++)
                    {
                        str[i]=str[i]+32;
                    }
                    for(i=0;str[i]!='\0';i++)
                    {
                        cout<<str[i];
                    }
				}

				if(basic_ch==11)
                {
                    system("cls");
                    mainindex();
                }
        }

        void fun()
		{
		    cout<<"\n \n \t \t \t \t |**** FUNCTION IN C++ ****|";
			cout<<"\n \n \t \t 1 : INLINE FUNCTION 1 \n \t \t 2 : INLINE FUNCTION 2 ";
			cout<<"\n \t \t 3 : DEFAULT ARGUMENT 1 \n \t \t 4 : DEFAULT ARGUMENT 2 ";
			cout<<"\n \t \t 5 : FUNCTION OVERLOADING 1 \n \t \t 6 : FUNCTION OVERLOADING 2 ";
			cout<<"\n \t \t 7 : FUNCTION OVERLOADING 3 \n \t \t 8 : FRIEND FUNCTION 1 ";
			cout<<"\n \t \t 9 : FRIEND FUNCTION 2  \n \t \t 10 : FRIEND FUNCTION 3 : \n \t \t 11 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

			if(basic_ch==1)
            {
                ifstream myfile("1_arithmatic.cpp");
                if(myfile.is_open())
                {
                    while(getline(myfile,line))
                    {
                        cout<<line<<"\n";
                    }
                    myfile.close();
                }
                else
                    cout<<"Unable to open file .";
            }
			if(basic_ch==11)
                {
                    system("cls");
                    mainindex();
                }
		}

};

int main()
{
 int ch;
 char ans='y';
 index mi;
 cout<<"\n \n \n \t \t \t \t    |****ALL IN ONE / ONE IN ALL****| \n \n \n";
 cout<<"\t \t  |****THIS PROGRAM IS FOR NEW STUDENTS TO START LEARNING IN C++****| \n \n \n";
 cout<<"\t \t \t      |****PRESS ENTER KEY TO PLAY THIS GAME ****| \n \n \n \t \t \t \t \t \t   ";
 getch();
 system("cls");
 cout<<"\n \n \n \t \t \t \t |****THE PROGRAMS ARE GIVEN BELOW.****| \n \t \t \t  |****SELECT THE CORRECT OPTION TO SEE THE OUTPUT****| \n \n \n";
 while(ans=='y' || ans=='Y')
 {
	 ch=mi.mainindex();
		switch(ch)

		{
			case 1:
				mi.basic(); break;
			case 2:
				mi.arr();break;
			case 3:
				mi.fun();break;
			/*case 4:
				mi.class();break;
			case 5:
				mi.inher();break;
			case 6:
				mi.poly();break;
			case 7:
				mi.file();break;
			case 8:
				mi.excep();break;*/
            case 9:
                getch();
                return 0;
                break;

			default : cout<<" PLEASE ENTER THE CORRECT OPTION";

		}
 	cout<<"\n \n \n \n \tDO YOU WANT TO CONTINUE [y/n] ! : ";
 	cin>>ans;
	system("cls");
 }


getch();
return 0;
}
