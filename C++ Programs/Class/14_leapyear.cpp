#include<iostream>
#include<conio.h>
using namespace std ;
class leap
{
    private: int year;
    public:
            void check()
            {
                cout<<"Enter the year to see whether its a leap year or not : ";
                cin>>year;
                if(year%400==0 && year%100==0 || year%4==0 && year%100!=0 )
                {
                    cout<<endl<<year<<" is a Leap Year";
                }
                else {
                    cout<<endl<<year<<" is not a Leap Year";
                }
            }
};

    int main()
       {
        leap c1;
        c1.check();
        getch();
        return 0;
       }
