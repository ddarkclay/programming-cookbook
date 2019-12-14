#include<iostream.h>
#include<conio.h>
class empinfo
{
protected:
char empname[30];
int empno;
public:
void get_empinfo();
void print_empinfo();
};
void empinfo::get_empinfo()
{
cout<<"\n Enter Employee Name: " ;
cin.getline(empname,30);
cout<<"\n Employee Number: ";
cin>>empno;
}
void empinfo::print_empinfo()
{
cout<<"\n Name: "<<empname;
cout<<"\n Number: "<<empno;
}
class empearn
{
protected:
int bp,hra;
public:
void get_empearn();
void print_empearn();
};
void empearn::get_empearn()
{
cout<<"\n Enter Basic Pay: ";
cin>>bp;
cout<<"\n Enter HRA: ";
cin>>hra;
}
void empearn::print_empearn()
{
cout<<"\n Basic Pay: "<<bp;
cout<<"\n HRA      : "<<hra;
}
class empdedn
{
protected:
int da,pf;
public:
void get_empdedct();
void print_empdedct();
//void print_netsalary();
};
void empdedn::get_empdedct()
{
cout<<"\n Enter DA : ";
cin>>da;
cout<<"\n Enter PF: ";
cin>>pf;
}
void empdedn::print_empdedct()
{
cout<<"\n PF       : "<<pf;
cout<<"\n DA      : "<<da;
}
class empsal:public empinfo,public empearn,public empdedn
{
protected:
int totalsal;
public:
void calcsal();
};
void empsal::calcsal()
{
totalsal=bp+hra+da-(pf);
cout<<"\n Net Salary: "<<totalsal;
}
int main()
{
empsal e1;
//clrscr();
e1.get_empinfo();
e1.get_empearn();
e1.get_empdedct();
e1.print_empinfo();
e1.print_empearn();
e1.print_empdedct();
e1.calcsal();
getch();
return 0;
}
