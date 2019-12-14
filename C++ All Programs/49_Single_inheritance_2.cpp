#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
private:
    int roll_no;
    char name[30];
    int marks[3];
public:
    void seta (int ,char *,int [] );
    void show();
};
class data:public student
{
private:
    float percentage;
    int sum=0;
public:

};
    void student::seta(int no,char *s,int mars[3])
    {
        roll_no=no;
        strcpy(name,s);
        for(int i=1;i<=3;i++)
        {
            marks[i]=mars[i];
        }
    }

     void display()
    {
        for(int i=1;i<=3;i++)
        {
            sum=sum+marks[i];
        }
        percentage=sum;

    }

    void student::show()
    {
        cout<<"Student Roll Number is : "<<roll_no<<endl;
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Percentage is= "<<percentage<<endl;
    }


int main()
{
data a;
    int roll_number,i,mark[3];
    char name[30];


        cout<<"Enter Student Roll No.: ";
        cin>>roll_number;
        cout<<"Enter Student Name: ";
        cin>>name;
        for(int i=0;i<=3;i++)
        {
            cout<<"Enter students's marks for "<<i<<" subject= ";
            cin>>mark[i];
        }
        cout<<"\n";
        for(int i=0;i<=3;i++)
        {
         a.seta(roll_number,name,mark[i]);
        }
        a.show();


    getch();
    return 0;
}
