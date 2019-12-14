#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country.txt");
    fout<<"US";
    fout<<"UK";
    fout<<"India";
    fout.close();
    fout.open("capital.txt");
    fout<<"Washington";
    fout<<"London";
    fout<<"Delhi";
    fout.close();
    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("country.txt");
    cout<<"contents of country file";
    while(fin)
    {
        fin.getline(line, N);
        cout<<line;
    }
    fin.close();
    fin.open("capital.txt");
    cout<<"contents of capital file";
    while(fin)
    {
        fin.getline(line, N);
        cout<<line;
    }
    fin.close();
    return 0;
}
