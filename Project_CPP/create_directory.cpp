/*
    This program shows 3 ways of
    creating a folder in your current
    directory.
    The current directory
    is where the c++ source file is at.
    Try it on your computer
    to see that the folder
    was created.
*/
#include <iostream>
#include <io.h>//for mkdir() function
#include <windows.h>//for CreateDirectory() function
#include <cstdlib>//for system() function
using namespace std;

int main()
{
    CreateDirectory("1",NULL);
    //mkdir("1");
    //system("mkdir folder3");
    system("dir");//This will display all the files in the directory including the 3 new folder that we just created.This will not work on the sololearn complier
    return 0;
}
