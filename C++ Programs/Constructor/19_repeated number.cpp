#include <iostream>
#include<conio.h>
using namespace std;
class complex
{
   private : int arr[5],i,j,count=1;
   public :
      complex()
      {
          int count=1;
          cout<<"Enter Five Numbers : ";
          for(i=0;i<5;i++)
          {
              cin>>arr[i];
          }
          for(i=0;i<5;i++)
          {
              for(j=i+1;j<5;j++)
              {
                  if(arr[i]==arr[j])
                  {
                      cout<<"\n\nRepeated Number is :"<<arr[i];
                      count++;
                      cout<<endl<<arr[i]<<" is Repeated by "<<count<<" times .";
                  }
              }
          }
      }
};

int main()
{
    complex c;
    getch();
    return 0;
}
