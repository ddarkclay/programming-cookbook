#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
     string line;
     ifstream myfile("score.txt");
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
    //fin.close();
    getch();
}
