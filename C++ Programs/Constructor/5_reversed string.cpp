#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class reverse
{
    private : char str[20];
               int len,i,j;
    public :
        reverse(char *s)
            {
                strcpy(str,s);
                len=strlen(str);
                cout<<"\n\nReverse of the string is : "<<strrev(str);
            }
};
int main()
{
    char a[20];
    cout<<"Enter any string : ";
    cin>>a;
    reverse s(a);
    getch();
    return 0;
}
