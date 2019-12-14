#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    private : int i,sum;
    public :
            void add()
            {
                sum=0;
                for(i=1;i<=50;i++)
                {
                    sum=sum+i;
                }
                cout<<"Sum of First 50 Natural numbers are : "<<sum;
            }
};

    int main()
    {
        sum s;
        s.add();
        getch();
        return 0;
    }
