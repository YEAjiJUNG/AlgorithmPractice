#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 1, cnt = 0;

    cin >> n;

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        sum += 6 * i;

        if(sum >= n)
        {
            cnt = i+1;
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}