#include<fstream>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    const int size=80;
    char line[size];
    ifstream fin1, fin2;
    fin1.open("country.txt");
    fin2.open("capital.txt");

    for(int i=1; i<=10; i++)
    {

        if(fin1. eof()!=0)
        {

            cout<<"exit from country";
            exit(1);
        }
        fin1.getline(line, size);
        cout<<"capital of"<<line;
        if(fin2. eof()!=0)
        {
            cout<<"exit from capital";
            exit(1);
        }
        fin2.getline(line, size);
        cout<<line;
    }
    return 0;
}
