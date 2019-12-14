#include<conio.h>
#include<iostream>
using namespace std;
class item
{
    private:
        int number;
        float cost;
    public:
        void getdata (int a,float b);
        void putdata(void)
        {
            cout<<"Number ="<<number;
            cout<<"  Cost ="<<cost;
        }
};

void item :: getdata(int a,float b)
{
    number=a;
    cost=b;
}

int main()
{
    item x;
    cout<<"\n Object x "<<"\n\n";
    x.getdata(100,358.55);
    x.putdata();
    cout<<"\n";
    item y;
    cout<<"\n Object Y"<<"\n\n";
    y.getdata(29,40.37);
    y.putdata();
    getch();
    return 0;
}
