#include<iostream>
#include<conio.h>
using namespace std;
class star
{
    int i;
    unsigned char j;
    public: void test()
        {
            for(i='A';i<='E';i++)
            {
                for(j='A';j<=i;j++)
                {
                    cout<<j<<"  ";
                }
                cout<<endl;
            }
        }
};
int main()
{
    star obj;
    obj.test();
    getch();
    return 0;
}

