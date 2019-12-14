#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
    int emp_id,age,salary;

    public:
        emp(int id,int a,int sal)
        {
            emp_id=id;
            age=a;
            salary=sal;
        }
        emp(emp &s)
        {
            emp_id=s.emp_id;
            age=s.age;
            salary=s.salary;
            cout<<"copy constructor working";
        }
        void show()
        {
            cout<<"\nId of the employee= "<<emp_id;
            cout<<"\nAge of the employee= "<<age;
            cout<<"\nSalary of the employee= "<<salary;
        }
        ~emp()
        {
            cout<<"\nDestructor function is called";
        }
};
int main()
{
    emp s1(171,25,15000);
    emp s2=s1;
    s2.show();
    getch();
    return 0;
}
