#include<iostream>
//#include<conio.h>
using namespace std;
class sample
{
private:
    int val1,val2;
public:
    sample(int x,int y);
    void operator ++();   //prefix of ++ operator
    void operator ++(int x);   //postfix of ++ operator
    void operator --();   //prefix of -- operator
    void operator --(int x);   //postfix of -- operator
    void display();
};
sample::sample(int x, int y)
{
    val1=x;
    val2=y;
}
void sample::operator ++()
{
    ++val1;
    ++val2;

}
void sample::operator ++(int x)
{
    val1++;
    val2++;
}

void sample::operator --()
{
    --val1;
    --val2;

}
void sample::operator --(int x)
{
    val1--;
    val2--;
}

void sample::display()
{
    cout<<"value1 = "<<val1<<endl;
    cout<<"value2 = "<<val2<<endl;
}
int main()
{
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
    sample e1(n1,n2),e2(n1,n2);

	++e1;
    cout<<endl;
    cout<<"Prefix Form of ++ Operator : "<<endl;
    e1.display();
    e1++;
    cout<<endl;
    cout<<"Postfix Form of ++ Operator : "<<endl;
    e1.display();

    cout<<endl<<endl;

    --e2;
    cout<<endl;
    cout<<"Prefix Form of -- Operator : "<<endl;
    e2.display();
    e2--;
    cout<<endl;
    cout<<"Postfix Form of -- Operator : "<<endl;
    e2.display();
    //getch();
    return 0;
}
