#include<conio.h>
#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
    return(x*y);
}
inline float div(float p,float q)
{
    return(p/q);
}
main()
{
    float a,b;
    cout <<"Enter First number ";
    cin>>a;
    cout <<"Enter Second number ";
    cin>>b;
    cout << "Multiplication is " << mul(a,b)<< endl;
    cout << "Division is " << div(a,b) << endl;
    getch();
    return 0;
}
