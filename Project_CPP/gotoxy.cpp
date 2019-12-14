#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x;
        coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    gotoxy(50,10);
    cout<<"Hello";
    gotoxy(60,20);
    cout<<"Hi";

    getch();
}
