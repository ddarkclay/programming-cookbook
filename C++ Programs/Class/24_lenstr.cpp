#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class count
{
    int len;
    char name[50];
    public : void test()
        {
            cout<<"Enter a string to count its Length : ";
            cin>>name;
            len=strlen(name);
            cout<<"\n\nThe Length of the String is = "<<len;
        }
};
int main()
{
    count obj;
    obj.test();
    getch();
    return 0;
}
