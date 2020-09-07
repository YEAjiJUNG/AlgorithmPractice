#include <iostream>

using namespace std;

int main()
{
    int A,i;
    cin >> A;

    for(i=1; i<10; i++)
    {
        cout << A << " * " << i << " = " << A*i << endl;
    }
    return 0;
}