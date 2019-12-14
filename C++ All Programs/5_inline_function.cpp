#include<conio.h>
#include<iostream>
using namespace std;
inline float area(float s)
{
    return(s*s);
}
main()
{
    float s;
    cout << "Enter a number "<< endl;
    cin>>s;
    cout << "Area of square is "<< area(s);
    getch();
    return 0;
}
