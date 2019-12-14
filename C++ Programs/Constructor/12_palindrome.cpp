#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class palindrome
{
        private:  int n,rev,temp;
        public:
        palindrome()
        {
                rev=0;
                cout<<"Enter the number : ";
                cin>>n;
                temp=n;
                while(temp!=0)
                {
                    rev=rev*10;
                    rev=rev+temp%10;
                    temp=temp/10;
                }
                if(n==rev)
                    cout<<n<<" is Palindrome";
                else
                    cout<<n<<" is Not Palindrome";

        }

};
int main()
{
    char choice='y';
    while(choice=='y')
    {
        palindrome p;
        cout<<"\n\nDo You Want Continue [Y/n] : ";
        cin>>choice;
    }

getch();
return 0;
}
