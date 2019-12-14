#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class sample
{
private:
    char str1[20];
    int len;
public:
    void getstr()
    {
        cout<<"Enter String: ";
        cin>>str1;
        len=strlen(str1);
    }
    friend int operator < (sample & s1,sample & s2);
    friend int operator > (sample & s1,sample & s2);
    friend int operator == (sample & s1,sample & s2);
};
int operator < (sample & s1,sample & s2)
{
    if(s1.len < s2.len)
        return 1;
    else
        return 0;
}
int operator > (sample & s1,sample & s2)
{
     if(s1.len > s2.len)
        return 1;
    else
        return 0;
}
int operator == (sample & s1,sample & s2)
{
     if(s1.len == s2.len)
        return 1;
    else
        return 0;
}
int main()
{
    sample x,y;
    x.getstr();
    y.getstr();
    if(x<y)
        cout<<"string 1 is less than string 2";
    if(x>y)
        cout<<"string 1 is greater than string 2";
    if(x==y)
        cout<<"Both strings are equal";
        getch();
        return 0;
}
