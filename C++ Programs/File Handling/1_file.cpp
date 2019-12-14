#include<fstream>
#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    ofstream outf("item.txt");
    char name[30];
    float cost;
    cout<<"Enter Item name : ";
    cin>>name;
    outf<<name;
    cout<<"Enter Item cost : ";
    cin>>cost;
    outf<<cost;
    outf.close();
    ifstream inf("item.txt");
    inf>>name;
    inf>>cost;
    cout<<"\n\nItem name is : "<<name;
    cout<<"\nItem cost is : "<<cost;
    inf.close();
    //getch();
    return 0;
}
