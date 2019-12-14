#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	int len;
	cout<<"Enter Your Password : ";
	cin>>str;
	//int j=1;
	len=strlen(str);
	for(int i=0;i<len;i+=2)
		{
			cout<<str[i]<<" ";
			for(int j=1;j<len;j+=2)
				{
					switch(str[j])	
						{
							case 'A': case 'a': case 'J': case 'j': case 'S': case 's':
								cout<<"1 ";
								break;
							case 'B': case 'b': case 'K': case 'k': case 'T': case 't':
								cout<<"2 ";
								break;
							case 'C': case 'c': case 'L': case 'l': case 'U': case 'u':
								cout<<"3 ";
								break;
							case 'D': case 'd': case 'M': case 'm': case 'V': case 'v':
								cout<<"4 ";
								break;
							case 'E': case 'e': case 'N': case 'n': case 'W': case 'w':
								cout<<"5 ";
								break;
							case 'F': case 'f': case 'O': case 'o': case 'X': case 'x':
								cout<<"6 ";
								break;
							case 'G': case 'g': case 'P': case 'p': case 'Y': case 'y':
								cout<<"7 ";
								break;
							case 'H': case 'h': case 'Q': case 'q': case 'Z': case 'z':
								cout<<"8 ";
								break;
							case 'I': case 'i': case 'R': case 'r':
								cout<<"9 ";
								break;
							
						}
					break;
				}
			
		}
		//for(int i=0;i<len;i+=2)
		//{
			//cout<<str[i]<<" ";
		//}
	//getch();
	return 0;
	
}





//if(str[i]=='A' || str[i]=='a' || str[i]=='J' || str[i]=='j' || str[i]=='S' || str[i]=='s')
//					{
	//						Cout<<;
		//			}
