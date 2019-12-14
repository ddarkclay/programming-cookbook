#include<conio.h>
#include<iostream>
using namespace std;
class data
{
    private:
        int a,b;
    public:
        void getdata();
        void display();
};

void data :: getdata()
{
    cout<<"Enter First Number :";
    cin>>a;
    cout<<endl;
    cout<<"Enter Second Number :";
    cin>>b;
    cout<<endl;
}
void data :: display()
{
    cout<<"The value of First Number= "<<a;
    cout<<endl;
    cout<<"The value of Second Number= "<<b;
}

int main()
{
    data D1;
    D1.getdata();
    D1.display();
    getch();
    return 0;
}
