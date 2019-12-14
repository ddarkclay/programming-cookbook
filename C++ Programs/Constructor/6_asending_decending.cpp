#include<iostream>
#include<conio.h>
using namespace std;
class sort
{
    private : int num[5],i,j,desc;
    public :
        sort()
        {
            cout<<"Enter Five Numbers : ";
            for (i = 0; i < 5; ++i)
                cin>>num[i];
            for (i = 0; i < 5; ++i)
            {
                for (j = i + 1; j < 5; ++j)
                {
                    if (num[i] > num[j])
                    {
                        desc = num[i];
                        num[i] = num[j];
                        num[j] = desc;
                    }
                }
            }
            cout<<"\n Numbers in Ascending Order : \n";
            for (i = 0; i < 5; ++i)
            {
                cout<<" ";
                cout<<num[i];
                cout<<"  ";
            }

            //Decending Order
             for (i = 0; i < 5; ++i)
            {
                for (j = i + 1; j < 5; ++j)
                {
                    if (num[i] < num[j])
                    {
                        desc = num[i];
                        num[i] = num[j];
                        num[j] = desc;
                    }
                }
            }
            cout<<"\n\n\n Numbers in Descending Order : \n";
            for (i = 0; i < 5; ++i)
            {
                cout<<" ";
                cout<<num[i];
                cout<<"  ";
            }
        }
};
int main ()
{
    sort s;
    getch();
    return 0;
}
