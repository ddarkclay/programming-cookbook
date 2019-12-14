#include<iostream>
#include<conio.h>
using namespace std;
class vowel
{
    private: char ch;
    public:
        vowel(char ch)
        {

            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                cout<<ch<<" is Vowel .";
            else
                cout<<ch<<" is Consonant .\n";
        }
};
int main()
{
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    cout<<endl<<endl;
    vowel v(ch);
    getch();
    return 0;
}
