#include <iostream>
#include <conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class concatination
    {
        private:
            char str[50];
        public:
            concatination()
                {
                    strcpy(str,"");
                }
            concatination(char s[])
                {
                    strcpy(str,s);
                }
            void display()
                {
                    cout<<str;
                }
            concatination operator +(concatination s)
                {
                    concatination temp;
                    if(strlen(str)+strlen(s.str)<50)
                        {
                            strcpy(temp.str,str);
                            strcat(temp.str,s.str);
                        }
                    else
                        {
                            cout<<"\n String Length Exceeds !";
                            exit(1);
                        }
                        return(temp);
                }
    };

int main()
{
    char str1[20],str2[20];
    cout<<"Enter First String : ";
    cin>>str1;
    cout<<"Enter Second String : ";
    cin>>str2;
    concatination S1=str1;
    concatination S2=str2;
    concatination S3;
    S3=S1+S2;
    cout<<"Concatination String is : ";
    S3.display();
    getch();
    return 0;
}
