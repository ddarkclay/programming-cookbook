#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
    private:
            int i,num,fact;
    public:
            void getdata()
            {
                cout<<"Enter a Number to get its Factorial : ";
                cin>>num;
            }
            int display()
            {
                fact=1;
                for(i=1;i<=num;i++)
                {
                    fact=fact*i;
                }
                cout<<"\n\nThe Factorial of "<<num<<" is : "<<fact;
            }
};

    int main()
    {
        factorial f;
        f.getdata();
        f.display();
        getch();
        return 0;
    }
