//Three Employee Details
#include<conio.h>
#include<iostream>
using namespace std;
class student
{
    private:
        int PRN;
        char studname[20];
        char marks[3];
    public:
        void getdata()
            {
                cout<<"Enter PRN no :";
                cin>>PRN;
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
