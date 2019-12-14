#include <iostream>
#include <conio.h>

using namespace std;
class arm
{
private:
    int no, r, sum, num;

public:
    void getdata()
    {
      cout<<"Enter a number to check if its Armstrong or not :";
      cin>>no;

    }
    void display();
};
void arm::display()
{
   sum = 0;
    num=no;
    while(no>0)
    {
        r = no % 10 ;
      sum = sum + (r * r *r);
       no = no/10;
    }

    if(num == sum)
     cout<<"\n It is an Armstrong number";
    else
     cout<<"\n It is not an Armstrong number";

}
int main()
{
    arm A;
    A.getdata();
    A.display();
    getch();
    return 0;
}
