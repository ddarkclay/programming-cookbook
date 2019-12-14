#include <iostream>
#include <conio.h>

using namespace std;

class sample
    {
        private:
            int feet;
            float inch;
        public:
            sample(int f,float i);
            void operator ++();
            void display();

    };

sample :: sample(int f,float i)
{
    feet=f;
    inch=i;
}

void sample::display()
{
    cout<<"Feet is : "<<feet<<"\n\t\t";
    cout<<"Inch is : "<<inch<<"\n\t\t";
}

void sample :: operator ++()
{
    feet++;
    inch++;
}

int main()
{
    int num1,num2;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    sample s(num1,num2);
    cout<<"\nEntered Number Are : ";
    s.display();
    ++s;
    cout<<"\nChange Number Are : ";
    s.display();
    getch();
    return 0;
}
