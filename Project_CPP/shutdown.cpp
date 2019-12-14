#include<stdlib.h>
#include<iostream>
#include<windows.h>
using namespace std;

COORD coord = {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    char ch;
    gotoxy(10,5);
    cout<<"HOW YOU PROCESSING OF YOUR PC : \n\n";
    gotoxy(10,6);
    cout<<"TO SHUTDOWN YOUR PC PRESS S :\n";
    gotoxy(10,7);
    cout<<"TO RESTART YOUR PC PRESS R :\n";
    gotoxy(10,8);
    cout<<"TO LOG OFF YOUR PC PRESS L :\n";
    gotoxy(10,9);
    cout<<"\n\n\nENTER YOUR CHOICE : ";
    gotoxy(30,9);
    cin>>ch;
    switch(ch)
    {
        case 's' : case 'S' :
            system("C:\\WINDOWS\\System32\\shutdown /s");
            break;
        case 'r' : case 'R' :
            system("C:\\WINDOWS\\System32\\shutdown /r");
            break;
        case 'l' : case 'L' :
            system("C:\\WINDOWS\\System32\\shutdown /l");
            break;
        default :
            cout<<"Invalid Key ";
    }
    return 0;
}
