
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class index
{
	private: int choice,number1,number2,basic_ch,num,radius,marks,leap,arr1[5],arr2[5],sum=0,i,j;
		     float pi=3.14,area,per,div;
		     char str[20],str2[20],ch;
		     string line;
	public:
		int mainindex()
        {
			cout<<"\n \n \t \t \t \t |**** INDEX OR CONTENT ****| \n";
			cout<<" \n \t \t 1 : BASIC IN C++ \n \t \t 2 : ARRAYS / STRING \n \t \t 3 : FUNCTION IN C++ \n";
 			cout<<"\t \t 4 : CLASSES AND OBJECT \n \t \t 5 : CONSTRUCTOR AND DESTRUCTOR \n \t \t 6 : INHERITANCE \n \t \t 7 : EXCPTION HANDLING \n \t \t 9 : Exit .\n \n \n ";
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
				    system("cls");
					cout<<"\n \n \t \t 1 : Hello World => ";
					cout<<"HELLO TO THE WORLD OF PROGRAMMING \n \n";
				}

			if(basic_ch==2)
				{
				    system("cls");
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
				    system("cls");
					cout<<"\n \n \t \t 1 : AREA OF CIRCLE => ";
					cout<<"ENTER A RADIUS OF CIRCLE : ";
					cin>>radius;
					area=(radius*radius)*pi;
						cout<<"\n \t \t \t \t"<<"THE AREA OF CIRCLE IS : "<<area;
				}

			if(basic_ch==4)
				{
				    system("cls");
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
				    system("cls");
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
				    system("cls");
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
				    system("cls");
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
				    system("cls");
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
                    system("cls");
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
				    system("cls");
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
				    system("cls");
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
				    system("cls");
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
				    system("cls");
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
			cout<<"\n \n \t \t 1 : INLINE FUNCTION TO FIND FACTORIAL OF NUMBER \n \t \t 2 : INLINE FUNCTION TO CHECK NUMBER IS ARMSTRONG OR NOT ";
			cout<<"\n \t \t 3 : DEFAULT ARGUMENT TO CHECK GIVEN NUMBER IS ODD OR EVEN \n \t \t 4 : DEFAULT ARGUMENT TO CALCULATE SQUARE AND CUBE OF THE NUMBER ";
			cout<<"\n \t \t 5 : FUNCTION OVERLOADING FIND FACTORIAL AND SQUARE OF FIRST NUMBER \n \t \t 6 : FUNCTION OVERLOADING TO CHECK GIVEN CARACTER IS VOVEL OR CONSONENT AND SWAP TWO NUMBERS ";
			cout<<"\n \t \t 7 : FUNCTION OVERLOADING TO PRINT MULTIPLICATION TABLE AND FIBONACII SERIES \n \t \t 8 : FRIEND FUNCTION TO ARITHMATIC CALCULTION ";
			cout<<"\n \t \t 9 : FRIEND FUNCTION TO CALCULATE SQUARE AND CUBE  \n \t \t 10 : FRIEND FUNCTION TO CHECK YEAR TO LEAP YEAR OR NOT : \n \t \t 11 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

            if(basic_ch==1)
            {
                system("cls");
                cout<<"\n \n \t \t  INLINE FUNCTION TO FIND FACTORIAL OF NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_inline.cpp");
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
                system("start 1_inline.exe");
                system("pause");
            }

            if(basic_ch==2)
            {
                system("cls");
                cout<<"\n \n \t \t  INLINE FUNCTION TO CHECK NUMBER IS ARMSTRONG OR NOT  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_inline.cpp");
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
                system("start 2_inline.exe");
                system("pause");
            }

            if(basic_ch==3)
            {
                system("cls");
                cout<<"\n \n \t \t  DEFAULT ARGUMENT TO CHECK GIVEN NUMBER IS ODD OR EVEN  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_default.cpp");
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
                system("start 1_default.exe");
                system("pause");
            }

            if(basic_ch==4)
            {
                system("cls");
                cout<<"\n \n \t \t  DEFAULT ARGUMENT TO CALCULATE SQUARE AND CUBE OF THE NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_default.cpp");
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
                system("start 2_default.exe");
                system("pause");
            }

            if(basic_ch==5)
            {
                system("cls");
                cout<<"\n \n \t \t  FUNCTION OVERLOADING FIND FACTORIAL AND ADDITION OF TWO NUMBER NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_fun_over.cpp");
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
                system("start 1_fun_over.exe");
                system("pause");
            }

            if(basic_ch==6)
            {
                system("cls");
                cout<<"\n \n \t \t  FUNCTION OVERLOADING TO CHECK GIVEN CARACTER IS VOVEL OR CONSONENT AND SWAP TWO NUMBERS   \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_fun_over.cpp");
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
                system("start 2_fun_over.exe");
                system("pause");
            }

            if(basic_ch==7)
            {
                system("cls");
                cout<<"\n \n \t \t  FUNCTION OVERLOADING TO PRINT MULTIPLICATION TABLE AND FIBONACII SERIES  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_fun_over.cpp");
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
                system("start 3_fun_over.exe");
                system("pause");
            }

			if(basic_ch==8)
            {
                system("cls");
                cout<<"\n \n \t \t  FRIEND FUNCTION TO ARITHMATIC CALCULTION  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_friend.cpp");
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
                system("start 1_friend.exe");
                system("pause");
            }

            if(basic_ch==9)
            {
                system("cls");
                cout<<"\n \n \t \t  FRIEND FUNCTION TO CALCULATE SQUARE AND CUBE  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_friend.cpp");
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
                system("start 2_friend.exe");
                system("pause");
            }

            if(basic_ch==10)
            {
                system("cls");
                cout<<"\n \n \t \t  FRIEND FUNCTION TO CHECK YEAR TO LEAP YEAR OR NOT  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_friend.cpp");
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
                system("start 3_friend.exe");
                system("pause");
            }

			if(basic_ch==11)
            {
                    system("cls");
                    mainindex();
            }
		}

		void classes()
		{
		    cout<<"\n \n \t \t \t \t |**** CLASS IN C++ ****|";
			cout<<"\n \n \t \t 1 : USING CLASS TO FIND QUOTIENT AND REMAINDER OF NUMBER \n \t \t 2 : USING CLASS CHECK WHEATHER A NUMBER IS PRIME OR NOT ";
			cout<<"\n \t \t 3 : USING CLASS CHECK WHEATHER A STRING IS PALINDROME OR NOT \n \t \t 4 : USING CLASS PRINT THIS STAR PATTERN : \n\n\t\t\t 1\n\t\t\t 2  3\n\t\t\t 4  5  6\n\t\t\t 7  8  9 10\n\n";
			cout<<"\n \t \t 5 : USING CLASS SORT ARRAY OF NUMBER IN ASCENDING ORDER\n \t \t 6 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

            if(basic_ch==1)
            {
                system("cls");
                cout<<"\n \n \t \t  USING CLASS TO FIND QUOTIENT AND REMAINDER OF NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_class.cpp");
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
                system("start 1_class.exe");
                system("pause");
            }

            if(basic_ch==2)
            {
                system("cls");
                cout<<"\n \n \t \t  USING CLASS CHECK WHEATHER A NUMBER IS PRIME OR NOT  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_class.cpp");
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
                system("start 2_class.exe");
                system("pause");
            }

            if(basic_ch==3)
            {
                system("cls");
                cout<<"\n \n \t \t  USING CLASS CHECK WHEATHER A STRING IS PALINDROME OR NOT  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_class.cpp");
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
                system("start 3_class.exe");
                system("pause");
            }

            if(basic_ch==4)
            {
                system("cls");
                cout<<"\n \n \t \t  USING CLASS PRINT THIS STAR PATTERN : \n\n\t\t\t 1\n\t\t\t 2  3\n\t\t\t 4  5  6\n\t\t\t 7  8  9 10  \n\n";
                ifstream myfile("F:/C++ Project/Programs/4_class.cpp");
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
                system("start 4_class.exe");
                system("pause");
            }

            if(basic_ch==5)
            {
                system("cls");
                cout<<"\n \n \t \t  USING CLASS SORT ARRAY OF NUMBER IN ASCENDING ORDER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/5_class.cpp");
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
                system("start 5_class.exe");
                system("pause");
            }

			if(basic_ch==6)
            {
                    system("cls");
                    mainindex();
            }
		}

		void construct_destruct()
		{
		    cout<<"\n \n \t \t \t \t |**** CONSTRUCTOR AND DESTRUCTOR IN C++ ****|";
			cout<<"\n \n \t \t 1 : USING DEFAULT CONSTRUCTOR CHECK NUMBER IS PRIME OR NOT ALSO FIND IT IS EVEN OR ODD \n \t \t 2 : USING PARAMETERIZED CONTRUCTOR TO CALCULATE FACTORIAL OF GIVEN NUMBER : ";
			cout<<"\n \t \t 3 : USING COPY CONSTRUCTOR TO PRINT MULTIPLICATION TABLE OF GIVEN NUMBER \n \t \t 4 : USING DESTRUUCTOR FIND SUM OF FIRST 100 NATURAL NUMBERS AND DESTROY OBJECT : ";
			cout<<"\n \t \t 5 : USING COPY CONSTRUCTOR TO PRINT FIBONACCI SERIES AND DESTORY THE OBJECT USING DESTRUCTOR\n \t \t 6 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

            if(basic_ch==1)
            {
                system("cls");
                cout<<"\n \n \t \t  USING DEFAULT CONSTRUCTOR CHECK NUMBER IS PRIME OR NOT ALSO FIND IT IS EVEN OR ODD  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_construct.cpp");
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
                system("start 1_construct.exe");
                system("pause");
            }

            if(basic_ch==2)
            {
                system("cls");
                cout<<"\n \n \t \t  USING PARAMETERIZED CONTRUCTOR TO CALCULATE FACTORIAL OF GIVEN NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_construct.cpp");
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
                system("start 2_construct.exe");
                system("pause");
            }

            if(basic_ch==3)
            {
                system("cls");
                cout<<"\n \n \t \t  USING COPY CONSTRUCTOR TO FIND FACTORIAL OF GIVEN NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_construct.cpp");
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
                system("start 3_construct.exe");
                system("pause");
            }

            if(basic_ch==4)
            {
                system("cls");
                cout<<"\n \n \t \t  USING DESTRUUCTOR FIND SUM OF FIRST 100 NATURAL NUMBERS AND DESTROY OBJECT \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_destruct.cpp");
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
                system("start 1_destruct.exe");
                system("pause");
            }

            if(basic_ch==5)
            {
                system("cls");
                cout<<"\n \n \t \t  USING COPY CONSTRUCTOR TO PRINT FIBONACCI SERIES AND DESTORY THE OBJECT USING DESTRUCTOR  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_destruct.cpp");
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
                system("start 2_destruct.exe");
                system("pause");
            }

			if(basic_ch==6)
            {
                    system("cls");
                    mainindex();
            }
		}

		void inher()
		{
		    cout<<"\n \n \t \t \t \t |**** INHERITANCE IN C++ ****|";
			cout<<"\n \n \t \t 1 : USING SINGLE INHERITANCE ACCEPT PERSON'S NAME , SALARY AND AGE AND PRINT DATA \n \t \t 2 : USING MULTILEVEL INHRITANCE ACCEPT STUDENT ROLL NUMBER AND SUBJECT MARKS\n\t\t     PRINT TOTAL MARKS OF SUBJECTS : ";
			cout<<"\n \t \t 3 : USING MULTIPLE INHERITANCE ACCEPT TWO NUMBER AND PRINT SQUARE OF FIRST NUMBER\n\t\t     AND PRINT CUBE OF SECOND NUMBER \n \t \t 4 : USING HYBRID INHERITANCE CALCULATE ADDITION MULTTIPLICATION AND SUBTRACTION OF TWO NUMBER : ";
			cout<<"\n \t \t 5 : USING HYBRID INHERITANCE ACCEPT A NUMBER AND CALCULATE SQUARE AND CUBE OF THE NUMBER\n \t \t 6 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

            if(basic_ch==1)
            {
                system("cls");
                cout<<"\n \n \t \t  USING SINGLE INHERITANCE ACCEPT PERSON'S NAME , SALARY AND AGE AND PRINT DATA \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_inheri.cpp");
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
                system("start 1_inheri.exe");
                system("pause");
            }

            if(basic_ch==2)
            {
                system("cls");
                cout<<"\n \n \t \t  USING MULTILEVEL INHRITANCE ACCEPT STUDENT ROLL NUMBER AND SUBJECT MARKS PRINT TOTAL MARKS OF SUBJECTS  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_inheri.cpp");
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
                system("start 2_inheri.exe");
                system("pause");
            }

            if(basic_ch==3)
            {
                system("cls");
                cout<<"\n \n \t \t  USING MULTIPLE INHERITANCE ACCEPT TWO NUMBER AND PRINT SQUARE OF FIRST NUMBER AND PRINT CUBE OF SECOND NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_inheri.cpp");
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
                system("start 3_inheri.exe");
                system("pause");
            }

            if(basic_ch==4)
            {
                system("cls");
                cout<<"\n \n \t \t  USING HYBRID INHERITANCE CALCULATE ADDITION MULTTIPLICATION AND SUBTRACTION OF TWO NUMBER \n\n";
                ifstream myfile("F:/C++ Project/Programs/4_inheri.cpp");
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
                system("start 4_inheri.exe");
                system("pause");
            }

            if(basic_ch==5)
            {
                system("cls");
                cout<<"\n \n \t \t  USING HYBRID INHERITANCE ACCEPT A NUMBER AND CALCULATE SQUARE AND CUBE OF THE NUMBER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/5_inheri.cpp");
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
                system("start 5_inheri.exe");
                system("pause");
            }

			if(basic_ch==6)
            {
                    system("cls");
                    mainindex();
            }
		}

		void excep()
		{
		    cout<<"\n \n \t \t \t \t |**** EXCEPTION IN C++ ****|";
			cout<<"\n \n \t \t 1 : USING EXCEPTION CHECK NUMBER IS DIVIDED BY 0 OR NOT \n \t \t 2 : USING EXCEPTION CATING ALL EXCEPTION ";
			cout<<"\n \t \t 3 : USING EXCEPTION ACCEPT USERNAME AND PASSWORD IF ANYONE IF FAIL PRINT INVALID USER \n \t \t 4 : USING EXCEPTION ACCEPT USER AGE AND CHECK USER IS VALID FOR DRIVING LICENSE OR NOT ";
			cout<<"\n \t \t 5 : ACCEPT 10 DIGIT NUMBER IF NOT VALID NUMBER THEN SHOW MESSAGE \n \t \t 6 : BACK \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;
            cout<<endl<<endl;

            if(basic_ch==1)
            {
                system("cls");
                cout<<"\n \n \t \t  USING EXCEPTION CHECK NUMBER IS DIVIDED BY 0 OR NOT  \n\n";
                ifstream myfile("F:/C++ Project/Programs/1_exec.cpp");
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
                system("start 1_exec.exe");
                system("pause");
            }

            if(basic_ch==2)
            {
                system("cls");
                cout<<"\n \n \t \t  USING EXCEPTION CATING ALL EXCEPTION  \n\n";
                ifstream myfile("F:/C++ Project/Programs/2_exec.cpp");
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
                system("start 2_exec.exe");
                system("pause");
            }

            if(basic_ch==3)
            {
                system("cls");
                cout<<"\n \n \t \t  USING EXCEPTION ACCEPT USERNAME AND PASSWORD IF ANYONE IF FAIL PRINT INVALID USER  \n\n";
                ifstream myfile("F:/C++ Project/Programs/3_exec.cpp");
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
                system("start 3_exec.exe");
                system("pause");
            }

            if(basic_ch==4)
            {
                system("cls");
                cout<<"\n \n \t \t  USING EXCEPTION ACCEPT USER AGE AND CHECK USER IS VALID FOR DRIVING LICENSE OR NOT";
                ifstream myfile("F:/C++ Project/Programs/4_exec.cpp");
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
                system("start 4_exec.exe");
                system("pause");
            }

            if(basic_ch==5)
            {
                system("cls");
                cout<<"\n \n \t \t  ACCEPT 10 DIGIT NUMBER IF NOT VALID NUMBER THEN SHOW MESSAGE  \n\n";
                ifstream myfile("F:/C++ Project/Programs/5_exec.cpp");
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
                system("start 5_exec.exe");
                system("pause");
            }

			if(basic_ch==6)
            {
                    system("cls");
                    mainindex();
            }
		}

};

COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x;
        coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
 int ch;
 char ans='y';
 index mi;
 /*HANDLE hStdout;
 COORD destCoord;
 hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

 position cursor at start of window
 destCoord.X = 50;
 destCoord.Y = 10;
 SetConsoleCursorPosition(hStdout, destCoord);*/
 //gotoxy(100,20);

 cout<<"\n \n \n \t \t \t \t    |**** ALL IN ONE / ONE IN ALL ****| \n \n \n";
 cout<<"\t \t  |**** THIS PROGRAM IS FOR NEW STUDENTS TO START LEARNING IN C++ ****| \n \n \n";
 cout<<"\t \t \t      |**** PRESS ENTER KEY TO START THIS PROGRAM ****| \n \n \n \t \t \t \t \t \t   ";
 getch();
 system("cls");
 cout<<"\n \n \n \t \t \t \t |**** THE PROGRAMS ARE GIVEN BELOW. ****| \n \t \t \t  |**** SELECT THE CORRECT OPTION TO SEE THE OUTPUT ****| \n \n \n";
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
			case 4:
				mi.classes();break;
			case 5:
				mi.construct_destruct();break;
            case 6:
				mi.inher();break;
			case 7:
				mi.excep();break;
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

