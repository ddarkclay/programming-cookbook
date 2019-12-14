//program for multilevel inheritance
#include<iostream.h>
#include<conio.h>

class stud
{
protected:
int rn;
public:
void getd(int);
void putd();
};

void stud::getd(int a)
{
rn=a;
}

void stud::putd()
{
cout<<"\n"<<"roll number=: "<<rn;

}

class test:public stud
{
protected:
   float sub1,sub2;
   public:
    void getm(float,float);
    void putm();
};

void test::getm(float x,float y)
{
  sub1=x;
  sub2=y;
}
void test::putm()
{
cout<<"\n"<<"SUNJECT1="<<sub1<<"\n"<<"SUBJECT2="<<sub2;
}

class result:public test
{
float total;
public:
void display();
};

void result::display()
{
total=sub1+sub2;
putd();
putm();
cout<<"\n"<<"Total="<<total;
}

int main()
{
//clrscr();
result res1;
res1.getd(11);
res1.getm(75,60) ;
res1.display();

getch();
return 0;
}