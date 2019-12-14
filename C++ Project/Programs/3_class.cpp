#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class palin
{
    private: char str[10];
             int len,i,mid,j;

    public: void test()
            {
                cout<<"Enter a String : " ;
                cin>>str;
                cout<<endl<<endl;
                len=strlen(str);
                mid=len/2;
                len--;
                for(i=0;i<=mid;i++)
                {
                    if(str[i]==str[len-i])
                        j=0;
                    else
                        j=1;
                }
                    if(j==0)
                          cout<<"String is palindrome";
                    else
                        cout<<"String is not a palindrome";
            }
};
    int main()
    {
        palin p;
        p.test();
        getch();
        return 0;
    }
