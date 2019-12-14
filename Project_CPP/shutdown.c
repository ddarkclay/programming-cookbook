#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

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
    printf("HOW YOU PROCESSING OF YOUR PC : \n\n");
    gotoxy(10,6);
    printf("TO SHUTDOWN YOUR PC PRESS S :\n");
    gotoxy(10,7);
    printf("TO RESTART YOUR PC PRESS R :\n");
    gotoxy(10,8);
    printf("TO LOG OFF YOUR PC PRESS L :\n");
    gotoxy(10,9);
    printf("\n\n\nENTER YOUR CHOICE : ");
    gotoxy(30,9);
    scanf("%c",&ch);
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
            printf("Invalid Key ");
    }
    return 0;
}
