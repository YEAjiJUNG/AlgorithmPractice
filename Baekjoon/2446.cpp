#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for(int i=num; i>=1; i--)
    {
        for(int j=1; j<=num-i; j++)
        {
            cout << " ";
        }
        for(int j=(i*2)-1; j>0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<num; i++)
    {
        for(int j=1; j<=num-i-1; j++)
        {
            cout << " ";
        }
        for(int j=1; j<=(i*2)+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}