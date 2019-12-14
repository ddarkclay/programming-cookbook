#include<iostream>
#include<conio.h>
using namespace std;
inline int prime(int n)
{

    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;

}
int main()
{
    int  i, flag;
    cout<<"Prime Number Between 50 to 100 are : \n\n";
    for(i=50+1; i<100; ++i)
    {
        flag = prime(i);

        if(flag == 1)
            cout<<"\t"<<i;
    }
    getch();
    return 0;
}


