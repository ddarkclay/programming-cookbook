/* program to copy the contents of file1 to file2*/
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
 void main()
{
ifstream Obj1;
ofstream Obj2;
  char ch;
  clrscr();
  Obj1.open("file1.txt");
  if(Obj1.fail())
  {
    cout<<"\n\t\aFile can not be open";
  }
  Obj2.open("file2.txt");
  while(Obj1)
  {
  Obj1.get(ch);
  Obj2.put(ch);
  }
  cout<<"File transfer is over.........";
  Obj1.close();
  Obj2.close();
  getch();
}
