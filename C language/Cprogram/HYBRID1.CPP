#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class University
{
public:
int uni_id;
int bca_id,mca_id;
char bca_name[10],mca_name[20];
void SetUniver()
{
cout <<"\nAccept university id";
cin>>uni_id;
}
};
class Bca:public virtual University
{
public:
int proj_id;
void SetBca()
{
cout<<"\nEnter subject id and sub name";
cin>>bca_id>>bca_name;
cout<<"\nEnter project id";
cin>>proj_id;
}
};
class Mca:public virtual University
{
public:
int train_id;
void SetMca()
{
cout<<"\nEnter subject id and sub name";
cin>>mca_id>>mca_name;
cout<<"\nEnter training id";
cin>>train_id;
}
};
class stud:public Bca,public Mca
{
private:
public:
void PrintData()
{
cout <<uni_id<<endl;
cout <<bca_id
     <<bca_name
     <<proj_id<<endl;
cout <<mca_id
     <<mca_name
     <<train_id<<endl;
}
};
void main()
{
stud obj;
obj.SetUniver();
obj.SetBca();
obj.SetMca();
obj.PrintData();
getch();
}


