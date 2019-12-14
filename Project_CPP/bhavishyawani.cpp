#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class predict
{
    private: int len,marrage,place,hm,cld,check;
		char X,XII,child,college;
		char test1[50],test2[50],test3[50],test4[50];

	public:
		void welcome()
			{
			    cout<<"\n \n \n \t \t \t     "<<"WELCOME TO THE BHAVISHYAWANI PROGRAM \n \n  ";
			   cout<<"\t \t \t \t  "<<"THIS GAME IS JUST FOR FUN \n \n ";
			   cout<<"\t \t \t \t \t   "<<" THANK YOU \n \n \n \n";
			}

		void accept()
			{
               cout<<"\n \n \n \t \t \t \t THIS PROGRAM WILL PREDICT YOUR FUTURE \n \n \n";
			   cout<<"\t \t \t   ENTER THE INITIAL LETTER OF 10TH CLASS CRUSH : ";
			   cin>>X;
			   cout<<"\t \t \t   ENTER THE INITIAL LETTER OF 12TH CLASS CRUSH : ";
			   cin>>XII;
		   	   cout<<"\t \t \t   ENTER THE INITIAL LETTER OF CHILDHOOD KA CRUSH : ";
			   cin>>child;
			   cout<<"\t \t \t   ENTER THE INITIAL LETTER OF COLLEGE CRUSH : ";
			   cin>>college;
			}

		void rule()
			{
                cout<<" \t \n \n NOW I WANT YOU TO COPERATE WITH ME,\n \t I AM GOING TO ENTER A NUMBER CONTINOUSLY & YOU HAVE TO SAY STOP ,ANYTIME";
			}

		void cal()
			{
			  cout<<"\n \n \t THE FIRST TEST : ";
			  cin>>test1;
			  len=strlen(test1);
			  marrage=len%4;

			  cout<<"\n \n \t THE SECOND TEST : ";
			  cin>>test2;
			  len=strlen(test2);
			  place=len%4;

			  cout<<"\n \n \t THE THIRD TEST : ";
			  cin>>test3;
			  len=strlen(test3);
			  hm=len%4;

			  cout<<"\n \n \t THE LAST TEST : ";
			  cin>>test4;
			  len=strlen(test4);
			  cld=len%4;
			  cout<<endl<<endl<<endl<<"\t \t \t* ";

			  check=marr(marrage);
			  if(check==0)
					exit;
			  else
				{
					cout<<endl<<endl<<"\t \t \t* ";
					plc(place);
					honey(hm);
			  		children(cld);
				}
			}

		int marr(int marrage)
			{
			  switch(marrage)
			    {
				case 1:cout<<"YOU WILL MARRAGE WITH A GIRL WHOSE INICIAL LETTER IS : "<<X;
				return 1;

				case 2:cout<<"YOU WILL MARRAGE WITH A GIRL WHOSE INICIAL LETTER IS : "<<XII;
				return 1;

				case 3:cout<<"YOU WILL MARRAGE WITH A GIRL WHOSE INICIAL LETTER IS : "<<child;
				return 1;

				case 4:cout<<"YOU WILL MARRAGE WITH A GIRL WHOSE INICIAL LETTER IS : "<<college;
				return 1;

				default:cout<<"SORRY YOU ALWAYS SINGLE . \n \t \t \t   NO NEED TO SHOW ANOTHER FUTURE . ";
				return 0;
			    }
            }

		void plc(int place)
			{
			  switch(place)
			    {
				case 1:cout<<"YOUR MARRAGE IS LOVE MARRAGE";
				break;

				case 2:cout<<"YOUR MARRAGE IS ARRANGE MARRAGE";
				break;

				case 3:cout<<"YOUR MARRAGE IS COURT MARRAGE";
				break;

				case 4:cout<<"YOUR MARRAGE IS LOVE MARRAGE";
				break;

				default:cout<<"YOUR MARRAGE IS IN DIFFERENT WAY ";
			    }
			  cout<<endl<<endl<<"\t \t \t* ";
            }

		void honey(int hm)
			{
			  switch(hm)
			    {
                    case 1:cout<<"YOU WILL GO FOR HONEYMOON IN GOA";
                    break;

                    case 2:cout<<"YOU WILL GO FOR HONEYMOON IN JUMMU KASHMIR";
                    break;

                    case 3:cout<<"YOU WILL GO FOR HONEYMOON IN PARIS";
                    break;

                    case 4:cout<<"YOU WILL GO FOR HONEYMOON IN HONGKONG";
                    break;

                    default:cout<<"YOU CELEBRATE YOUR HONEYMOON AT YOUR HOME";
                    exit;
			    }
			  cout<<endl<<endl<<"\t \t \t* ";
            }

		void children(int cld)
			{
			  switch(cld)
			    {
                    case 1:cout<<"YOUR HAVE 1 CHILD IN FUTURE";
                    break;

                    case 2:cout<<"YOUR HAVE 2 CHILD IN FUTURE";
                    break;

                    case 3:cout<<"YOUR HAVE 3 CHILD IN FUTURE";
                    break;

                    case 4:cout<<"YOUR NO LIMIT FOR CHILDREN";
                    break;

                    default:cout<<"SORRY IN FUTURE YOU HAVE NO CHILD";
                    exit;
			    }
			  cout<<endl<<endl;
            }
};

int main()
  {
		char ans=' ',answer='y';
		predict p1;
		p1.welcome();
		cout<<"\t \t      "<<"TO SEE YOUR BHAVISHYAWANI PRESS [P] KEY & to exit [E]\n \n \t \t \t \t \t \t";
 		cin>>ans;
		if(ans=='p' || ans=='P')
		{
			while(answer=='y' || answer=='Y')
				{
					system("cls");
					p1.accept();
					p1.rule();
					p1.cal();
					cout<<"\n \n \t DO YOU WANT TO SEE ANOTHER PERSON'S BHAVISHYA [Y/n] :\t";
					cin>>answer;
					cout<<"\n \n";
				}
		}
		else
		{
			exit;
		}
		return 0;

  }


