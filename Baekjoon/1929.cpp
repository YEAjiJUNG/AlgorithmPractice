#include <iostream>

using namespace std;

int main()
{
    int M, N;

    cin >> M >> N;

    for(int i = M; i <= N; i++)
    {
        bool check = true;

        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                check = false;
                break;
            }
        }
        if(check && i != 1)
        {
            cout << i << "\n";
        }
    }
    return 0;
}