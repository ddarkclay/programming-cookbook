#include<conio.h>
#include<iostream>
using namespace std;
inline float square(int x)
{
    return(x*x);
}
inline float cube(int y)
{

    return(y*y*y);
}
inline float max(int x,int y)
{
    return(x>y)?x:y;
}
inline float min(int x,int y)
{
    return(x<y)?x:y;
}
main()
{
    int a,b,ch;
    char yes;
    cout<<"Arithmatic Operator :"<<endl<<endl;
    cout <<"Enter First number :";
    cin>>a;
    cout <<"Enter Second number :";
    cin>>b;
    cout<<endl<<endl;
    do
    {

        cout<<"Arithmatic Operations :"<<endl;
        cout<<"1)Square. "<<endl<<"2)Cube. "<<endl<<"3)Maximum "<<endl<<"4)Minimum "<<endl<<"5)Exit "<<endl<<endl;
        cout<<"Enter your choice ";
        cin>>ch;
        cout<<endl<<endl;
        switch(ch)
        {
            case 1:
                cout<<"Square of "<< a << " is "<< square(a)<<endl;
                cout<<"Square of "<< b << " is "<<square(b)<<endl;
                break;
            case 2:
                cout<<"Cube of "<< a <<" is "<<cube(a)<<endl;
                cout<<"Cube of "<< b <<" is "<<cube(b)<<endl;
                break;
            case 3:
                cout<<"Maximum Number between "<< a <<" & "<< b <<" is " <<max(a,b)<<endl;
                break;
            case 4:
                cout<<"Maximum Number between "<< a <<" & "<< b <<" is " <<min(a,b)<<endl;
                break;

            default:
                cout<<"Invalid Choice "<<endl;
        }
        cout<<"Do you want to continue ?:"<<endl;
        cin>>yes;
        cout<<endl<<endl;
    }while(yes=='y'||yes=='Y');
    getch();
    return 0;
}
