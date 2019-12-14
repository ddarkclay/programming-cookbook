#include<fstream>
#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    char source[20],target[20];
    cout<<"Enter Source Filename : ";
    cin>>source;
    cout<<"Enter Target Filename : ";
    cin>>target;
    ifstream infile(source);
    ofstream outfile(target);
    outfile<<infile.rdbuf();        //returns a pointer to buffer stream
    cout<<"File Successfully copy...";
    //getch();
    return 0;
}
