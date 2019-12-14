#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    #if (defined (__linux__))
        std::cout<<"I am on Linux !"<<std::endl;
    #elif(defined (_WIN32) || defined (_WIN64))
        std::cout<<"I am on Windows !"<<std::endl;
    #endif
  //  getch();
}
