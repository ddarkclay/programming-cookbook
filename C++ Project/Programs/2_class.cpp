#include<iostream>
#include<conio.h>
using namespace std;
class prime
{
    private:
            int i,n;
    public:
            int check()
            {
                cout<<"Enter a number to check whether its a prime number or not : ";
                cin>>n;
                i=2;
                cout<<endl<<endl;
                while(i<n)
                {
                    if(n%i==0)
                    {
                        cout<<n<<" is not a prime number \n";
                        break;
                    }
                    else
                    {
                        cout<<n<<" is a prime number\n";
                        break;
                    }
                    i++;
                }
            }
};
    int main()
    {
        prime p;
        p.check();
        getch();
        return 0;
    }
