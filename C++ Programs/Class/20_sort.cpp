#include<iostream>
#include<conio.h>
using namespace std;
class sorting
{
    private : int no[5],i,j,temp;
    public :
        void getdata()
            {
                for(i=0;i<5;i++)
                {
                    cin>>no[i];
                }
            }
        void sor()
            {
                for (i=0;i<5;i++)
                {
                      for(j=i+1;j<5;j++)
                         {
                             if (no[i]>no[j])
                             {
                                temp = no[i];
                                no[i]= no[j];
                                no[j] = temp;
                              }
                          }
                }
                for(i=0;i<5;i++)
                {
                    cout<<no[i]<<"  ";
                }
            }
};
int main()
{
    sorting s;
    cout<<"Enter Five Numbers : ";
    s.getdata();
    cout<<"\n\nSorted Array : ";
    s.sor();
    getch();
    return 0;
}
