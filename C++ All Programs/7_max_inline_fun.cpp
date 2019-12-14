#include<conio.h>
#include<iostream>
using namespace std;
inline float max(float x,float y)
{
    return(x>y)?x:y;
}
int main()
{
    float a,b;
    cout <<"Enter First number :";
    cin>>a;
    cout <<"Enter Second number :";
    cin>>b;
    cout << "Maximum Number is " << max(a,b)<< endl;
    getch();
    return 0;
}
