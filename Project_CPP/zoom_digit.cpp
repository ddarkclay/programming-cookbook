// C++ program to zoon digits of an integer
#include <bits/stdc++.h>
using namespace std;

void zoomDigits(int number)
{
    // Converting number to string
    stringstream ss;
    ss << number;
    string str = ss.str();

    for (int k=0; k<str.length(); k++)
    {
        switch(str[k]-'0')
        {
        case 0:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (i==0 || i==4)
                        cout << '@';
                    else if (j==0 || j==4)
                        cout << '@';
                    else
                        cout << " ";

                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 1:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (j==2)
                        cout << '@';
                    else if ((i==1 && j==1))
                        cout << '@';
                    else if (i==4)
                        cout << '@';
                    else
                        cout << " ";

                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 2:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<4; j++)
                {
                    if (i==0 && j==4)
                        cout << " ";
                    else if (i==0 || i==4)
                        cout << '@';
                    else if (i==1 && j==0)
                        cout << '@';
                    else if (i==(4-j))
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 3:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (i==0 || i==2 || i==4)
                        cout << '@';
                    else if (j==4)
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 4:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (j==4)
                        cout << '@';
                    else if (i==2)
                        cout << '@';
                    else if (j==0 && (i==0 || i==1))
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 5:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (i==0 || i==2 || i==4)
                        cout << '@';
                    else if ((j==0 && i==1) ||
                             (j==4 && i==3))
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 6:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (i==0 || i==2 || i==4)
                        cout << '@';
                    else if ((j==0 && (i==1 || i==3)) ||
                                       (j==4 && i==3))
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 7:
            for (int i=0 ; i<5; i++)
            {
                for (int j=0 ; j<5; j++)
                {
                    if (i==0 && (j!=4))
                        cout << '@';
                    else if (i==2 && (j==2 || j==4))
                        cout << '@';
                    else if (j==3)
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 8:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if (i==0 || i==2 || i==4)
                        cout << '@';
                    else if ((j==0 && (i==1 || i==3) ||
                            (j==4 && (i==1 || i==3))))
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;

        case 9:
            for (int i=0; i<5; i++)
            {
                for (int j=0; j<5; j++)
                {
                    if ( i==0 || i==2 || j==4)
                        cout << '@';
                    else if (i==1 && j==0)
                        cout << '@';
                    else
                        cout << " ";
                }
                cout << endl;
            }
            cout << "-------------------------------\n\n";
            continue;
        }
    }
}

// Driver code
int main()
{
    long long number = 12305;
    zoomDigits(number);
    return 0;
}
