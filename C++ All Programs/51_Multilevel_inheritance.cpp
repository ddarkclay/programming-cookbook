#include<iostream>
#include<conio.h>
using namespace std;
class student
{
protected:
    int rollnumber;
public:
    void getnumber(int);
    void putnumber();
};
void student::getnumber(int a)
{
    rollnumber=a;
}
void student::putnumber()
{
    cout<<"Roll Number= "<<rollnumber<<endl;
}
class test:public student
{
    protected:float sub1,sub2;
    public:
        void getmark(float,float);
        void putmark();
};
void test::getmark(float x,float y)
{
    sub1=x;
    sub2=y;
}
void test::putmark()
{
   cout<<"\nMarks of First Subject is : "<<sub1<<endl<<"Marks of Second Subject is : "<<sub2;
}
class result:public test
{
    protected:float total;
    public:
        void display();
};
void result::display()
{
    total=sub1+sub2;
    putnumber();
    putmark();
    cout<<endl;
    cout<<"Total : "<<total<<endl;
}
int main()
{
    result s1;
    int rn,subject1,subject2;
    cout<<"Enter Your Roll Number : ";
    cin>>rn;
    s1.getnumber(rn);
    cout<<endl;
    cout<<"Enter Two Subjects Marks : ";
    cin>>subject1>>subject2;
    s1.getmark(subject1,subject2);
    s1.display();
    getch();
    return 0;
}
