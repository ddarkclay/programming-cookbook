#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    private:
        int length,width;
        float radius;
    public:
        area(int len,int wid)
        {
            length=len;
            width=wid;
            cout<<"\nArea of rectangle= "<<length*width;
        }
        area(float rad)
        {
            radius=rad;
            cout<<"\nArea of Circle= "<<3.14*radius*radius;
        }
        ~area()
        {
            cout<<"\nDestructor is called";
        }

};
int main()
{
    area a1(16,15);
    area a2(4.6);
    getch();
    return 0;
}
