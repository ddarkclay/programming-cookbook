#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
class concat
{
    char name[20],surname[20];
    public : void test()
        {
            cout<<"Enter First string : ";
            cin>>name;
            cout<<"Enter Second string : ";
            cin>>surname;
            strcat(name,surname);
            cout<<"\n\nThe Concatenate is : "<<name;
        }
};
int main()
{
    concat obj;
    obj.test();
    getch();
    return 0;
}
