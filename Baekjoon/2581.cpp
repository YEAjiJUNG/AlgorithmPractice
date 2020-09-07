#include <iostream>

using namespace std;

int main()
{
    int M, N;
    int sum = 0;

    cin >> M >> N;
    int min = 10001;

    for(int i = M; i <= N; i++)
    {
        bool check = true;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                check = false;
                break;
            }
        }
        if(check && i != 1)
        {
            sum += i;

            if (min > i) 
            {
                min = i;
            }
        }
    }
    if(sum == 0) cout << -1 << endl;
    else
    {
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;
    
}