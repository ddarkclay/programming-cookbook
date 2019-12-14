#include <iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
  int n=3,c,r,space=1;
  cout<<"Enter Row of Star Pattern : ";
  cin>>n;
  cout<<"Star Pattern of For "<<n<<" Rows : ";
  cout<<"\n\n\n";
  space=n-1;
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=space;c++)
      cout<<"   ";
    space--;

    for(c=1;c<=2*r-1;c++)
        if(r==c)
            cout<<" # ";
        else
            cout<<" * ";
    cout<<"\n";
  }
  space = 1;
  for(r= 1;r<=n-1;r++)
  {
    for(c=1;c<=space;c++)
      cout<<"   ";
    space++;

    for(c=1;c<=2*(n-r)-1;c++)
      if(r=c)
            cout<<" # ";
      else
            cout<<" * ";
    cout<<"\n";
  }
  getch();
  return 0;
}
