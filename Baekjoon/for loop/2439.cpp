#include <iostream>

using namespace std;

int main()
{
    int N,i,j;
    cin >> N;

    for(i=0; i<N; i++)
    {
        for(j=i; j<N-1; j++)
        {
            cout << " ";
        }
        for(j=0; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}