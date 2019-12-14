#include<iostream>
#include<conio.h>
using namespace std;
class armstrong
{
        private:  int no,r,sum,num;
        public:
            armstrong()
                {
                    cout<<"Enter a Number to check if its Armstrong or Not : ";
                    cin>>no;
                    sum=0;
                    num=no;
                    while(no>0)
                    {
                        r=no%10;
                        sum=sum+(r*r*r);
                        no=no/10;
                    }
                    cout<<endl<<endl;
                    if(num==sum)
                        cout<<num<<" is an Armstrong Number .";
                    else
                        cout<<num<<" is Not an Armstrong Number .";
                }
};
int main()
{
    armstrong a;
    getch();
    return 0;
}
