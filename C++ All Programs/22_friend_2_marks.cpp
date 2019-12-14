//Addition of three number
#include<conio.h>
#include<iostream>
using namespace std;
class sample
{
    private:
        int sub1,sub2,sub3;
    public:
        void get();
    friend int total(sample temp);
};

void sample :: get()
{
    cout<<"Enter the First Subject Marks :";
    cin>>sub1;
    cout<<"Enter the Second Subject Marks :";
    cin>>sub2;
    cout<<"Enter the Third Subject Marks :";
    cin>>sub3;
}

int total(sample temp)
{
    return(temp.sub1+temp.sub2+temp.sub3);
}

int main()
{
    sample s;
    s.get();
    cout<<"\n Total Marks are = "<<total(s);
    getch();
    return 0;
}
