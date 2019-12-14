#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    #if (defined (_WIN32))
        std::cout<<"Windows 32 Bit Architecture !"<<std::endl;
    #elif(defined (_WIN64))
        std::cout<<"Windows 64 Bit Architecture !"<<std::endl;
    #endif
    getch();
}
