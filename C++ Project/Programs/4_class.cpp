#include<iostream>
#include<conio.h>
using namespace std;
class star
{
    int r,c,n=1;
    public: void test()
        {
            for(r=1;r<=4;r++)
            {
                for(c=1;c<=r;c++)
                {
                    cout<<n<<" ";
                    n++;
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
