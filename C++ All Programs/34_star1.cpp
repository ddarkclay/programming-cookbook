#include<conio.h>
#include<iostream>
using namespace std;
class pattern_1
{
    private:
        int no,r,c;
    public:
        void accept_value();
        void print();
};

void pattern_1 :: accept_value()
{
    cout<<"Enter a Last Row Number :";
    cin>>no;
}

void pattern_1 :: print()
{
    int num=1;
    for(r=1;r<=no;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
}

int main()
{
    pattern_1 N1;
    N1.accept_value();
    N1.print();
    getch();
    return 0;
}
