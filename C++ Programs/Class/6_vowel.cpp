#include <iostream>
#include <conio.h>
using namespace std;
class vowel
{
    private:
        char ch;
    public:
        void take()
        {
            cout<<"Enter a character : ";
            cin>>ch;
        }

    void show()
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            cout<<endl<<endl<<ch<<" is Vowel";
        else
            cout<<endl<<endl<<ch<<" is Consonant";
   }
};

int main()
{
    vowel v;
    v.take();
    v.show();
    getch();
    return 0;
}
