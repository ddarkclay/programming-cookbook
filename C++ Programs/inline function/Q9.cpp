#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
inline void test()
            {
                char str1[20],str2[20];
                cout<<"Enter The String : ";
                cin>>str1;
                strcpy(str1,str2);
                strrev(str1);
                if(strcmp(str1,str2)==0)
                    cout<<"\n\nString is Palindrome";
                else
                    cout<<"\n\nString is Not a Palindrome";
}
    int main()
    {
        test();
        getch();
        return 0;
    }
