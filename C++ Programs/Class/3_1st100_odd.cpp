#include<iostream>
#include<conio.h>
using namespace std;
class test
{

    private:
            int i;
    public :
             void take()
            {
                for(i=1;i<=200;i++)
                   {
                       if(i%2==1)
                    cout<<i<<"\t ";
                   }


            }
};

    int main()
    {
        test t;
        t.take();
        getch();
        return 0;
    }
