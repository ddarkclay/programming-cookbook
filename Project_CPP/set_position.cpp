#include <windows.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(void){
//initialize objects for cursor manipulation
HANDLE hStdout;
COORD destCoord;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

//position cursor at start of window
destCoord.X = 10;
destCoord.Y = 3;
SetConsoleCursorPosition(hStdout, destCoord);
cout<<"Hello";

destCoord.X = 30;
destCoord.Y = 1;
SetConsoleCursorPosition(hStdout, destCoord);
cout<<"Hi";
getch();
}
