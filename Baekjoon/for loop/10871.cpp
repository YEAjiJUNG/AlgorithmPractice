#include <iostream>

using namespace std;

int main()
{
    int N,x,i;
    cin >> N >> x;

    for(i=0; i<N; i++)
    {
        int a;
        cin >> a;

        if(a<x)
        {
            cout << a << " ";
        }

    }
    cout << endl;

    return 0;

}