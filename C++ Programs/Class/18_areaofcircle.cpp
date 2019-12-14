#include<iostream>
#include<conio.h>
using namespace std;
class aoc
{
    private:
            int r;
            float pi,area;
    public:
            void check()
            {
                pi=3.14;
                cout<<"Enter the radius of a circle : ";
                cin>>r;
                area=r*r*pi;
                cout<<"\n\nThe Area of the circle is = "<<area;
            }
};
    int main()
    {
        aoc a1;
        a1.check();
        getch();
        return 0;
    }
