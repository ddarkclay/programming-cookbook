#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    string line;
    ifstream myfile("F:/C++ Projects/New folder/1_arithmatic.cpp");
    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<"\n";
        }
        myfile.close();
    }
    else
        cout<<"Unable to open file .";
    getch();
    return 0;
}
