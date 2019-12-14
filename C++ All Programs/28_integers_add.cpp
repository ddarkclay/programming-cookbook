#include <iostream>
#include <conio.h>

using namespace std;

class addition
{
private:
    int n, sum=0, c, value;
public:
    void display()
    {
        cout<<"Enter the number of integers you want to add :";
        cin>>n;

        cout<<"\n Enter "<<n<<" integers "<<"\n";

        for(c=1; c<=n; c++)
        {
            cin>>value;
            sum = sum + value;

        }
        cout<<"Sum of Entered integers :"<<sum;
    }
};
int main()
{
        addition a;
        a.display();
    return 0;
}
