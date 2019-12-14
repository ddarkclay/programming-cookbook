#include <iostream>
#include <conio.h>

using namespace std;

class cal
{

    double length,breadth;
    double area;
    public:
void getdata()
{
    cout<<"Enter value of Length = ";
    cin>>length;
    cout<<"Enter value of Breadth = ";
    cin>>breadth;
}
void display()
{

 area=length*breadth;
 cout<<"\n Area of Rectangle is = "<<area;
 }
};
 int main()
 {
 cal A;
 A.getdata();
 A.display();
 getch();
 return 0;
 }
