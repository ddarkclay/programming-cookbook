#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
        private :
            int no,i,flag=0;
        public :
            void display();
            sample();
};
        sample::sample()
        {
            cout << " Enter your number : ";
            cin>> no;
        }
        void sample::display()
        {
            for(i=2;i<no;i++)
            {
                if(no%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout << no<<" Not a prime number \n" << endl;
            else
                cout << no<<" prime number \n" << endl;

            if(no%2==1)
                cout <<no<< " Odd number " << endl;
            else
                cout <<no<< " Even number " << endl;
        }
int main()
{
    sample s1;
    cout<<endl<<endl;
    s1.display();
    getch();
    return 0;
}
