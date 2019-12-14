#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    private:
        int s=0,i;
    public:

        sum()
        {
            for(i=1;i<=100;i++)
                s=s+i;
            cout<<"\n";
        }
        void show()
        {
            cout<<"Sum of first 100 natural number is= "<<s;
        }
        ~sum()
        {
            cout<<"Destructor is called ";
        }
};
int main()
{
    sum ob;
    ob.show();
    getch();
    return 0;
}
