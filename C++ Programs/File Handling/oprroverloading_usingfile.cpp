#include<fstream>
//#include<conio.h>
#include<iostream>
using namespace std;
class sample
{
private:
    char name[20];
    int age;
    float sal;
public:
    friend ostream & operator<<(ostream & a, sample & s);
    friend istream & operator>>(istream & b, sample & s);
};
ostream & operator<<(ostream & a, sample & s)
{
    a<<s.name<<s.age<<s.sal;
    return a;
}
istream & operator>>(istream & b, sample & s)
{
    b>>s.name>>s.age>>s.sal;
    return b;
}
int main()
{
    sample t1;
    cout<<"enter name, age, salary";
    cin>>t1;
    cout<<t1;
    return 0;
}
