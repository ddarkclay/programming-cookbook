// 2) Function overloading Maximum number
#include<conio.h>
#include<iostream>
using namespace std;
int max(int x, int y);
int max(int x, int y,int z);
int main()
{
    cout<<"Maximum Number is "<<max(60,50)<<endl;
    cout<<"Maximum Number is "<<max(70,100,75)<<endl;
    getch();
    return 0;
}
int max(int x,int y)
{
    if(x>y)
        return(x);
    else
        return(y);
}
int max(int x,int y,int z)
{
    if(x>y && x>z)
        return(x);
    else if(y>x && y>z)
        return(y);
    else
        return(z);

}

