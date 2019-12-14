#include<conio.h>
#include<iostream>
using namespace std;
class val
{
    private:
        int aval,bval;
    public:
        void get(int a,float b)
        {
            aval=a;
            bval=b;
        }

        void put(void)
        {
            cout<<aval<<"\n";
            cout<<bval<<"\n";
        }
        void sum(val,val);
};

void val :: sum(val v1,val v2)
{
    aval=v1.aval+v2.aval;
    bval=v1.bval+v2.bval;
}

int main()
{
    val v1,v2,v3;
    v1.get(2,4);
    v2.get(3,6);
    v3.sum(v1,v2);   //v3=v1+v2
    v1.put();
    v2.put();
    v3.put();
    getch();
    return 0;
}
