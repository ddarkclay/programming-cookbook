//Three Employee Details
#include<conio.h>
#include<iostream>
using namespace std;
class Emp
{
    private:
        int empno,bsal;
        char empname[20];
        char des[10];
    public:
        void getdata()
            {
                cout<<"Enter Employ no :";
                cin>>empno;
                cout<<"Enter Employ Name :";
                cin>>empname;
                cout<<"Enter Designation :";
                cin>>des;
                cout<<"Enter Basic Salary :";
                cin>>bsal;
            }
        void putdata()
            {
                cout<<empno<<"\t";
                cout<<empname<<"\t\t";
                cout<<des<<"\t\t\t";
                cout<<bsal<<"\n";
            }
};

int main()
{
    Emp e[5];
    int i;
    for(i=0;i<2;i++)
    {
        e[i].getdata();
    }
    cout<<"Employ Record Are : \n\nEmp No \tEmp Name \tEmp Designation \tSalary\n";
    for(i=0;i<2;i++)
    {
        e[i].putdata();
    }
    return 0;
}
