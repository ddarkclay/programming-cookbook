#include<iostream>
#include<fstream>
//#include<conio.h>
using namespace std;
int main()
{
    int character,number,word,line;
    character=number=word=line=0;
    ifstream fin;
    char ch;
    fin.open("myfile.txt");
    fin>>ch;
    cout<<ch;
    ch=fin.get();
    while(fin)
    {
        if(ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z')
            {
                character++;
            }
        else if(ch>='0' && ch<='9')
            {
                number++;
            }
        else if(ch>=' ' || ch>='\t')
            {
                word++;
            }
        cout<<ch;
        ch=fin.get();
    }
    cout<<"\n\n\nThe Number of Characters are : "<<character+3;
    cout<<"\nThe Number are : "<<number;
    cout<<"\nThe Number of Words are : "<<word-4;
    //cout<<"\nThe Number of Lines are : "<<line;
    fin.close();
    //getch();
}
