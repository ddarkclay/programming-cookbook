#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
private:
    char name[30];
    float salary;
public:
    void set (char *s,float n);
    void show();
};
class officers:public employee
{
private:
    float hra;
public:
    void sethra(float n);
    void showhra ();
};
    void employee::set(char *s,float n)
    {
        strcpy(name,s);
        salary=n;
    }
    void employee::show()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Salary= "<<salary<<endl;
    }
    void officers::sethra(float n)
    {
        hra=n;
    }
    void officers::showhra()
    {
        cout<<"HRA= "<<hra;
    }
int main()
{
    officers a;
    char name[30];
    long sal,hra;
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>sal;
    cout<<"Enter hra: ";
    cin>>hra;
    cout<<endl<<endl;
    a.set(name,sal);
    a.sethra(hra);
    a.show();
    a.showhra();
    getch();
    return 0;
}
