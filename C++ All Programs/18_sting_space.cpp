#include <iostream>
using namespace std;

int main()
{
	char name[100]={0};

	//read name
	cout<<"Enter your name: ";
	cin.getline(name,100);

	//print name
	cout<<"Name is: "<<name<<endl;

	return 0;
}
