#include<iostream>
#include<conio.h>
using namespace std;
class table
{
    private: int i,num,ans;
    public:
             void creat()
             {
                 cout<<"Enter a number to see its table : ";
                 cin>>num;
                 for(i=1; i<=10; i++ )
                    {
                       ans=num*i;
                     cout<<endl<<ans;
                   }
             }
};
    int main()
  {

   table t;
    t.creat();
    getch();
    return 0;
 }
