#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
char n1[20],n2[20],a[20],b[20];
int i,j,k,tot=0;
cout<<"\n Enter the boy name  : ";
cin>>a;
cout<<"\n Enter the girl name : ";
cin>>b;
cout<<endl;
strcpy(n1,a);
strcpy(n2,b);
i=strlen(a);
j=strlen(b);
tot=i+j;
for(i=0;a[i]!=NULL;i++)
{
for(j=0;b[j]!=NULL;j++)
{
if(a[i]==b[j])
{
tot=tot-2;
b[j]='*';
break;
}
}
}
//cout<<"\n count = "<<tot<<endl;
if(tot == 2 ||tot== 4 || tot==7 ||tot==9 )
cout<<   n1 << " and " << n2 << " are Enemy";
else if( tot == 3 ||tot==5 || tot==14 ||tot==16 || tot==18 )
cout<<   n1 << " and " << n2 << " are Friends";
else if( tot == 8 || tot==12 || tot==17)
cout<<   n1 << " and " << n2 << " in Affection";
else if( tot == 10)
    cout<<   n1 << " and " << n2 << " Love";
    else if( tot == 6 || tot==11 || tot==15)
    cout<<   n1 << " and " << n2 << " will arriage";
    else
    cout<<   n1 << " and " << n2 << " are SweetHearts";
    getch();
return 0;
}