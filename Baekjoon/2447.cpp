#include <iostream>

using namespace std;

bool star(int i, int j, int n)
{
    int i_abs = i % n;
    int j_abs = j % n;

    if(n == 1)
    return true;

    if(n/3 <= i_abs && i_abs < 2*n/3 && n/3 <= j_abs && j_abs < 2*n/3)
    return false;

    return true && star(i, j, n/3);
}

int main()
{
    int N;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(star(i, j, N))
            cout << "*";

            else
            cout << " ";
        }

        cout << endl;
    }


    return 0;
}