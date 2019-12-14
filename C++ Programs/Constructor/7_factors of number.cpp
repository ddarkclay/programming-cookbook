#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
        int n, i, facti;
        public:
        fact(int x)  //copy constructor
        {
                n=x;
                facti=1;
        }
        fact(fact &x)
        {
                n=x.n;
                facti=1;
        }
        void calculate()
        {
                for(i=1; i<=n; i++)
                {
                        facti=facti*i;
                }
        }
        void display()
        {
                cout<<"\n\nFactorial of "<<n<<" is : "<<facti;
        }
};
int main()
{
        int x;
        cout<<"Enter a Number  : ";
        cin>>x;
        fact f1(x);
        f1.calculate();
        f1.display();
        getch();
        return 0;
}
