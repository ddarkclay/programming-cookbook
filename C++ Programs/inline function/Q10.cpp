#include <iostream>
#include<conio.h>
using namespace std;
inline char check_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << c << " is a Vowel.";
    else
        cout << c << " is a Consonant.";

}

int main()
{
    char ch;

    cout<<"Enter an alphabet : ";
    cin>>ch;
    cout<<endl<<endl;
    check_vowel(ch);

    getch();
    return 0;
}
